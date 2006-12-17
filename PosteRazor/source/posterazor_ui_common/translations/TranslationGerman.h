/*
	PosteRazor - Make your own poster!
	Copyright (C) 2005-2006 by Alessandro Portale
	http://posterazor.sourceforge.net/

	This file is part of PosteRazor

	PosteRazor is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.
	
	PosteRazor is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	
	You should have received a copy of the GNU General Public License
	along with PosteRazor; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef TranslationGerman_h
#define TranslationGerman_h

#include "TranslationInterface.h"
#include "TranslationConstants.h"

#define GERMAN_POSTERAZORWEBSITEURL POSTERAZORWEBSITEDOMAIN"?lang=german"

class TranslationGerman: public TranslationInterface
{
public:
	const char* languageName(void)                    {return "Deutsch";}

	const char* absoluteSize(void)                    {return "Absolute Ma�e:";}
	const char* allImageFormats(void)                 {return "Alle Bildformate";}
	const char* back(void)                            {return "Zur�ck";}
	const char* borders(void)                         {return "R�nder";}
	const char* bottom(void)                          {return "Unten";}
	const char* bottomLeft(void)                      {return "Unten links";}
	const char* bottomRight(void)                     {return "Unten rechts";}
	const char* cancel(void)                          {return "Abbruch";}
	const char* colorType(void)                       {return "Farbtyp:";}
	const char* custom(void)                          {return "Eigenes";}
	const char* fileCouldNotBeLoaded(void)            {return "Die Datei \"%s\" konnte nicht geladen werden.";}
	const char* fileCouldNotBeSaved(void)             {return "Die Datei \"%s\" konnte nicht gespeichert werden.";}
	const char* format(void)                          {return "Format:";}
	const char* grayscale(void)                       {return "Graustufen";}
	const char* height(void)                          {return "H�he:";}
	const char* imageAlignment(void)                  {return "Ausrichtung des Bildes";}
	const char* imageInformations(void)               {return "Bildinformationen";}
	const char* imageSize(void)                       {return "Bildgr��e";}
	const char* inputImage(void)                      {return "Ausgangsbild";}
	const char* landscape(void)                       {return "Querformat";}
	const char* language(void)                        {return "Sprache";}
	const char* languageExplanation(void)             {return "W�hlen Sie ihre Sprache";}
	const char* launchPDFApplication(void)            {return "PDF-Applikation nach Speicherung des Posters starten";}
	const char* left(void)                            {return "Links";}
	const char* loadAnInputImage(void)                {return stepTitle01();}
	const char* monochrome(void)                      {return "Monochrom";}
	const char* next(void)                            {return "Weiter";}
	const char* orientation(void)                     {return "Ausrichtung:";}
	const char* overlappingPosition(void)             {return "�berlappende Seiten";}
	const char* overlappingSize(void)                 {return "Ma�e der �berlappung";}
	const char* overwriteFile(void)                   {return "Die Datei '%s' extistiert bereits.\nSoll sie �berschrieben werden?";}
	const char* pages(void)                           {return "Seiten";}
	const char* palette(void)                         {return "Palette";}
	const char* paperFormat(void)                     {return "Papierformat";}
	const char* portrait(void)                        {return "Hochformat";}
	const char* posteRazorHelp(void)                  {return "PosteRazor Hilfe";}
	const char* posteRazorSettings(void)              {return "PosteRazor Einstellungen";}
	const char* posteRazorWebSiteURL(void)            {return GERMAN_POSTERAZORWEBSITEURL;}
	const char* posteRazorWebSite(void)               {return "PosteRazor-Internetseite";}
	const char* previewWithOpenGL(void)               {return "Vorschau mit OpenGL";}
	const char* previewWithOpenGLExplanation(void)    {return "OpenGL erm�glicht eine bessere Vorschau. Auf alter Hardware k�nnte OpenGL jedoch langsamer sein.";}
	const char* resolution(void)                      {return "Aufl�sung:";}
	const char* right(void)                           {return "Rechts";}
	const char* saveThePoster(void)                   {return "Das Poster speichern";}
	const char* saveThePosterAs(void)                 {return "Das Poster speichern unter";}
	const char* settings(void)                        {return "Einstellungen...";}
	const char* Size(void)                            {return "Gr��e:";}
	const char* sizeInPages(void)                     {return "Gr��e in Seiten:";}
	const char* sizeInPercent(void)                   {return "Prozentuelle Gr��e:";}
	const char* sizeInPixels(void)                    {return "Gr��e (in Pixeln):";}
	const char* sizeInUnitOfLength(void)              {return "Gr��e (in %s):";}
	const char* standard(void)                        {return "Standard";}
	const char* stepXOfY(void)                        {return "Schritt %d von %d";}
	const char* top(void)                             {return "Oben";}
	const char* topLeft(void)                         {return "Oben links";}
	const char* topRight(void)                        {return "Oben rechts";}
	const char* unitOfLength(void)                    {return "L�ngeneinheit";}
	const char* unitOfLengthExplanation(void)         {return "W�hlen Sie die L�ngeneinheit, mit der Sie arbeiten m�chten";}
	const char* width(void)                           {return "Breite:";}


#define GERMAN_POSTERAZORHELSTEP                      "Schritt"

#define GERMAN_POSTERAZORHELPABOUT                    "&Uuml;ber den PosteRazor"
#define GERMAN_POSTERAZORHELPMANUAL                   "Bedienungsanleitung"
#define GERMAN_POSTERAZORHELPSETTINGS                 "Einstellungen"
#define GERMAN_POSTERAZORHELPSTEPTITLE01			  "Ein Ausgangsbild laden"
#define GERMAN_POSTERAZORHELPSTEPTITLENOHTML02        "Druckerpapier-Ma�e definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLE02              "Druckerpapier-Ma&szlig;e definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLENOHTML03        "�berlappung der Bildabschnitte definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLE03              "&Uuml;berlappung der Bildabschnitte definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLENOHTML04        "Die finale Postergr��e definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLE04              "Die finale Postergr&ouml;&szlig;e definieren"
#define GERMAN_POSTERAZORHELPSTEPTITLE05              "Das Poster speichern"
#define GERMAN_POSTERAZORHELPINPUTFILEFORMATS         "Unterst&uuml;tzte Ausgangs-Bildformate"
#define GERMAN_POSTERAZORHELPWHYPDFOUTPUT             "Warum PDF als Ausgabeformat?"
#define GERMAN_POSTERAZORHELPCODEFROMTHIRDPARTIES     "Code von Drittanbietern"
#define GERMAN_POSTERAZORHELPLICENSE                  "Lizenz"

	const char* stepTitle01(void)                     {return GERMAN_POSTERAZORHELPSTEPTITLE01;};
	const char* stepTitle02(void)                     {return GERMAN_POSTERAZORHELPSTEPTITLENOHTML02;};
	const char* stepTitle03(void)                     {return GERMAN_POSTERAZORHELPSTEPTITLENOHTML03;};
	const char* stepTitle04(void)                     {return GERMAN_POSTERAZORHELPSTEPTITLENOHTML04;};
	const char* stepTitle05(void)                     {return GERMAN_POSTERAZORHELPSTEPTITLE05;};
	const char* helpHtml(void)
	{
		return	"<HTML>" POSTERAZORHELPENDLINE \
				"<BODY>" POSTERAZORHELPENDLINE \
					"<A name=\"" POSTERAZORHELPANCHORTOP "\"><CENTER><H1>PosteRazor "POSTERAZORVERSION" Hilfe</H1></CENTER></A>" POSTERAZORHELPENDLINE \

					"<H3>Inhaltsverzeichnis</H3>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORABOUT "\">" GERMAN_POSTERAZORHELPABOUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORMANUAL "\">" GERMAN_POSTERAZORHELPMANUAL "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORSETTINGS "\">" GERMAN_POSTERAZORHELPSETTINGS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<UL>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">" GERMAN_POSTERAZORHELSTEP " 1: " GERMAN_POSTERAZORHELPSTEPTITLE01 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP02 "\">" GERMAN_POSTERAZORHELSTEP " 2: " GERMAN_POSTERAZORHELPSTEPTITLE02 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP03 "\">" GERMAN_POSTERAZORHELSTEP " 3: " GERMAN_POSTERAZORHELPSTEPTITLE03 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP04 "\">" GERMAN_POSTERAZORHELSTEP " 4: " GERMAN_POSTERAZORHELPSTEPTITLE04 "</A></LI>" POSTERAZORHELPENDLINE \
							"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP05 "\">" GERMAN_POSTERAZORHELSTEP " 5: " GERMAN_POSTERAZORHELPSTEPTITLE05 "</A></LI>" POSTERAZORHELPENDLINE \
						"</UL>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">" GERMAN_POSTERAZORHELPINPUTFILEFORMATS "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORWHYPDFOUTPUT "\">" GERMAN_POSTERAZORHELPWHYPDFOUTPUT "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">" GERMAN_POSTERAZORHELPCODEFROMTHIRDPARTIES "</A></B></LI>" POSTERAZORHELPENDLINE \
						"<LI><B><A href=\"#" POSTERAZORHELPANCHORLICENSE "\">" GERMAN_POSTERAZORHELPLICENSE "</A></B></LI>" POSTERAZORHELPENDLINE \
					"</UL><HR>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORABOUT, GERMAN_POSTERAZORHELPABOUT) \
					POSTERAZORHELPINDENTATION "Der PosteRazor schneidet ein Rasterbild in St&uuml;cke, die auf einem Drucker ausgedruckt und zu einem Poster zusammengef&uuml;gt werden k&ouml;nnen. Als Ausgangsbilder werden Dateien in <A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">vielen</A> Formaten unterst&uuml;tzt. Anstatt das Bild direkt zu drucken, generiert der PosteRazor ein mehrseitiges PDF-Dokument welches die Bildteile enth&auml;lt.<br>" POSTERAZORHELPENDLINE \
					"Es ist ein Open-Source-Programm, das seinerseits von <a href=\"#" POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES "\">Open-Source-Projekten</a> abh&auml;ngt. " POSTERAZORHELPENDLINE \
					"Der PosteRazor ist unter <b>posterazor.sourceforge.net</b> zu finden." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUAL, GERMAN_POSTERAZORHELPMANUAL) \
					POSTERAZORHELPINDENTATION "Der PosteRazor hat eine Benutzerf&uuml;hrung im \"Assistenten\"-Stil. Alle Einstellungen f&uuml;r die Postererstellung werden in f&uuml;nf Schritten erledigt. Die <b>Weiter</b> und <b>Zur&uuml;ck</b>-Kn&ouml;pfe bl&auml;ttern durch diese Schritte.<br>" POSTERAZORHELPENDLINE \
					"Der <b>?</b>-Knopf &ouml;ffnet ein Hilfefenster mit der Beschreibung des aktuellen Schrittes.<br>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Der PosteRazor merkt sich jede Eingabe und Auswahl bis zur n&auml;chsten Benutzung des Programms." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORSETTINGS, GERMAN_POSTERAZORHELPSETTINGS) \
					POSTERAZORHELPINDENTATION "Durch klicken des <b>Einstellungen...</b>-Knopfes auf der unteren linken Seite des Hauptdialogs wird der Einstellungs-Dialog des PosteRazors ge&ouml;ffnet." POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>L&auml;ngeneinheit:</b> w&auml;hlen Sie die Einheit. mit der Sie Arbeiten werden. Wird die Einheit ver&auml;ndert, werden alle vorgegeben und die bereits selbst eingegeben Werte im Dialog in die neue Einheit umgerechnet.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Sprache:</b> w&auml;hlen Sie Ihre Sprache. Der PosteRazor braucht f&uuml;r die &Auml;nderung der Sprache nicht neu gestartet zu werden.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Vorschau mit OpenGL:</b> bestimmen Sie, ob der PosteRazor OpenGL f&uuml;r die Bild-Vorschau nutzen soll. &Uuml;blicherweise bietet der OpenGL-Modus auf moderner Hardware mehr Geschwindigkeit und ein saubereres als der Modus ohne OpenGL. Aber falls der PosteRazor langsam und ruckelig wirkt, versuchen Sie bitte, ob das Ausschalten von OpenGL Besserung bringt.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP01, GERMAN_POSTERAZORHELSTEP " 1: " GERMAN_POSTERAZORHELPSTEPTITLE01) \
					POSTERAZORHELPINDENTATION "Laden Sie ein Ausgangs-Bild, indem sie auf das \"Neu\"-Symbol klicken und eine Datei w&auml;hlen, oder indem Sie eine Datei auf den PosteRazor fallen lassen (Drag &amp; Drop). Die Drag &amp; Drop-Funktion des Ausgangsbildes ist in allen Assistenten-Schritten vorhanden.<br>" POSTERAZORHELPENDLINE \
					"Viele <a href=\"#" POSTERAZORHELPANCHORINPUTFILEFORMATS "\">Bildformate</a> k&ouml;nnen geladen werden. Nach dem Laden eines Bildes werden in dem Feld <b>Bildinformationen</b> die wichtigsten Angaben aufgelistet." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP02, GERMAN_POSTERAZORHELSTEP " 2: " GERMAN_POSTERAZORHELPSTEPTITLE02) \
					POSTERAZORHELPINDENTATION "Definieren Sie, welches Papierma&szlig; Ihr Drucker unterst&uuml;tzt. Ein Standard-Papierbogen-Format kann in der <b>Format</b>-Auswahl selektiert werden und ebenso die gew&ouml;nschte <b>Ausrichtung</b> der B&ouml;gen. Alternativ k&ouml;nnen in dem <b>Eigenes</b>-Reiter selbstdefinierte Bogenma&szlig;e angegeben werden. (Bitte schreiben Sie mir eine E-Mail, Falls Sie Ihr Standard-Format in der Auswahl vermissen). " POSTERAZORHELPENDLINE \
					"Papierr&auml;nder k&ouml;nnen in den <b>R&auml;nder</b>-Feldern angegeben werden. Auch wenn Ihr Drucker randlos druckt, wird sp&auml;ter gegebenfalls etwas Rand als Klebefl&auml;che ben&ouml;tigt." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP03, GERMAN_POSTERAZORHELSTEP " 3: " GERMAN_POSTERAZORHELPSTEPTITLE03) \
					POSTERAZORHELPINDENTATION "Eine &Uuml;berlappung der Bildabschnitte ist sehr hilfreich, da sie beim Schneiden der &uuml;berf&auml;lligen R&auml;nder und zusammenkleben der Teile eine gewisse Fehlertoleranz ins Spiel bringt. Zus&auml;tzlich bietet sie (ebenso wie die R&auml;nder des vorangegangenen Schrittes) mehr Klebefl&auml;che f&uuml;r die Bildteile. " POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Die Angabe <b>&Uuml;berlappende Seiten</b> beschreibt, welche Seitenr&auml;nder von den Nachbar-Bildabschnitten &Uuml;berlagert werden sollen. Die R&auml;nder auf den gegen&uuml;berliegenden Seiten sind zum Abschneiden gedacht (ausgenommen die auf den &auml;u&szlig;eren Bildabschnitten)." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP04, GERMAN_POSTERAZORHELSTEP " 4: " GERMAN_POSTERAZORHELPSTEPTITLE04) \
					POSTERAZORHELPINDENTATION "Beschreiben Sie auf eine der drei folgenden Weisen die Ma&szlig;e des finalen Posters: Die entsprechende Eingabe-Weise muss per Radio-Button aktiviert sein.<br>" POSTERAZORHELPENDLINE \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>Absolute Ma&szlig;e</b>: Sie wollen, dass das Poster ganz bestimmte Ma&szlig;e hat.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Gr&ouml;&szlig;e in Seiten</b>: Sie wollen die Druckb&ouml;gen komplett nutzen und spezifizieren die Anzahl der B&ouml;gen.</LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Prozentuelle Gr&ouml;&szlig;e</b>: Ihr Ausgangsbild hat gewisse Ma&szlig;e, die von seiner Anzahl an Pixeln und der Aufl&ouml;sung (dpi, dots per Inch) bestimmt werden und sie wollen das Bild auf einen bestimmten Prozentsatz vergr&ouml;&szlig;ern.</LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Das Seitenverh&auml;ltnis ist immer 1:1, bei der Editierung z.B. der Breite wird die H&ouml;he automatisch errechnet. In dem Vorschaubereich k&ouml;nnen Sie die &Uuml;berlappungen der Bildabschnitte als r&ouml;tlich markierte Balken sehen. " POSTERAZORHELPENDLINE \
					"<b>Ausrichtung des Bildes</b> beschreibt die Ausrichtung des Bildes auf der gesamten Papierfl&auml;che des Poster. Diese Eindtellung ist nur dann sinnvoll, wenn das &uuml;berstehende Papier am Ende nicht abgeschnitten werden soll." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORMANUALSTEP05, GERMAN_POSTERAZORHELSTEP " 5: " GERMAN_POSTERAZORHELPSTEPTITLE05) \
					POSTERAZORHELPINDENTATION "Speichern Sie das Poster, indem Sie auf den \"Speichern\"-Knopf klicken und einen Dateinamen und -ort definieren. Aktivieren oder deaktivieren Sie <b>PDF-Applikation nach Speicherung des Posters starten</b>, je nach dem, ob das Poster nach dem Speichern automatisch mit dem Standard-PDF-Programm gestartet werden soll." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORINPUTFILEFORMATS, GERMAN_POSTERAZORHELPINPUTFILEFORMATS) \
					POSTERAZORHELPINDENTATION "Die meisten der Raster-Bild-Formate, die von FreeImage unterst&uuml;tzt werden, k&ouml;nnen vom PosteRazor verarbeitet werden:<br>" POSTERAZORHELPENDLINE \
					"<b>BMP, DDS files, Dr. Halo, GIF, ICO, IFF, JBIG, JNG, JPEG/JIF, KOALA, LBM, Kodak PhotoCD, MNG, PCX, PBM, PGM, PNG, PPM, PhotoShop PSD, Sun RAS, TARGA, TIFF, WBMP, XBM, XPM.<br></b>" POSTERAZORHELPENDLINE \
					"PosteRazor unterscheidet und behandelt Monochrom-, Graustufen-, 4-bit Paletten-, 8-bit Paletten-, 24 bit RGB-, and CMYK-Bilder (CMYK nur im TIF-Format). RGB-Bilder mit einem Alphakanal/Transparenzen werden automatisch auf einen wei&szlig;en Hintergrund reduziert." POSTERAZORHELPENDLINE \

					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORWHYPDFOUTPUT, GERMAN_POSTERAZORHELPWHYPDFOUTPUT) \
					POSTERAZORHELPINDENTATION "Warum PDF als Ausgabeformat, und nicht eine direkte ausgabe &uuml;ber einen Drucker? In erster Linie wei&szlig; der Entwickler dieses Programms (noch) nicht, wie man auf allen Betriebssystemen, auf denen der PosteRazor l&auml;uft, \"Bilder an den Drucker schickt\". Davon abgesehen ist PDF zum Beispiel sinnvoll, wenn ein Poster zu Hause vorbereited wurde, und es am n&auml;chsten Tag mit dem guten Drucker auf der Arbeit gedruckt werden soll (Nat&uuml;rlich erst, wenn Chef und Kollegen Feierabend haben)." POSTERAZORHELPENDLINE \
					POSTERAZORHELPINDENTATION "Warum PDF und nicht andere Raster-Bildformate? PDF bietet die M&ouml;glichkeit, ein ganzes Bild einzubetten und es virtuell zu zerschneiden. Das Zerschneiden ist nicht nur zwischen Pixeln sondern mitten durch Pixel hindurch m&ouml;glich. Au&szlig;erdem ist es praktischer, ein mehrseitiges PDF-Dokument statt mehrerer einzelnder Bilddateien zu drucken." POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORCODEFROMTHIRDPARTIES, GERMAN_POSTERAZORHELPCODEFROMTHIRDPARTIES) \
					"<UL>" POSTERAZORHELPENDLINE \
					"<LI><b>FLTK</b> wird f&uuml;r die grafische Benutzerschnittstelle eingesetzt. Es ist eine kleine (speicherplatzbezogen), schnelle, angenehm einfach zu erlernende UI-Bibliothek. <a href=\"http://www.fltk.org/\">www.fltk.org</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>FreeImage</b> wird f&uuml;r das Laden und Bearbeiten von Bildern genutzt. Diese Bibliothek macht das Laden, bearbeiten und Speuchern zu einem Kinderspiel und es is auf alle Plattformen portierbar, auf denen PosteRazor l&auml;uft. <a href=\"http://freeimage.sourceforge.net/\">FreeImage website</a></LI>" POSTERAZORHELPENDLINE \
					"<LI><b>Fl_Native_File_Chooser</b> wird benutzt, um den Dateidialogen systemspezifisches Aussehen zu verleihen. <a href=\"http://seriss.com/people/erco/fltk/Fl_Native_File_Chooser/\">Internetseite von Fl_Native_File_Chooser</a></LI>" POSTERAZORHELPENDLINE \
					"</UL>" POSTERAZORHELPENDLINE \
					
					POSTERAZORHELPSECTIONHEADER(POSTERAZORHELPANCHORLICENSE, GERMAN_POSTERAZORHELPLICENSE) \
					"PosteRazor - Mach' Dein eigenes Poster!<br>" POSTERAZORHELPENDLINE \
					"<a href=\""GERMAN_POSTERAZORWEBSITEURL"\">posterazor.sourceforge.net</a><br>" POSTERAZORHELPENDLINE \
					"Copyright (C) 2005-2006 by Alessandro Portale<br>&nbsp;<br>" POSTERAZORHELPENDLINE \

					"<b>Franz&ouml;sische &Uuml;bersetzung von Martin Loyer (traduction<b></b>@<b></b>loyer<b></b>.<b></b>name).</b><br>" POSTERAZORHELPENDLINE \
					"<b>Polnische &Uuml;bersetzung von Grzegorz Wacikowski.</b><br>&nbsp;<br>" POSTERAZORHELPENDLINE \

					"Der folgende Lizenztext ist in seiner englischen Originalfassung aufgef&uuml;hrt, da die <a href=\"http://www.gnu.de/gpl-ger.html\">deutsche &Uuml;bersetzung</a> nicht offiziell oder im rechtlichen Sinne anerkannt ist.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"This program is free software; you can redistribute it and/or modify it under the terms of the <a href=\"http://www.gnu.org/licenses/gpl.txt\">GNU General Public License</a> as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.<br>&nbsp;<br>" POSTERAZORHELPENDLINE \
					"You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA." POSTERAZORHELPENDLINE \
				"</BODY>" POSTERAZORHELPENDLINE \
			"</HTML>";
	}

	const int flagImageWidth(void)                    {return 20;}
	const int flagImageHeight(void)                   {return 11;}
	const unsigned char *flagImageRGBData(void)
	{
		static const unsigned char flagRGBData[] =
		{
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,140,140,140,140,140,140,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,140,140,140,140,140,140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
			140,140,140,140,140,140,247,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,
			243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,243,0,0,
			247,0,0,140,140,140,140,140,140,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,247,0,0,
			247,0,0,247,0,0,140,140,140,140,140,140,247,0,0,250,0,0,250,0,0,250,0,0,250,0,0,
			250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,250,0,0,
			250,0,0,250,0,0,247,0,0,140,140,140,140,140,140,254,227,1,253,226,1,253,226,1,
			253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,
			253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,253,226,1,254,227,1,140,140,
			140,140,140,140,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,
			227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,
			227,1,254,227,1,254,227,1,254,227,1,140,140,140,140,140,140,254,227,1,254,227,1,
			254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,
			254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,254,227,1,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,140,
			140,140,140
		};

		return flagRGBData;
	}
};

static TranslationGerman german;

#endif