 // main.cpp : Includes main function

#include"stdafx.h"
#include <iostream>
#include "gtest/gtest.h"
#include "declarations.h"

using namespace std;

int main(int argc, char** argv)
{

	testing::InitGoogleTest(&argc, argv);
	functionCreateStruct();

	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}
