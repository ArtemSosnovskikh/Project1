#include <iostream>

int main()


{
	setlocale(LC_ALL, "ru");
	/*
	std::cout << "hello world " << 13*2 + 4<< std::endl<< "\n";
	std::cout << "privet\n"<< 321<< "\n" ;
	std::cout << 3 * 8 + 4/(2*2) ;
	std::cout << "\n���� ����� ���� ����������\n ";
	std::cout <<"\t" << " ��� " << 15 << " ���\n";
	std::cout << "�������������\n";
	std::cout << "\t\t������-��� �������!\n ";
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
	/*double ���������� , �����;
	float ��������;
	
	std::cout <<  "������� ���������� \n";
	std::cin >> ����������;
	std::cout << "������� ����� \n";
	std::cin >> �����;
	std::cout << " �������� ����� " <<����������/�����  ;

	double ������, ������; 
	int ���������;
	int a1, a2, a3, b1 , b2, b3;
	std::cout << "��������� ����� ������ ������� ����� 2 ������ \n";
	std::cout << "�������  ���� ������ ������������� \n";
	std::cin >> a1;
	std::cout << "�������  ������ ������ ������������� \n";
	std::cin >> a2;
	std::cout << "�������  ������� ������ ������������� \n";
	std::cin >> a3;
	std::cout << "������� ����� ���������� �������������: ���� ������ �������  \n";
	std::cin >> b1;
	std::cin >> b2;
	std::cin >> b3;
	std::cout << "��������� ������� �����: " << (a1 * 60 + a2 + a3 / 60); */

	/*int  a;
	std::cin >> a ;
	if (a > 0)
	{
		std::cout << "������";
	}
	else if (a < 0)
	{ 
		std::cout << "����";
	}
	else if (a == 0)
	{
		std::cout << "�����";
	}
	*/
	double one, two;
	char znak;

	one = 0;
	two = 0;
	std::cout << "������� ������ �����:" << "\n";
	std::cin >> one;
	std::cout << "������� + - * ��� /" << "\n";
	std::cin >> znak;
	
	std::cout << "������� ������ �����:" << "\n";
	std::cin >> two;
	if (two==0)
		std::cout << "�� ���� ������ ������\n ";
	else if (znak == '+')
	{
		std::cout << "����� " << one + two << "\n";

	}
	else if (znak == '-')
	{
		std::cout << "�������� " << one - two << "\n";

	}
	else if (znak == '*')
	{
		std::cout << "��������� " << one * two << "\n";

	}
	else if (znak == '/')
	{
		std::cout << "������� " << one / two << "\n";

	}
	else {
		std::cout << "�������� ������\n ";
	}






	return 0;
}