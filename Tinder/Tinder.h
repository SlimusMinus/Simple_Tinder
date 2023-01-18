#pragma once
#include <iostream>
#include <locale.h>
#include <vector>
using namespace std;



class Tinder
{
private:
	string gender, name, surname, zodiac_sign, town;
	int age;
	double count;
	string gender_f, zodiac_sign_f, town_f;
	int age_f, age_f2;
	vector <Tinder> vec;
	vector <string> vect_s;

public:

	Tinder(string gender, string name, string surname, int age, string zodiac_sign, string town,
		string gender_f, string zodiac_sign_f, string town_f, int age_f, int age_f2, vector <string> vect_s, double count);
	
	Tinder(string gender, string name, string surname, int age, string zodiac_sign, string town,
		string gender_f, string zodiac_sign_f, string town_f, int age_f, int age_f2, vector <string> vect_s);
	//friend ostream& operator << (ostream& os, Tinder& tin);
	void interest ();
	void Run(Tinder tn, vector <Tinder> vec);
	void Print();

};

