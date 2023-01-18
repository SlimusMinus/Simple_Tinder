#include "Tinder.h"

Tinder::Tinder(string gender, string name, string surname, int age, 
	string zodiac_sign, string town, string gender_f,string zodiac_sign_f,
	 string town_f, int age_f, int age_f2, vector <string> vect_s, double count)
{
	this->age = age;
	this->gender = gender;
	this->name = name;
	this->surname = surname;
	this->town = town;
	this->zodiac_sign = zodiac_sign;
	this->gender_f = gender_f;
	this->zodiac_sign_f = zodiac_sign_f;
	this->town_f = town_f;
	this->age_f = age_f;
	this->age_f2 = age_f2;
	this->count = count;
	this->vect_s = vect_s;
}

Tinder::Tinder(string gender, string name, string surname, int age, 
	string zodiac_sign, string town, string gender_f,
	string zodiac_sign_f, string town_f, int age_f, int age_f2,
	vector <string> vect_s)
{
	this->age = age;
	this->gender = gender;
	this->name = name;
	this->surname = surname;
	this->town = town;
	this->zodiac_sign = zodiac_sign;
	this->gender_f = gender_f;
	this->zodiac_sign_f = zodiac_sign_f;
	this->town_f = town_f;
	this->age_f = age_f;
	this->age_f2 = age_f2;
	this->vect_s = vect_s;
}

void Tinder::Run(Tinder tn, vector<Tinder> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i].count = 0;
		if (tn.gender_f == vec[i].gender && vec[i].gender_f == tn.gender)
			vec[i].count++;
		if(tn.zodiac_sign_f == vec[i].zodiac_sign && vec[i].zodiac_sign_f == tn.zodiac_sign)
			vec[i].count++;
		if(tn.town_f == vec[i].town && vec[i].town_f == tn.town)
			vec[i].count++;
		if(tn.age_f < vec[i].age && tn.age_f2 > vec[i].age && vec[i].age_f < tn.age && vec[i].age_f2 > tn.age)
			vec[i].count++;
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (tn.vect_s[j] == vec[i].vect_s[i])
					vec[i].count ++;
			}
			
		}
		cout << tn.name << " " << tn.surname << " и " << vec[i].name << " " << vec[i].surname << endl;
		cout << "Выпало " << vec[i].count << " совпадений" << endl;
	}
}

void Tinder::interest()
{
	for (int i = 0; i < vect_s.size(); i++)
	{
		cout << vect_s[i] << " ";
	}
	cout << endl;
}

void Tinder::Print()
{
	cout << name << " " << surname << " " << age << " лет " << zodiac_sign
		<< " родной город - " << town << "\nИщет " << gender_f << " " << zodiac_sign_f
		<< " из города " << town_f << " " << "в возратсе от" << " " << age_f
		<< " до" << " " << age_f2 << " лет\n" << "Интересы" << endl;
	interest();
}


//ostream& operator<<(ostream& os, Tinder& qw)
//{
//	os << qw.name << " " << qw.surname << " " << qw.age << " лет " << qw.zodiac_sign
//		<< " родной город - " << qw.town << "\nИщет " << qw.gender_f << " " << qw.zodiac_sign_f
//		<< " из города " << qw.town_f << " " << "в возратсе от" << " " << qw.age_f
//		<< " до" << " " << qw.age_f2 << " лет" << endl;
//		return os;
//}
