// search and sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "SortTech.h"
using namespace std;



//--------------------------------------------------------------------------------------------------------------------
int main()
{
	int ary[]
	= { 7,9,20,4,3,8,5,1,2,6 };
	selectionSort(ary, 10);

	//= { 1,2,3,4,5,6,7,8,9,20 };
	//cout<<"index of 4 is " <<binarySearch(ary, 10, 4);

	for (int i = 0; i < 10; i++) { cout << ary[i] << " "; } 
	cout << endl;
	system("pause");
    return 0;
}

