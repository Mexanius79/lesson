

#include <iostream>


void sup(){


}

void game()
{
	std::cout << "1. ������\n2. ������\n3. �������\n";
	int user;
	
	int bot = 1 + rand() %3;

	for (int i = 0;i < 5;)
	{

	std::cin >> user;
	if( user >= 1 && user <= 3){
	
		if (user == 1 && bot == 3 || user == 3 && bot == 2 || user == 2 && bot == 1)
		{
			std::cout << "������" << std::endl;
			i++;
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




}

int main ()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//game();





}


