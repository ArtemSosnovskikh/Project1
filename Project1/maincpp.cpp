#include <iostream>

int main()


{
	setlocale(LC_ALL, "ru");
	/*
	std::cout << "hello world " << 13*2 + 4<< std::endl<< "\n";
	std::cout << "privet\n"<< 321<< "\n" ;
	std::cout << 3 * 8 + 4/(2*2) ;
	std::cout << "\nМеня зовут Артём Сосновских\n ";
	std::cout <<"\t" << " Мне " << 15 << " лет\n";
	std::cout << "Программистом\n";
	std::cout << "\t\tПотому-что вкусные!\n ";
	std::cout << 13.8 <<  \.;
	*/
	/*double one, two;

	one = 0;
	two = 0;

	std::cin >> one;
	std::cin >> two;
	std::cout << one + two << "\n";
	std::cout << one - two << "\n";
	std::cout << one * two << "\n";
	std::cout << one / two << "\n";
	*/
	/*double расстояние , время;
	float скорость;
	
	std::cout <<  "введите расстояние \n";
	std::cin >> расстояние;
	std::cout << "введите время \n";
	std::cin >> время;
	std::cout << " скорость равна " <<расстояние/время  ;

	double времян, времяк; 
	int стоимость;
	int a1, a2, a3, b1 , b2, b3;
	std::cout << "стоимость одной минуты поездки равна 2 гривна \n";
	std::cout << "введите  часы начала использования \n";
	std::cin >> a1;
	std::cout << "введите  минуты начала использования \n";
	std::cin >> a2;
	std::cout << "введите  секунды начала использования \n";
	std::cin >> a3;
	std::cout << "введите время завершения использования: часы минуты секунды  \n";
	std::cin >> b1;
	std::cin >> b2;
	std::cin >> b3;
	std::cout << "стоимость поездки равна: " << (a1 * 60 + a2 + a3 / 60); */

	/*int  a;
	std::cin >> a ;
	if (a > 0)
	{
		std::cout << "привет";
	}
	else if (a < 0)
	{ 
		std::cout << "пока";
	}
	else if (a == 0)
	{
		std::cout << "повар";
	}
	*/
	double one, two;
	char znak;

	one = 0;
	two = 0;
	std::cout << "введите первое число:" << "\n";
	std::cin >> one;
	std::cout << "введите + - * или /" << "\n";
	std::cin >> znak;
	
	std::cout << "введите второе число:" << "\n";
	std::cin >> two;
	if (two==0)
		std::cout << "на ноль делить нельзя\n ";
	else if (znak == '+')
	{
		std::cout << "сумма " << one + two << "\n";

	}
	else if (znak == '-')
	{
		std::cout << "разность " << one - two << "\n";

	}
	else if (znak == '*')
	{
		std::cout << "умножение " << one * two << "\n";

	}
	else if (znak == '/')
	{
		std::cout << "деление " << one / two << "\n";

	}
	else {
		std::cout << "неверный символ\n ";
	}






	return 0;
}