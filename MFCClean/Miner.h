#pragma once
#include <memory>
#include "MinesDialog.h"
#include <vector>



class Miner
{
private:
	int dim = 8;
	std::unique_ptr<MinesDialog> form = nullptr;
	std::vector<CButton*> buttons;

	
public:
	Miner(int dim);
	~Miner();

	CDialog* run() const;
};

