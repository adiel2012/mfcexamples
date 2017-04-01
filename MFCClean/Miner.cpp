#include "Miner.h"
#include <string>
#include <iostream>


Miner::Miner(int dim)
{

	int height = 10;
	int width = 10;

	this->dim = dim;
	




	form = std::make_unique<MinesDialog>(new MinesDialog());

	form->inform_paint = [&](MinesDialog* form)
	{


		CRect rc;
		form->GetClientRect(&rc);

		int hf = rc.Height();
		int wf = rc.Width();
		int gap = 2;

        

		int h = (hf - (this->dim - 1)*gap) / this->dim;
		int w = (wf - (this->dim - 1)*gap) / this->dim;
		for (int i = 0; i <this->dim ; i++)
		{
			for (int j = 0; j < this->dim; j++)
			{
				CButton* btn = new CButton();
				std::string ouputString = std::to_string(i) + "," + std::to_string(j);
				CString aa = ouputString.c_str();
				//m_dynEdit.CreateEx(WS_EX_CLIENTEDGE, _T("EDIT"), _T("Initial text"), ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_TABSTOP | WS_BORDER, CRect(10, 10, 100, 100), form, 1);
				UINT id = BUTTON_RANGE_START + i*(this->dim) + j;
				btn->Create(aa, WS_VISIBLE | WS_TABSTOP | WS_BORDER | ES_NOHIDESEL | ES_READONLY, CRect(i*(w + gap), j*(h + gap), i*(w + gap) + w, j*(h + gap) + h), form, id );
				std::cout << id <<std::endl;
				buttons.push_back(btn);
			}

		}

		BUTTON_RANGE_END = BUTTON_RANGE_START + this->dim * this->dim;

	};


	form->inform_button_index = [&](int btn_index)
	{
		
		CButton* btn = buttons.at(btn_index);

		int length = btn->GetWindowTextLengthW();
		LPTSTR buf = new TCHAR[length];
		
		btn->GetWindowTextW(buf, 40);
		CString cad (buf);
//		delete[] buf;

		AfxMessageBox(cad);

		
	};
}


Miner::~Miner()
{
	
}

CDialog* Miner::run() const
{
	return form.get();
}
