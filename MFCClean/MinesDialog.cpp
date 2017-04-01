// MinesDialog.cpp: archivo de implementación
//

#include "stdafx.h"
#include "MinesDialog.h"
#include "afxdialogex.h"


// Cuadro de diálogo de MinesDialog

IMPLEMENT_DYNAMIC(MinesDialog, CDialog)

MinesDialog::MinesDialog(CWnd* pParent /*=NULL*/)
	: CDialog(MinesDialog::IDD, pParent)
{

}

MinesDialog::~MinesDialog()
{
}

void MinesDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BOOL MinesDialog::OnInitDialog()
{
	if (inform_paint != nullptr)
		inform_paint(this);


	return true;
}


BEGIN_MESSAGE_MAP(MinesDialog, CDialog)

	ON_CONTROL_RANGE(BN_CLICKED, BUTTON_RANGE_START, BUTTON_RANGE_END, OnButton)
END_MESSAGE_MAP()


// Controladores de mensajes de MinesDialog
