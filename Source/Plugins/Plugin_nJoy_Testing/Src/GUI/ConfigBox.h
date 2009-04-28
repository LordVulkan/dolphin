//////////////////////////////////////////////////////////////////////////////////////////
// Project description
// ŻŻŻŻŻŻŻŻŻŻŻŻŻŻŻŻŻŻŻ
// Name: nJoy 
// Description: A Dolphin Compatible Input Plugin
//
// Author: Falcon4ever (nJoy@falcon4ever.com)
// Site: www.multigesture.net
// Copyright (C) 2003-2008 Dolphin Project.
//
//////////////////////////////////////////////////////////////////////////////////////////
//
// Licensetype: GNU General Public License (GPL)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.
//
// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/
//
// Official SVN repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/
//
//////////////////////////////////////////////////////////////////////////////////////////

#ifndef __CONFIGBOX_h__
#define __CONFIGBOX_h__

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/dialog.h>
#else
	#include <wx/wxprec.h>
#endif

#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/statbmp.h>


class ConfigBox : public wxDialog
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		ConfigBox(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Configure: nJoy Input Plugin"),
			const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE);
		virtual ~ConfigBox();		
		
	private:
		wxButton *m_About;
		wxButton *m_OK;
		wxButton *m_Cancel;
				
		wxPanel *m_Controller[5];		
		wxNotebook *m_Notebook;

		wxComboBox *m_Joyname[4];
		wxComboBox *m_Controltype[4];
		wxComboBox *m_Deadzone[4];
		
		wxCheckBox *m_Joyattach[4];

		wxStaticBox *m_gJoyname[4];
		wxStaticBox *m_gExtrasettings[4];
		wxStaticBox *m_gControllertype[4];

		wxTextCtrl *m_JoyShoulderL[4];
		wxTextCtrl *m_JoyShoulderR[4];

		wxButton *m_bJoyShoulderL[4];
		wxButton *m_bJoyShoulderR[4];

		wxTextCtrl *m_JoyButtonA[4];
		wxTextCtrl *m_JoyButtonB[4];
		wxTextCtrl *m_JoyButtonX[4];
		wxTextCtrl *m_JoyButtonY[4];
		wxTextCtrl *m_JoyButtonZ[4];
		wxTextCtrl *m_JoyButtonStart[4];
		wxTextCtrl *m_JoyButtonHalfpress[4];

		wxButton *m_bJoyButtonA[4];
		wxButton *m_bJoyButtonB[4];
		wxButton *m_bJoyButtonX[4];
		wxButton *m_bJoyButtonY[4];
		wxButton *m_bJoyButtonZ[4];
		wxButton *m_bJoyButtonStart[4];
		wxButton *m_bJoyButtonCalibrate[4];
		wxButton *m_bJoyButtonHalfpress[4];

		wxTextCtrl *m_JoyAnalogMainX[4];
		wxTextCtrl *m_JoyAnalogMainY[4];
		wxTextCtrl *m_JoyAnalogSubX[4];
		wxTextCtrl *m_JoyAnalogSubY[4];

		wxButton *m_bJoyAnalogMainX[4];
		wxButton *m_bJoyAnalogMainY[4];
		wxButton *m_bJoyAnalogSubX[4];
		wxButton *m_bJoyAnalogSubY[4];

		wxTextCtrl *m_JoyDpadUp[4];
		wxTextCtrl *m_JoyDpadDown[4];
		wxTextCtrl *m_JoyDpadLeft[4];
		wxTextCtrl *m_JoyDpadRight[4];

		wxButton *m_bJoyDpadUp[4];
		wxButton *m_bJoyDpadDown[4];
		wxButton *m_bJoyDpadLeft[4];
		wxButton *m_bJoyDpadRight[4];

		wxStaticText *m_textMainX[4];
		wxStaticText *m_textMainY[4];
		wxStaticText *m_textDpadUp[4];
		wxStaticText *m_textDpadDown[4];
		wxStaticText *m_textDpadLeft[4];
		wxStaticText *m_textDpadRight[4];
		wxStaticText *m_textDeadzone[4];
		wxStaticText *m_textHalfpress[4];
		wxStaticText *m_textSubX[4];
		wxStaticText *m_textSubY[4];
		wxStaticText *m_textWebsite[4];
		
		wxTextCtrl *m_PlaceholderBMP[4];
		wxStaticBitmap *m_controllerimage[4];
	
		// DEBUG
		wxStaticText *m_textAxises[16]; // Support 16 axises
		wxTextCtrl *m_JoyAxises[16]; // Support 16 axises
		wxButton *m_bJoyDebug;
		
		int notebookpage;		
	private:
		enum
		{
			ID_ABOUT = 1000,
			ID_OK,
			ID_CANCEL,
			ID_NOTEBOOK,
			ID_CONTROLLERPAGE1,
			ID_CONTROLLERPAGE2,
			ID_CONTROLLERPAGE3,
			ID_CONTROLLERPAGE4,
			ID_CONTROLLERPAGE5,

			IDC_JOYNAME,
			IDC_CONTROLTYPE,
			IDC_DEADZONE,

			IDC_JOYATTACH,
			IDG_JOYSTICK,
			IDG_EXTRASETTINGS,
			IDG_CONTROLLERTYPE,
			ID_CONTROLLERPICTURE,

			ID_SHOULDER_L = 2000,
			ID_SHOULDER_R,
			
			ID_BUTTON_A,
			ID_BUTTON_B,
			ID_BUTTON_X,
			ID_BUTTON_Y,
			ID_BUTTON_Z,
			ID_BUTTONSTART,
			ID_BUTTONHALFPRESS,

			ID_ANALOG_MAIN_X,
			ID_ANALOG_MAIN_Y,
			ID_ANALOG_SUB_X,
			ID_ANALOG_SUB_Y,

			ID_DPAD_UP,
			ID_DPAD_DOWN,
			ID_DPAD_LEFT,
			ID_DPAD_RIGHT,

			IDB_SHOULDER_L = 3000,
			IDB_SHOULDER_R,

			IDB_BUTTON_A,
			IDB_BUTTON_B,
			IDB_BUTTON_X,
			IDB_BUTTON_Y,
			IDB_BUTTON_Z,
			IDB_BUTTONSTART,
			IDB_BUTTONHALFPRESS,

			IDB_ANALOG_MAIN_X,
			IDB_ANALOG_MAIN_Y,
			IDB_ANALOG_SUB_X,
			IDB_ANALOG_SUB_Y,

			IDB_DPAD_UP,
			IDB_DPAD_DOWN,
			IDB_DPAD_LEFT,
			IDB_DPAD_RIGHT,

			IDT_ANALOG_MAIN_X = 4000,
			IDT_ANALOG_MAIN_Y,
			IDT_DPAD_UP,
			IDT_DPAD_DOWN,
			IDT_DPAD_LEFT,
			IDT_DPAD_RIGHT,
			IDT_DEADZONE,
			IDT_BUTTONHALFPRESS,
			IDT_ANALOG_SUB_X,
			IDT_ANALOG_SUB_Y,
			IDT_WEBSITE,
			ID_BUTTONCALIBRATE,
			
			ID_DEBUGAXISCTRLTEXT0,
			ID_DEBUGAXISCTRLTEXT1,
			ID_DEBUGAXISCTRLTEXT2,
			ID_DEBUGAXISCTRLTEXT3,
			ID_DEBUGAXISCTRLTEXT4,
			ID_DEBUGAXISCTRLTEXT5,
			ID_DEBUGAXISCTRLTEXT6,
			ID_DEBUGAXISCTRLTEXT7,
			ID_DEBUGAXISCTRLTEXT8,
			ID_DEBUGAXISCTRLTEXT9,
			ID_DEBUGAXISCTRLTEXT10,
			ID_DEBUGAXISCTRLTEXT11,
			ID_DEBUGAXISCTRLTEXT12,
			ID_DEBUGAXISCTRLTEXT13,
			ID_DEBUGAXISCTRLTEXT14,
			ID_DEBUGAXISCTRLTEXT15,
			
			ID_DEBUGAXISSTATICTEXT0,
			ID_DEBUGAXISSTATICTEXT1,
			ID_DEBUGAXISSTATICTEXT2,
			ID_DEBUGAXISSTATICTEXT3,
			ID_DEBUGAXISSTATICTEXT4,
			ID_DEBUGAXISSTATICTEXT5,
			ID_DEBUGAXISSTATICTEXT6,
			ID_DEBUGAXISSTATICTEXT7,
			ID_DEBUGAXISSTATICTEXT8,
			ID_DEBUGAXISSTATICTEXT9,
			ID_DEBUGAXISSTATICTEXT10,
			ID_DEBUGAXISSTATICTEXT11,
			ID_DEBUGAXISSTATICTEXT12,
			ID_DEBUGAXISSTATICTEXT13,
			ID_DEBUGAXISSTATICTEXT14,
			ID_DEBUGAXISSTATICTEXT15,
			
			IDB_BUTTONDEBUGSTART,
			
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
	
	private:
		void AboutClick(wxCommandEvent& event);
		void OKClick(wxCommandEvent& event);
		void CancelClick(wxCommandEvent& event);

		void ChangeJoystick(wxCommandEvent& event);
		void ChangeControllertype(wxCommandEvent& event);

		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();

		void SetControllerAll(int controller);
		void UpdateVisibleItems(int controller);
		void GetControllerAll(int controller);

		void NotebookPageChanged(wxNotebookEvent& event);

		void Calibrate(wxCommandEvent& event);
		void GetInputs(wxCommandEvent& event);
		void GetHats(int ID);
	
		void StartDebug(wxCommandEvent& event);

		void SetButtonText(int id, char text[128]);		
};

#endif
