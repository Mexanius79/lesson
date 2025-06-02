

#include <iostream>


void sup(){


}

void game()
{
	std::cout << "1. Камень\n2. Бумага\n3. Ножницы\n";
	int user;
	
	int bot = 1 + rand() %3;

	for (int i = 0;i < 5;)
	{

	std::cin >> user;
	if( user >= 1 && user <= 3){
	
		if (user == 1 && bot == 3 || user == 3 && bot == 2 || user == 2 && bot == 1)
		{
			std::cout << "Победа" << std::endl;
			i++;
		}
		else if (user==bot)
		{
			std::cout << "Ничья" << std::endl;
		
		}
		else 
		{
			std::cout << "дурачек" << std::endl;
		}
	}
	else {
		std::cout << "Сосал?" << std::endl;
	}
	//
	}




}

int main ()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//game();





}


