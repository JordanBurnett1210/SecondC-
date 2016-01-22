/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: jbur0473
 */

#include "SillyAppController.h"
#include <iostream>
using namespace std;

SillyAppController :: SillyAppController()
{
	this->count = 99;
	this->favAn = "Panda";
}

void SillyAppController :: setCount(int count)
{
	this->count = count;
}

int SillyAppController ::getCount()
{
	return this->count;
}

void SillyAppController :: start()
{
	cout << "In the SillyAppController's start method" << endl;
	cout << getCount() << " is the count right now " << endl;
	cout << "Type in a new value for count please" << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the updated count" << endl;
	cout << "Do you have a favorite animal?" << endl;
	string favAn;
	cin >> favAn;
	cout << "I like " get(favAn)
}
