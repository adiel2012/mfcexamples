#include <afxwin.h>
#include "Mover.h"
#include "View2.h"
#include "MinesDialog.h"
#include "Miner.h"
#include "MouseDialog.h"
#include "MFC_Tutorial_Window2.h"

class MFC_Tutorial_Window :public CFrameWnd
{
public:
	MFC_Tutorial_Window()
	{
		CFrameWnd::Create(NULL, _T("MFC Tutorial Part 1 CoderSource Window",
			 WS_OVERLAPPEDWINDOW,
			 rectDefault,
			 NULL,        // != NULL for popups
			 LPCTSTR lpszMenuName = IDR_MENU1,
			 0,
			 NULL));


	}

};

class MyApp :public CWinApp
{
	MFC_Tutorial_Window2 *wnd;
public:
	BOOL InitInstance()
	{
		wnd = new MFC_Tutorial_Window2();
		m_pMainWnd = wnd;
		m_pMainWnd->ShowWindow(SW_SHOW);

		
		/*Mover m;
		CDialog* forma = m.run();
		forma->DoModal();*/
		//m_pMainWnd = forma;  // &g;


		/*Miner m(5);
		CDialog* forma = m.run();
		forma->DoModal();*/

		/*MouseDialog* forma = new MouseDialog();
		forma->DoModal();*/

		
		return TRUE;
	}
};

MyApp theApp
;