#pragma once
#include "resource.h"
#include "afxwin.h"


// Cuadro de diálogo de MouseDialog

class MouseDialog : public CDialog
{
	DECLARE_DYNAMIC(MouseDialog)

public:
	MouseDialog(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~MouseDialog();

// Datos del cuadro de diálogo
	enum { IDD = IDD_DIALOG_MOUSE1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:

	void display(CString str)
	{
		MiTexto.SetWindowTextW(str);
	}

	//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnNcLButtonDown(UINT nHitTest, CPoint point);
	afx_msg void OnNcLButtonUp(UINT nHitTest, CPoint point);
	CEdit MiTexto;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
