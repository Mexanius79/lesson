

#include <iostream>


void sup(){

std:: cout << "Hello";

}







int main ()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "1. ������\n2. ������\n3. �������\n";
	int user;
	srand(time(NULL));
	int bot = 1 + rand() %3;
	
	std::cin >> user;

	if( user >= 1 && user <= 3){
	
		if (user == 1 && bot == 3 || user == 3 && bot == 2 || user == 2 && bot == 1)
		{
			std::cout << "������" << std::endl;
		}
		else if (user==bot)
		{
			std::cout << "�����" << std::endl;
		
		}
		else 
		{
			std::cout << "�������" << std::endl;
		}
	}
	else {
		std::cout << "�����?" << std::endl;
	}
	//
}


