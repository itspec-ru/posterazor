// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef PosteRazorDialogUI_h
#define PosteRazorDialogUI_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Wizard.H>
#include <FL/Fl_Round_Button.H>

class PosteRazorDialogUI {
public:
  Fl_Double_Window* make_window();
private:
  void cb_Next_i(Fl_Button*, void*);
  static void cb_Next(Fl_Button*, void*);
  void cb_2_i(Fl_Button*, void*);
  static void cb_2(Fl_Button*, void*);
public:
  Fl_Wizard *m_wizard;
  Fl_Group *m_previewImageGroup;
private:
  void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
public:
  virtual void next(void) = 0;
  virtual void prev(void) = 0;
  virtual void LoadInputImage(void) = 0;
  virtual void resize(int, int, int, int) = 0;
  void show(int argc, char** argv);
};
#endif