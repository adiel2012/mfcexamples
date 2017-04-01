// View2.cpp: archivo de implementaci�n
//

#include "stdafx.h"
#include "View2.h"
#include "afxdialogex.h"


// Cuadro de di�logo de View2

//IMPLEMENT_DYNAMIC(View2, CDialog)

View2::View2(CWnd* pParent /*=NULL*/)
	: CDialog(View2::IDD, pParent)
{

}

View2::~View2()
{
}

void View2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_UP, BTN_UP);
	DDX_Control(pDX, IDC_BUTTON_LEFT, BTN_LEFT);
	DDX_Control(pDX, IDC_BUTTON_RIGHT, BTN_RIGHT);
	DDX_Control(pDX, IDC_BUTTON_DOWN, BTN_DOWN);
	DDX_Control(pDX, IDC_BUTTON_BALL, BTN_BALL);
}


BEGIN_MESSAGE_MAP(View2, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_UP, &View2::OnBnClickedButtonUp)
	ON_BN_CLICKED(IDC_BUTTON_LEFT, &View2::OnBnClickedButtonLeft)
	ON_BN_CLICKED(IDC_BUTTON_RIGHT, &View2::OnBnClickedButtonRight)
	ON_BN_CLICKED(IDC_BUTTON_DOWN, &View2::OnBnClickedButtonDown)
END_MESSAGE_MAP()


// Controladores de mensajes de View2


void View2::OnBnClickedButtonUp()
{
	// TODO: Agregue aqu� su c�digo de controlador de notificaci�n de control
	if (inform_action != nullptr)
	{
		inform_action(-1,0);
	}
}


void View2::OnBnClickedButtonLeft()
{
	// TODO: Agregue aqu� su c�digo de controlador de notificaci�n de control
	if (inform_action != nullptr)
	{
		inform_action(0, -1);
	}
}


void View2::OnBnClickedButtonRight()
{
	// TODO: Agregue aqu� su c�digo de controlador de notificaci�n de control
	if (inform_action != nullptr)
	{
		inform_action(0, 1);
	}
}


void View2::OnBnClickedButtonDown()
{
	// TODO: Agregue aqu� su c�digo de controlador de notificaci�n de control

	if (inform_action != nullptr)
	{
		inform_action(1, 0);
	}
}
