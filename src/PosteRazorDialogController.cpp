/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2008 by Alessandro Portale
	http://posterazor.sourceforge.net/

	This file is part of PosteRazor

	PosteRazor is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	
	PosteRazor is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with PosteRazor; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include "PosteRazorDialogController.h"
#include "mainwindow.h"
#include <QSettings>
#include <QFileDialog>
#include <QMessageBox>

const QLatin1String settingsKey_LaunchPDFApplication("launchPDFApplication");

PosteRazorDialogController::PosteRazorDialogController()
	: m_PosteRazor(0)
	, m_Dialog(0)
	, m_launchPDFApplication(true)
{
}

void PosteRazorDialogController::setPosteRazorAndDialog(PosteRazor *model, MainWindow *dialog)
{
	m_PosteRazor = model;
	m_Dialog = dialog;

	connect(m_Dialog, SIGNAL(paperCustomWidthChanged(double)), SLOT(setCustomPaperWidth(double)));
	connect(m_Dialog, SIGNAL(loadImageSignal()), SLOT(loadInputImage()));
	connect(m_Dialog, SIGNAL(needsPaint(PaintCanvasInterface*, const QVariant&)), model, SLOT(paintOnCanvas(PaintCanvasInterface*, const QVariant&)));
	connect(model, SIGNAL(previewImageChanged(const unsigned char*, const QSize&)), dialog, SLOT(setPreviewImage(const unsigned char*, const QSize&)));

	updateDialog();
	setDialogPosterSizeMode();
}

void PosteRazorDialogController::updateDialog(void)
{
	setDialogPaperOptions();
	setDialogPosterOptions();
	setDialogOverlappingOptions();
	setDialogImageInfoFields();
	setDialogSaveOptions();
	m_Dialog->setUnitOfLength(m_PosteRazor->getUnitOfLength());
	updatePreview();
}

void PosteRazorDialogController::updatePreview(void)
{
	m_Dialog->updatePreview();
}

void PosteRazorDialogController::setUnitOfLength(UnitsOfLength::eUnitsOfLength unit)
{
	m_PosteRazor->setUnitOfLength(unit);
	updateDialog();
}

void PosteRazorDialogController::setPaperFormat(const QString &format)
{
	m_PosteRazor->setPaperFormat(format);
	setDialogPosterOptions();
	setDialogPaperBorders();
	updatePreview();
}

void PosteRazorDialogController::setPaperOrientation(PaperFormats::ePaperOrientations orientation)
{
	m_PosteRazor->setPaperOrientation(orientation);
	setDialogPosterOptions();
	setDialogPaperBorders();
	updatePreview();
}

void PosteRazorDialogController::setPaperBorderTop(double border)
{
	m_PosteRazor->setPaperBorderTop(border);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setPaperBorderRight(double border)
{
	m_PosteRazor->setPaperBorderRight(border);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setPaperBorderBottom(double border)
{
	m_PosteRazor->setPaperBorderBottom(border);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setPaperBorderLeft(double border)
{
	m_PosteRazor->setPaperBorderLeft(border);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setCustomPaperWidth(double width)
{
	m_PosteRazor->setCustomPaperWidth(width);
	setDialogPosterOptions();
	setDialogPaperBorders();
	updatePreview();
}

void PosteRazorDialogController::setCustomPaperHeight(double height)
{
	m_PosteRazor->setCustomPaperHeight(height);
	setDialogPosterOptions();
	setDialogPaperBorders();
	updatePreview();
}

void PosteRazorDialogController::setUseCustomPaperSize(bool useIt)
{
	m_PosteRazor->setUseCustomPaperSize(useIt);
	setDialogPosterOptions();
	setDialogPaperBorders();
	updatePreview();
}

void PosteRazorDialogController::setOverlappingWidth(double width)
{
	m_PosteRazor->setOverlappingWidth(width);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setOverlappingHeight(double height)
{
	m_PosteRazor->setOverlappingHeight(height);
	setDialogPosterOptions();
	updatePreview();
}

void PosteRazorDialogController::setOverlappingPosition(PosteRazorEnums::eOverlappingPositions position)
{
	m_PosteRazor->setOverlappingPosition(position);
	updatePreview();
}

void PosteRazorDialogController::setPosterWidth(PosteRazorEnums::ePosterSizeModes mode, double width)
{
	m_PosteRazor->setPosterWidth(mode, width);
	setDialogPosterDimensions(mode, true);
}

void PosteRazorDialogController::setPosterHeight(PosteRazorEnums::ePosterSizeModes mode, double height)
{
	m_PosteRazor->setPosterHeight(mode, height);
	setDialogPosterDimensions(mode, false);
}

void PosteRazorDialogController::setPosterSizeMode(PosteRazorEnums::ePosterSizeModes mode)
{
	m_PosteRazor->setPosterSizeMode(mode);
}

void PosteRazorDialogController::setPosterHorizontalAlignment(PosteRazorEnums::eHorizontalAlignments alignment)
{
	m_PosteRazor->setPosterHorizontalAlignment(alignment);
	updatePreview();
}

void PosteRazorDialogController::setPosterVerticalAlignment(PosteRazorEnums::eVerticalAlignments alignment)
{
	m_PosteRazor->setPosterVerticalAlignment(alignment);
	updatePreview();
}

void PosteRazorDialogController::setPosterOutputFormat(ImageIOTypes::eImageFormats format)
{
	m_PosteRazor->setPosterOutputFormat(format);
}

void PosteRazorDialogController::setLaunchPDFApplication(bool launch)
{
	m_launchPDFApplication = launch;
	setDialogSaveOptions();
}

void PosteRazorDialogController::setDialogSaveOptions(void)
{
	m_Dialog->setLaunchPDFApplication(m_launchPDFApplication);
}

void PosteRazorDialogController::setDialogPosterSizeMode(void)
{
	m_Dialog->setPosterSizeMode(m_PosteRazor->getPosterSizeMode());
}

void PosteRazorDialogController::setDialogPosterOptions(void)
{
	setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModeNone, true);
	m_Dialog->setPosterHorizontalAlignment(m_PosteRazor->getPosterHorizontalAlignment());
	m_Dialog->setPosterVerticalAlignment(m_PosteRazor->getPosterVerticalAlignment());
	m_Dialog->setPosterSizeMode(m_PosteRazor->getPosterSizeMode());
}

void PosteRazorDialogController::setDialogPosterDimensions(PosteRazorEnums::ePosterSizeModes excludedMode, bool widthExcluded)
{
	static const struct	{
		bool isWidth;
		PosteRazorEnums::ePosterSizeModes sizeMode;
	} sizeModes[] = {
		{true, PosteRazorEnums::ePosterSizeModeAbsolute},
		{false, PosteRazorEnums::ePosterSizeModeAbsolute},
		{true, PosteRazorEnums::ePosterSizeModePages},
		{false, PosteRazorEnums::ePosterSizeModePages},
		{true, PosteRazorEnums::ePosterSizeModePercentual}
	};

	const int sizeModesCount = sizeof(sizeModes)/sizeof(sizeModes[0]);

	for (int i = 0; i < sizeModesCount; i++) {
		if ((excludedMode != sizeModes[i].sizeMode) || (widthExcluded != sizeModes[i].isWidth)) {
			if (sizeModes[i].isWidth)
				m_Dialog->setPosterWidth(sizeModes[i].sizeMode, m_PosteRazor->getPosterWidth(sizeModes[i].sizeMode));
			else
				m_Dialog->setPosterHeight(sizeModes[i].sizeMode, m_PosteRazor->getPosterHeight(sizeModes[i].sizeMode));
		}
	}
	updatePreview();
}

void PosteRazorDialogController::setDialogPaperOptions(void)
{
	setDialogPaperBorders();
	setDialogCustomPaperDimensions();
	m_Dialog->setUseCustomPaperSize(m_PosteRazor->getUseCustomPaperSize());
	m_Dialog->setPaperFormat(m_PosteRazor->getPaperFormat());
	m_Dialog->setPaperOrientation(m_PosteRazor->getPaperOrientation());
}

void PosteRazorDialogController::setDialogPaperBorders(void)
{
	m_Dialog->setPaperBorderTop(m_PosteRazor->getPaperBorderTop());
	m_Dialog->setPaperBorderRight(m_PosteRazor->getPaperBorderRight());
	m_Dialog->setPaperBorderBottom(m_PosteRazor->getPaperBorderBottom());
	m_Dialog->setPaperBorderLeft(m_PosteRazor->getPaperBorderLeft());
}

void PosteRazorDialogController::setDialogCustomPaperDimensions(void)
{
	m_Dialog->setCustomPaperWidth(m_PosteRazor->getCustomPaperWidth());
	m_Dialog->setCustomPaperHeight(m_PosteRazor->getCustomPaperHeight());
}

void PosteRazorDialogController::setDialogImageInfoFields(void)
{
	if (m_PosteRazor->getIsImageLoaded()) {
		m_Dialog->updateImageInfoFields (
			m_PosteRazor->getInputImageWidthPixels(),
			m_PosteRazor->getInputImageHeightPixels(),
			m_PosteRazor->getInputImageWidth(),
			m_PosteRazor->getInputImageHeight(),
			m_PosteRazor->getUnitOfLength(),
			m_PosteRazor->getInputImageVerticalDpi(),
			m_PosteRazor->getInputImageHorizontalDpi(),
			m_PosteRazor->getInputImageColorType(),
			m_PosteRazor->getInputImageBitsPerPixel()
		);
	}
}

void PosteRazorDialogController::setDialogOverlappingDimensions(void)
{
	m_Dialog->setOverlappingWidth(m_PosteRazor->getOverlappingWidth());
	m_Dialog->setOverlappingHeight(m_PosteRazor->getOverlappingHeight());
}

void PosteRazorDialogController::setDialogOverlappingOptions(void)
{
	setDialogOverlappingDimensions();
	m_Dialog->setOverlappingPosition(m_PosteRazor->getOverlappingPosition());
}

bool PosteRazorDialogController::readSettings(const QSettings *settings)
{
	const bool result = m_PosteRazor->readSettings(settings);
	m_launchPDFApplication = settings->value(settingsKey_LaunchPDFApplication, m_launchPDFApplication).toBool();

	if (result)
		updateDialog();

	return result;
}

bool PosteRazorDialogController::writeSettings(QSettings *settings) const
{
	settings->setValue(settingsKey_LaunchPDFApplication, m_launchPDFApplication);
	return m_PosteRazor->writeSettings(settings);
}

void PosteRazorDialogController::loadInputImage(void)
{
	QStringList filters;
	QStringList allExtensions;

	for (int formatIndex = 0; formatIndex < ImageIOTypes::getInputImageFormatsCount(); formatIndex++) {
		int extensionsCount = ImageIOTypes::getFileExtensionsCount(formatIndex);

		QStringList filterExtensions;
		for (int extensionIndex = 0; extensionIndex < extensionsCount; extensionIndex++) {
			filterExtensions << "*." + QString(ImageIOTypes::getFileExtensionForFormat(extensionIndex, formatIndex));
		}
		allExtensions << filterExtensions;

		filters << QString(ImageIOTypes::getInputImageFormat(formatIndex)) + " (" + filterExtensions.join(" ") + ")";
	}
	filters.prepend(QCoreApplication::translate("PosteRazorDialog", "All image formats") + " (" +  allExtensions.join(" ") + ")"); 

	static const QString loadPathSettingsKey("loadPath");
	QSettings loadPathSettings;

	QString loadFileName = QFileDialog::getOpenFileName (
		NULL,
		QCoreApplication::translate("PosteRazorDialog", "Load an input image"),
		loadPathSettings.value(loadPathSettingsKey, ".").toString(),
		filters.join(";;")
	);

	if (!loadFileName.isEmpty()) {
		bool successful = loadInputImage(loadFileName);
		if (successful)
			loadPathSettings.setValue(loadPathSettingsKey, QFileInfo(loadFileName).absolutePath());
	}
}

bool PosteRazorDialogController::loadInputImage(const QString &fileName)
{
	char errorMessage[1024];
	const bool successful = loadInputImage(fileName.toAscii(), errorMessage, sizeof(errorMessage));
	if (!successful) {
		QMessageBox::critical(NULL, QCoreApplication::translate("PosteRazorDialog", "Loading Error"), QCoreApplication::translate("PosteRazorDialog", "The Image '%1' could not be loaded.").arg(fileName));
	} else {
//		m_paintCanvas->requestImage();
	}

	return successful;
}

bool PosteRazorDialogController::loadInputImage(const char *imageFileName, char *errorMessage, int errorMessageSize)
{
	const bool result = m_PosteRazor->loadInputImage(imageFileName, errorMessage, errorMessageSize);

	if (result) {
		updateDialog();
		m_Dialog->showImageFileName(imageFileName);
	}

	return result;
}

int PosteRazorDialogController::savePoster(const char *fileName) const
{
	const int result = m_PosteRazor->savePoster(fileName);
	if (result == 0 && m_launchPDFApplication)
		m_Dialog->launchPdfApplication(fileName);
	return result;
}

void PosteRazorDialogController::savePoster() const
{
	static const QLatin1String savePathSettingsKey("savePath");
	QSettings savePathSettings;

	QString saveFileName = savePathSettings.value(savePathSettingsKey, ".").toString();
	bool fileExistsAskUserForOverwrite = false;

	do {
		saveFileName = QFileDialog::getSaveFileName(
			NULL,
			QCoreApplication::translate("PosteRazorDialog", "Choose a filename to save under"),
			saveFileName,
			QLatin1String("Portable Document format (*.pdf)"),
			NULL,
			QFileDialog::DontConfirmOverwrite
		);

		if (!saveFileName.isEmpty()) {
			if (QFileInfo(saveFileName).suffix().toLower() != QLatin1String("pdf"))
				saveFileName.append(".pdf");

			fileExistsAskUserForOverwrite = QFileInfo(saveFileName).exists();

			if (!fileExistsAskUserForOverwrite
				|| QMessageBox::Yes == (QMessageBox::question(NULL, "", QCoreApplication::translate("PosteRazorDialog", "The file '%1' already exists.\nDo you want to overwrite it?").arg(saveFileName), QMessageBox::Yes, QMessageBox::No))
				) {
				int result = savePoster(saveFileName.toAscii());
				if (result != 0)
					QMessageBox::critical(NULL, "", QCoreApplication::translate("PosteRazorDialog", "The File \"%1\" could not be saved.").arg(saveFileName), QMessageBox::Ok, QMessageBox::NoButton);
				else
					savePathSettings.setValue(savePathSettingsKey, QFileInfo(saveFileName).absolutePath());
				fileExistsAskUserForOverwrite = false;
			}
		} else {
			break;
		}
	} while (fileExistsAskUserForOverwrite);
}
