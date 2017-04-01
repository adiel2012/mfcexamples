#pragma once
#include "resource.h"
#include <functional>
#include "afxwin.h"


// Cuadro de diálogo de View2

class View2 : public CDialog
{
	//DECLARE_DYNAMIC(View2)

public:
	View2(CWnd* pParent = NULL);   // Constructor estándar
	virtual ~View2();

	std::function<void(int up, int right)> inform_action = nullptr;

// Datos del cuadro de diálogo
	enum { IDD = IDD_DIALOG_N };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Compatibilidad con DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonUp();
	afx_msg void OnBnClickedButtonLeft();
	afx_msg void OnBnClickedButtonRight();
	afx_msg void OnBnClickedButtonDown();
	CButton BTN_UP;
	CButton BTN_LEFT;
	CButton BTN_RIGHT;
	CButton BTN_DOWN;
	CButton BTN_BALL;
};
