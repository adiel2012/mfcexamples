#pragma once
#include <afxwin.h>
#include <afxext.h>
#include "SplitterWindowTutorialView.h"

class MFC_Tutorial_Window2 :public CFrameWnd
{
private:
	CSplitterWnd m_mainSplitter;
	BOOL m_bInitSplitter;
public:
	MFC_Tutorial_Window2();
	~MFC_Tutorial_Window2();


	//BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
	//{
	//	//calculate client size
	//	CRect cr;
	//	GetWindowRect(&cr);

	//	// Create the main splitter with 1 row and 2 columns
	//	if (!m_mainSplitter.CreateStatic(this, 1, 2))
	//	{
	//		MessageBox(_T("Error setting up m_mainSplitter"), _T("ERROR"), MB_OK | MB_ICONERROR);
	//		return FALSE;
	//	}

	//	// The views for each pane must be created 
	//	if (!m_mainSplitter.CreateView(0, 0, RUNTIME_CLASS(CSplitterWindowTutorialView),
	//		CSize(cr.Width() / 2, cr.Height()), pContext))
	//	{
	//		MessageBox(_T("Error setting up splitter view"), _T("ERROR"), MB_OK | MB_ICONERROR);
	//		return FALSE;
	//	}

	//	if (!m_mainSplitter.CreateView(0, 1, RUNTIME_CLASS(CSplitterWindowTutorialView),
	//		CSize(cr.Width() / 2, cr.Height()), pContext))
	//	{
	//		MessageBox(_T("Error setting up splitter view"), _T("ERROR"), MB_OK | MB_ICONERROR);
	//		return FALSE;
	//	}

	//	//change flag to show splitter created
	//	m_bInitSplitter = true;

	//	//return TRUE instead of the parent method since that would
	//	//not show our window
	//	return TRUE;
	//}

	void OnSize(UINT nType, int cx, int cy)
	{
		CFrameWnd::OnSize(nType, cx, cy);

		CRect cr;
		GetWindowRect(&cr);

		if (m_bInitSplitter && nType != SIZE_MINIMIZED)
		{
			m_mainSplitter.SetRowInfo(0, cy, 0);
			m_mainSplitter.SetColumnInfo(0, cr.Width() / 2, 50);
			m_mainSplitter.SetColumnInfo(1, cr.Width() / 2, 50);

			m_mainSplitter.RecalcLayout();
		}
	}


protected:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
};

