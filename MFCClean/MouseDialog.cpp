// MouseDialog.cpp: archivo de implementación
//

#include "stdafx.h"
#include "MouseDialog.h"
#include "afxdialogex.h"
#include <sstream>


// Cuadro de diálogo de MouseDialog

IMPLEMENT_DYNAMIC(MouseDialog, CDialog)

MouseDialog::MouseDialog(CWnd* pParent /*=NULL*/)
: CDialog(MouseDialog::IDD, pParent)
{

}

MouseDialog::~MouseDialog()
{
}

void MouseDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, MiTexto);
}


BEGIN_MESSAGE_MAP(MouseDialog, CDialog)
	//	ON_WM_LBUTTONDBLCLK()
	ON_WM_MOUSEMOVE()
	ON_WM_NCLBUTTONDOWN()
	ON_WM_NCLBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


// Controladores de mensajes de MouseDialog


//void MouseDialog::OnLButtonDblClk(UINT nFlags, CPoint point)
//{
//	// TODO: Agregue aquí su código de controlador de mensajes o llame al valor predeterminado
//
//	CDialog::OnLButtonDblClk(nFlags, point);
//}


void MouseDialog::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Agregue aquí su código de controlador de mensajes o llame al valor predeterminado

	CDialog::OnMouseMove(nFlags, point);

	CString s;

std:std::string str = "OnMouseMove  " + std::to_string(point.x) + " " + std::to_string(point.y);
	CString param = str.c_str();
	display(param);
}


void MouseDialog::OnNcLButtonDown(UINT nHitTest, CPoint point)
{
	// TODO: Agregue aquí su código de controlador de mensajes o llame al valor predeterminado

	CDialog::OnNcLButtonDown(nHitTest, point);

	CString s;

std:std::string str = "OnNcLButtonDown  " + std::to_string(point.x) + " " + std::to_string(point.y);
	CString param = str.c_str();
	display(param);
}


void MouseDialog::OnNcLButtonUp(UINT nHitTest, CPoint point)
{
	// TODO: Agregue aquí su código de controlador de mensajes o llame al valor predeterminado

	CDialog::OnNcLButtonUp(nHitTest, point);

	CString s;

std:std::string str = "OnNcLButtonUp " + std::to_string(point.x) + " " + std::to_string(point.y);
	CString param = str.c_str();
	display(param);

}


void MouseDialog::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Agregue aquí su código de controlador de mensajes o llame al valor predeterminado

	CDialog::OnLButtonDown(nFlags, point);


	CString s;

std:std::string str = "OnLButtonDown " + std::to_string(point.x) + " " + std::to_string(point.y);
	CString param = str.c_str();
	display(param);
}
