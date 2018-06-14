﻿// 12.20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

14/20

template <typename T>
void shuffle(vector<T>&v) {
	//PT -- usually best to just put srand calls at the beginning of main.
	srand(time(0));
		for (int i = 0; i < v.size(); i++) {
	T random = (rand() % v.size());
	T tracker = v.at(random);
			//PT -- this just outputs random items in the vector, and
			//      will likely output the same item multiple times and other items not at all, 
			//      which really doesn't match shuffling.
			// You should be modifying the vector in random order.
			//
			// -6
	cout << tracker << endl;

		}

}

//PT -- try this:
/*
template <typename T>
void shuffle(vector<T>&v) {
    //Pick a random number somewhere near the size of the vector
    int turns = v.size() + rand() % 11 + 6;
    for (int i=0; i < turns; i++) {
        //Pick two random locations to swap
        int i1 = rand() % v.size(), i2 = rand() % v.size();
        T tmp = v[i1];
        v[i1] = v[i2];
        v[i2] = tmp;
    }
}
*/
	

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
		v.push_back(9);
		v.push_back(10);

		shuffle(v);

    return 0;
}

