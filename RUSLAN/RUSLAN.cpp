#include <iostream>
#include <Windows.h>

void game()
{
	std::cout << "1. Камень\n2. Ножницы\n3. Бумага\n";
	int user;
	int bot;

	for (int i = 0; i < 5;i++)
	{
	bot = 1 + rand() % 3;
	std::cin >> user;

		if (user >= 1 && user <= 3) {

			if (user == 1 && bot == 3 || user == 3 && bot == 2 || user == 2 && bot == 1)
			{
				std::cout << "Победа" << std::endl;
			}
			else if (user == bot)
			{
				std::cout << "Ничья" << std::endl;
			}
			else
			{
				std::cout << "Лузер" << std::endl;
			}
		}
		else 
		{
			std::cout << "Ошибка!" << std::endl;
		}
	
	}
}

void sup ()
{
	const size_t N = 3; //размер
	char a = 'S';
	char n = 'U';
	char x = 'P';
	char mas[N] = {'S','U','P'};

	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			std::cout << mas[j] << "\t"; // Вертикальная
			
		}

		std::cout << mas[i] << "\v"; // Горизонтальная
		std::cout << std::endl;
	}
	
}


void tune ()
{
	std::string tune;
	std::cin >> tune;
	std::cout <<  tune;
}


void num()
{
	int a = 7;
	int n = 3;
	int x = 10;
	int mas[3] = { 7,3,10 };

	for (int i = 0; i < 5;)
	{
		std::cout << mas[0] << '+' << mas[1] << '=' << mas[2] << std::endl;
		i++;
	}
}

void mas1() //обычное перечисление
{
	int x[4]{ -2,4,2,-10 };
	for (int i = 0; i < 4; i++)
	{
		std::cout << x[i];

	}
}

void mas2() //только отрицательные
{
	int x[4]{ -2,4,2,-10 };
	for (int i = 0; i < 4; i++)
	{
		//if (x[i] < 0) // Отрицательные
		//{
		//	std::cout << x[i];
		//}
		if (x[i] > 0) // Положительные
		{
			std::cout << x[i] << std::endl;
		}
	}
}
void mas3()
{
	int x[4]{ -2,4,2,-10 };
	for (int i = 0; i < 4;i++)
	{
		if (x[i] *< 0)
		{
			
		}
		std::cout << x[i] << std::endl;
		

	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	mas3(); // Все положительные
	//mas2(); // Только отрицальные /положительные
	//mas1(); //Обычное перечисление
	//game();
	//tune();
	//sup ();
	//num ();
	

}


