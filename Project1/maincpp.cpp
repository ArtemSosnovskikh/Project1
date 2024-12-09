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

	/*one = 0;
	two = 0;
	std::cout << "введите первое число:" << "\n";
	std::cin >> one;
	std::cout << "введите + - * или /" << "\n";
	std::cin >> znak;
	
	std::cout << "введите второе число:" << "\n";
	std::cin >> two;
	if (two==0)
		std::cout << "на ноль делить нельзя\n ";
	 if (znak == '+')
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
		 if (two == 0)
			 std::cout << "на ноль делить нельзя\n ";
		 else std::cout << "деление " << one / two << "\n";

	}
	else {
		std::cout << "неверный символ\n ";
	}
	 if (znak =='/' &&two !=0){}
	 if(one < 0 ||one  > 10 ){}
	
		 





*/
	float dollar, euro, yuan, jena, farit;
	float valuta, rubles;
	dollar = 99;
	euro = 106;
	yuan = 13, 6;
	jena = 0, 66;
	farit = 37;
	
	std::cout << "Программа Конвертер валют" << "\n";
	std::cout << "  У нас можно купить доллары , евро , юани , йены, фариты" << "\n";
	std::cout << "ЦЕНЫ:" << "\n"<< "ЦЕНЫ:\n" << "доллар = 99 рублей\n " << "евро = 106 рублей\n " << "юань = 13,6  рублей \n " 
		<< "йена = 0,66  рубля \n " << "фарит = 37 рублей \n ";
	std::cout << "Банк берёт 5% комиссию за услугу!" << "\n";
	std::cout << " сколько валюты хотите приобрести?" << "\n";
	std::cin >> rubles;
	std::cout << "Выберите валюту 1 - dollar, 2 -  euro,3 - yuan, 4 - jena,5 -  farit " << "\n";
	std::cin >> valuta ;
	
	if (valuta == 1)
	{
		std::cout  << dollar*rubles* 0.95 << " рублей с учётом комиссии\n";
		std::cout << "комиссия составила:" << dollar * rubles * 0.05 << "\n";
	}
	else if (valuta == 2)
	{
		std::cout << euro * rubles * 0.95 << " рублей с учётом комиссии \n";
		std::cout << "комиссия составила:" << euro * rubles * 0.05 << "\n";
	}
	else if (valuta == 3)
	{
		std::cout << yuan * rubles * 0.95 << " рублей с учётом комиссии\n";
		std::cout << "комиссия составила:" << yuan * rubles * 0.05 << "\n";
	}
	else if (valuta == 4)
	{
		std::cout << jena * rubles * 0.95 << " рублей с учётом комиссии\n";
		std::cout << "комиссия составила:" << jena * rubles * 0.05 << "\n";
	}
	else if (valuta == 5)
	{
		std::cout << farit * rubles * 0.95 << " рублей с учётом комиссии \n";
		std::cout << "комиссия составила:" << farit * rubles * 0.05 << "\n";
	}
	
	return 0;
}