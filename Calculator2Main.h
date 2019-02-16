/***************************************************************
 * Name:      Calculator2Main.h
 * Purpose:   Defines Application Frame
 * Author:    Neal Miskin ()
 * Created:   2019-01-22
 * Copyright: Neal Miskin ()
 * License:
 **************************************************************/

#ifndef CALCULATOR2MAIN_H
#define CALCULATOR2MAIN_H

//(*Headers(Calculator2Frame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/radiobut.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class Calculator2Frame: public wxFrame
{
    public:

        Calculator2Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Calculator2Frame();

    private:

        //(*Handlers(Calculator2Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnPanel1Paint(wxPaintEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnP1Paint(wxPaintEvent& event);
        void OnNavigationKeyEvent(wxNavigationKeyEvent& event);
        void OnCalcBtnClick(wxCommandEvent& event);
        void SetAdd(wxCommandEvent& event);
        void SubSelect(wxCommandEvent& event);
        void MulSelect(wxCommandEvent& event);
        void DivSel(wxCommandEvent& event);
        void ClearFields(wxCommandEvent& event);
        void AnswerPrint(wxString rtnStr);
        void OnAddBtnClick(wxCommandEvent& event);
        void AddSelect(wxCommandEvent& event);
        void DivSelect(wxCommandEvent& event);
        void OnPanel1Paint1(wxPaintEvent& event);
        void OnSubBtnClick(wxCommandEvent& event);
        void OnMulBtnClick(wxCommandEvent& event);
        void OnDivBtnClick(wxCommandEvent& event);
        void OnKeyDown(wxKeyEvent& event);
        void OnTC1Text(wxCommandEvent& event);
        void TCPrint(wxTextCtrl* dest, wxString str);
        void OnR2RClick(wxCommandEvent& event);
        void OnR2LClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(Calculator2Frame)
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_RADIOBUTTON1;
        static const long ID_RADIOBUTTON2;
        static const long ID_RADIOBUTTON3;
        static const long ID_RADIOBUTTON4;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Calculator2Frame)
        wxTextCtrl* TC2;
        wxButton* R2R;
        wxRadioButton* DivRBtn;
        wxButton* R2L;
        wxRadioButton* MulRBtn;
        wxStaticText* StaticText2;
        wxRadioButton* AddRBtn;
        wxStaticText* StaticText1;
        wxTextCtrl* AnswerBox;
        wxStaticText* StaticText3;
        wxTextCtrl* TC1;
        wxRadioButton* SubRBtn;
        wxButton* CalcBtn;
        wxStatusBar* StatusBar1;
        wxButton* ClearBtn;
        wxPanel* P1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CALCULATOR2MAIN_H
