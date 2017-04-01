#pragma once
#include <afxdialogex.h>
#include "resource.h"
#include <functional>
#include <map>


// Cuadro de diálogo de MinesDialog


static int BUTTON_RANGE_START = 1000;
static int BUTTON_RANGE_END = 1110;

class MinesDialog : public CDialog
{
	DECLARE_DYNAMIC(MinesDialog)

public:
	MinesDialog(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~MinesDialog();

	std::function<void(MinesDialog*)> inform_paint;

// Datos del cuadro de diálogo
	enum { IDD = IDD_DIALOG_MINES };

	std::function<void(int)> inform_button_index;
	void OnButton(UINT nButtonID)
	{
		if (inform_button_index != 0)
			inform_button_index(nButtonID - BUTTON_RANGE_START);
		
	}
	//  http://www.codeexperts.com/showthread.php?484-Create-event-handler-for-dynamically-created-conrtol-in-MFC



protected:
	void DoDataExchange(CDataExchange* pDX) override;    // Compatibilidad con DDX/DDV
	BOOL OnInitDialog() override;
	DECLARE_MESSAGE_MAP()
};


