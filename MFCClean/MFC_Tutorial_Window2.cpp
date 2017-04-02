#include "MFC_Tutorial_Window2.h"



MFC_Tutorial_Window2::MFC_Tutorial_Window2()
{
	CFrameWnd::Create(NULL, _T("MFC Tutorial Part 1 CoderSource Window",
		WS_OVERLAPPEDWINDOW,
		rectDefault,
		NULL,        // != NULL for popups
		LPCTSTR lpszMenuName = IDR_MENU1,
		0,
		NULL));
}


MFC_Tutorial_Window2::~MFC_Tutorial_Window2()
{
}

BOOL MFC_Tutorial_Window2::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext * pContext)
{
	//calculate client size 
	CRect cr;
	GetClientRect(&cr);

	if (!m_mainSplitter.CreateStatic(this, 1, 2))
	{
		MessageBox(_T("Error setting up splitter frames!"),
			_T("Init Error!"), MB_OK | MB_ICONERROR);
		return FALSE;
	}

	if (!m_mainSplitter.CreateView(0, 0,
		RUNTIME_CLASS(CSplitterWindowTutorialView),
		CSize(cr.Width() / 2, cr.Height()), pContext))
	{
		MessageBox(
			_T("Error setting up splitter frames!"),
			_T("Init Error!"), MB_OK | MB_ICONERROR);
		return FALSE;
	}

	if (!m_mainSplitter.CreateView(0, 1,
		RUNTIME_CLASS(CSplitterWindowTutorialView),
		CSize(cr.Width() / 2, cr.Height()), pContext))
	{
		MessageBox(_T("Error setting up splitter frames!"),
			_T("Init Error!"), MB_OK | MB_ICONERROR);
		return FALSE;
	}

	m_bInitSplitter = TRUE;

	return true;
}
