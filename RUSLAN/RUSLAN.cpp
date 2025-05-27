

#include <iostream>


void sup(){

std:: cout << "Hello";

}







int main ()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "1. Камень\n2. Бумага\n3. Ножницы\n";
	int user;
	srand(time(NULL));
	int bot = 1 + rand() %3;
	
	std::cin >> user;

	if( user >= 1 && user <= 3){
	
		if (user == 1 && bot == 3 || user == 3 && bot == 2 || user == 2 && bot == 1)
		{
			std::cout << "Победа" << std::endl;
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


