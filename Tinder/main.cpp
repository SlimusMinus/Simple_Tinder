#include "Tinder.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color F0");
	system("chcp 1251");
	system("cls");
	const int num_menu = 2;
	int ch = 0, active_menu = 0;
	bool z;
	string gender, name, surname, zodiac_sign, town, gender_f, zodiac_sign_f, town_f, inter;
	vector <string> interest;
	int age, age_f, age_f2, q;
	
	
	do
	{
		do
		{
			cout << "\n\tДобро пожаловать в TINDER!!!" << endl << "\tНажмите Enter и приступите к вводу своих данных\n" << endl;
			system("pause");
			system("cls");
			cout << "Введите ваш пол - ";	cin >> gender;
			transform(gender.begin(), gender.end(), gender.begin(), tolower);
			cout << "Введите ваше имя - ";	cin >> name;
			cout << "Введите вашу фамилию - ";	cin >> surname;
			do
			{
				cout << "Введите ваш возраст - ";	cin >> age;
				try
				{
					int atoi(age);
					if (age == 0 || age < 0 || age > 100)
						throw exception("Введенный вами возраст некорректен, повторите ввод");
				}
				catch (exception& str)
				{
					cout << str.what() << endl;
				}

			} while (age == 0 || age < 0 || age > 100);

			cout << "Введите ваш знак зодиака - ";	cin >> zodiac_sign;
			transform(zodiac_sign.begin(), zodiac_sign.end(), zodiac_sign.begin(), tolower);
			cout << "Введите ваш город проживания - ";	cin >> town;
			transform(town.begin(), town.end(), town.begin(), tolower);
			cout << "\nВведите ваши интересы" << endl;
			do
			{
				cin >> inter;
				transform(inter.begin(), inter.end(), inter.begin(), tolower);
				interest.push_back(inter);
				cout << "Если хотите добавить ещё нажмите 1, нет 0" << endl;
				cin >> q;

			} while (q == 1);
			cout << "\nА теперь введите поисковые данные о вашей второй половинке)\n" << endl;
			cout << "Введите пол - ";	cin >> gender_f;
			transform(gender_f.begin(), gender_f.end(), gender_f.begin(), tolower);
			cout << "Введите знак зодиака - ";	cin >> zodiac_sign_f;
			transform(zodiac_sign_f.begin(), zodiac_sign_f.end(), zodiac_sign_f.begin(), tolower);
			cout << "Введите город проживания - ";	cin >> town_f;
			transform(town_f.begin(), town_f.end(), town_f.begin(), tolower);
			do
			{
				cout << "Введите возраст от - "; cin >> age_f;
				cout << " до ";	cin >> age_f2;
				try
				{
					if (age_f == 0 || age_f < 0 || age_f > 100 || age_f2 == 0 || age_f2 < 0 || age_f2 > 100)
						throw exception("Введенный вами возраст некорректен, повторите ввод");
				}
				catch (exception& str)
				{
					cout << str.what() << endl;
				}

			} while (age_f == 0 || age_f < 0 || age_f > 100 || age_f2 == 0 || age_f2 < 0 || age_f2 > 100);


			cout << "Если ваши данные верны нажмите 1, если хотите что-то поменять нажмите 0" << endl;
			cin >> q;

		} while (q != 1);
		system("cls");
		Tinder tin(gender, name, surname, age, zodiac_sign, town, gender_f, zodiac_sign_f, town_f, age_f, age_f2, interest);
		tin.Print();
		cout << "*********************************************************" << endl;
		system("pause");
		system("cls");
		cout << "\n\tА теперь выберите кого хотите найти\n" << endl;
		system("pause");
		system("cls");
		bool exit = false;
		while (!exit)
		{

			show_menu();
			gotoxy(0, active_menu);
			ch = _getch();
			if (ch == 224) ch = _getch();
			switch (ch)
			{

			case 27: exit = true; break;
			case 72: active_menu--; break;
			case 80: active_menu++; break;
			case 13:

				if (active_menu == 0)
				{
					system("cls");
					cout << "************************************************************************" << endl;
					cout << "Перед вами база прекрасных женщин которая ищет свою вторую половинку!!!)" << endl;
					cout << "************************************************************************\n\n" << endl;
					vector<Tinder> vec
					{

						Tinder("женский", "Коко", "Шанель", 29, "Весы", "Париж", "мужской", "Телец", "Москва", 25, 35, interest = {"спорт", "путешествия", "релакс", "футбол"}, 0),
						Tinder("женский", "Дженнифер", "Лопес", 35, "Телец", "Москва", "мужской", "Скорпион", "Токио", 30, 42, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("женский", "Сальма", "Хайек", 33, "Лев", "Москва", "мужской", "Весы", "Москва", 27, 40, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("женский", "Меган", "Фокс", 27, "Дева", "Мадрид", "мужской", "Весы", "Москва", 25, 38, interest = {"спорт", "ролики", "хоккей", "музыка"}, 0),
						Tinder("женский", "Дженнифер", "Энистон", 29, "Весы", "Париж", "мужской", "Лев", "Париж", 30, 40, interest = {"спорт", "хоккей", "путешествия"},0),
						Tinder("женский", "Скарлетт", "Йоханссон", 30, "Скорпион", "Милан", "мужской", "Рыбы", "Москва", 29, 47, interest = {"спорт", "путешествия", "хоккей"},0),
						Tinder("женский", "Моника", "Беллуччи", 36, "Близнецы", "Москва", "мужской", "Рак", "Москва", 19, 30, interest = {"спорт", "хоккей", "поло"},0),
						Tinder("женский", "Мила", "Кунис", 28, "Весы", "Бангкок", "мужской", "Рак", "Сочи", 20, 30, interest = {"спорт", "цветы", "хоккей", "массаж"}, 0),
						Tinder("женский", "Анджелина", "Джоли", 40, "Козерог", "Токио", "мужской", "Овен", "Москва", 29, 39, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("женский", "Пенелопа", "Крус", 43, "Близнецы", "Сочи", "мужской", "Телец", "Токио", 31, 47, interest = {"спорт", "массаж", "релакс"}, 0),
					};
					for (int i = 0; i < vec.size(); i++)
					{
						vec[i].Print();
						cout << "*********************************************************" << endl;
					}
					cout << "\nДля того чтобы узнать количество совпадений с вашими запросами нажмите Enter\n\n" << endl;

					system("pause");
					system("cls");
					tin.Run(tin, vec);
				}
				else if (active_menu == 1)
				{
					system("cls");
					cout << "************************************************************************" << endl;
					cout << "Перед вами база прекрасных мужчин которые ищут свою любовь!!!)" << endl;
					cout << "************************************************************************\n\n" << endl;
					vector<Tinder> vec_man
					{

						Tinder("мужской", "Зак", "Эфрон", 42, "Весы", "Париж", "женский", "Телец", "Москва", 25, 35, interest = {"спорт", "путешествия", "релакс", "футбол"}, 0),
						Tinder("мужской", "Райан", "Гослинг", 35, "Телец", "Москва", "женский", "Скорпион", "Токио", 30, 42, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("мужской", "Джастин", "Тимберлейк", 40, "Лев", "Москва", "женский", "Весы", "Москва", 27, 40, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("мужской", "Адам", "Левин", 42, "Дева", "Мадрид", "женский", "Весы", "Москва", 25, 38, interest = {"спорт", "ролики", "хоккей", "музыка"}, 0),
						Tinder("мужской", "Брэд", "Питт", 39, "Весы", "Париж", "женский", "Лев", "Париж", 30, 40, interest = {"спорт", "хоккей", "путешествия"},0),
						Tinder("мужской", "Ченнинг", "Татум", 40, "Скорпион", "Милан", "женский", "Рыбы", "Москва", 29, 47, interest = {"спорт", "путешествия", "хоккей"},0),
						Tinder("мужской", "Хью", "Джекман", 51, "Близнецы", "Москва", "женский", "Рак", "Москва", 19, 30, interest = {"спорт", "хоккей", "поло"},0),
						Tinder("мужской", "Джордж", "Клуни", 46, "Весы", "Бангкок", "женский", "Рак", "Сочи", 20, 30, interest = {"спорт", "цветы", "хоккей", "массаж"}, 0),
						Tinder("мужской", "Джонни", "Депп", 40, "Козерог", "Токио", "женский", "Овен", "Москва", 29, 39, interest = {"спорт", "путешествия", "хоккей"}, 0),
						Tinder("мужской", "Райан", "Рейнольдс", 43, "Близнецы", "Сочи", "женский", "Телец", "Токио", 31, 47, interest = {"спорт", "массаж", "релакс"}, 0),
					};
					for (int i = 0; i < vec_man.size(); i++)
					{
						vec_man[i].Print();
						cout << "*********************************************************" << endl;
					}
					cout << "\nДля того чтобы узнать количество совпадений с вашими запросами нажмите Enter\n\n" << endl;

					system("pause");
					system("cls");
					tin.Run(tin, vec_man);	
					system("pause");

				}
				break;
			}
			if (active_menu < 0) active_menu = num_menu - 1;
			if (active_menu > num_menu - 1) active_menu = 0;

		}
		system("cls");
		cout << "If you wanna continue press 1, no 0" << endl;
		cin >> z;
		system("cls");
	} while (z == 1);
	system("cls");

	return 0;
	
	
	
	
	
	
	
	

		

	

	
	
	
	
	


}