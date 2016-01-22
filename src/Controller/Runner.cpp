/*
 * Runner.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jbur0473
 */

#include "SillyAppController.h"

int main()
{
	SillyAppController * baseController = new SillyAppController();
	baseController->start();
	(*baseController).start();
	return 0;
}


