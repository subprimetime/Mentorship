 // main.cpp : Includes main function

#include"stdafx.h"
#include <iostream>
#include <conio.h>
#include "gtest/gtest.h"
#include <Windows.h>
#include "declarations.h"

using namespace std;

int main(int argc, char** argv)
{


	testing::InitGoogleTest(&argc, argv);



	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}
