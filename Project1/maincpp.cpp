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

	/*one = 0;
	two = 0;
	std::cout << "������� ������ �����:" << "\n";
	std::cin >> one;
	std::cout << "������� + - * ��� /" << "\n";
	std::cin >> znak;
	
	std::cout << "������� ������ �����:" << "\n";
	std::cin >> two;
	if (two==0)
		std::cout << "�� ���� ������ ������\n ";
	 if (znak == '+')
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
		 if (two == 0)
			 std::cout << "�� ���� ������ ������\n ";
		 else std::cout << "������� " << one / two << "\n";

	}
	else {
		std::cout << "�������� ������\n ";
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
	
	std::cout << "��������� ��������� �����" << "\n";
	std::cout << "  � ��� ����� ������ ������� , ���� , ���� , ����, ������" << "\n";
	std::cout << "����:" << "\n"<< "����:\n" << "������ = 99 ������\n " << "���� = 106 ������\n " << "���� = 13,6  ������ \n " 
		<< "���� = 0,66  ����� \n " << "����� = 37 ������ \n ";
	std::cout << "���� ���� 5% �������� �� ������!" << "\n";
	std::cout << " ������� ������ ������ ����������?" << "\n";
	std::cin >> rubles;
	std::cout << "�������� ������ 1 - dollar, 2 -  euro,3 - yuan, 4 - jena,5 -  farit " << "\n";
	std::cin >> valuta ;
	
	if (valuta == 1)
	{
		std::cout  << dollar*rubles* 0.95 << " ������ � ������ ��������\n";
		std::cout << "�������� ���������:" << dollar * rubles * 0.05 << "\n";
	}
	else if (valuta == 2)
	{
		std::cout << euro * rubles * 0.95 << " ������ � ������ �������� \n";
		std::cout << "�������� ���������:" << euro * rubles * 0.05 << "\n";
	}
	else if (valuta == 3)
	{
		std::cout << yuan * rubles * 0.95 << " ������ � ������ ��������\n";
		std::cout << "�������� ���������:" << yuan * rubles * 0.05 << "\n";
	}
	else if (valuta == 4)
	{
		std::cout << jena * rubles * 0.95 << " ������ � ������ ��������\n";
		std::cout << "�������� ���������:" << jena * rubles * 0.05 << "\n";
	}
	else if (valuta == 5)
	{
		std::cout << farit * rubles * 0.95 << " ������ � ������ �������� \n";
		std::cout << "�������� ���������:" << farit * rubles * 0.05 << "\n";
	}
	
	return 0;
}