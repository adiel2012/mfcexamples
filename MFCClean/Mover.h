#pragma once

#include <afxdialogex.h>
#include "View2.h"


class Mover
{
private:
	View2* ventana = nullptr;
public:
	Mover();
	~Mover();


	void suscribe()
	{
		ventana->inform_action = [&](int up, int right)
		{

			CRect rect1;
			//
			// get the current position of the button 1
			//
			ventana->BTN_BALL.GetWindowRect(&rect1);
			ventana->ScreenToClient(&rect1);

			int x = rect1.left + (10 * right);
			int y = rect1.top + 10 * up;
			ventana->BTN_BALL.SetWindowPos(NULL, x, y, 20, 20,0);

		};
	}

	CDialog* run()
	{
		
		if (ventana == nullptr){
			ventana = new View2();
			suscribe();
		}

		return ventana;
	}

};

