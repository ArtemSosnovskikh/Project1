#include <iostream>
#include <Windows.h>
#include <cstdlib>
int main()


{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
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
		/*double one, two;
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
	/*
	float dollar, euro, yuan, jena, farit;
	float valuta, rubles;
	dollar = 99;
	euro = 106;
	yuan = 13.6;
	jena = 0.66;
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
	*/
	/* int a = 0;
	int count;
	std::cin >> count;
	while(true)
	{	while (a < count)
	{
		std::cout << a << "  ";
		a++;
		if (a == 5)
		{
			continue;

			break;
		}
		std::cout << " lol ";
	}

	}*/
	/*int a = 0;
	while (a < 5)

	{
	std::cout << " 1 ";
	a++;
	}
	for (int i = 0; i < 5; i++)


	do{}
	while (true); */
	/*	for each (object var in collection_to_loop)*/

/*int a = 0;
	int b=0;
	std::cin >> a;
	while (true)
	{ std::cin >> b;
	a = b + a;
	if (b == 0)
	{
		std::cout << a;
		break;


	}
	}*/
/*float s1, s2, ves, k = 0, s, nado;
	float bak = 300, ostatok = 0, maxdistanse = 0;
	while (true)
	{
		std::cout << "������� ��� �����";
		std::cin >> ves;
		if (ves >= 0 && ves <= 2000)
		{
			break;
		}
		else { std::cout << " ������������ ��� ����� , ������� 0 , �������� 2000"; }
	}
	if (ves <= 500 && ves >= 0) {
		k = 1;
	}
	else if (ves <= 1000 && ves >= 500) {
		k = 4;
		
	}
	else if (ves <= 1500 && ves >= 1000) {
		k = 7;
		

		
	}
	else if (ves <= 2000 && ves >= 1500)
	{
		k = 9;
		
	}
	maxdistanse = bak / k;
	while (true)
	{
		std::cout << "������� ���������� �� � �� �";
		std::cin >> s1;
		std::cout << "������� ���������� �� � �� �";
		std::cin >> s2;
		if (s1 >= 0 && s2 >= 0 && s1 <= maxdistanse && s2 <= maxdistanse)
		{
			break;
		}
		else {
			std::cout << "������������ ����������! ������� - 0 � ��������\n" << maxdistanse;


		}

		s = s1 + s2;

		if (ves <= 500 && ves >= 0) {
			k = 1;
			std::cout << "������� ������������ �� ������ � �� ������ �\n " << s1 * k;
			ostatok = bak - ves / s1 * k;
			std::cout << "������� ��������� \n" << ostatok;
			std::cout << "������� ������������ �� ������ � �� ������ �\n " << s2 * k;
			std::cout << "������� ������������ �����������\n " << s2 * k - ostatok;
		}
		else if (ves <= 1000 && ves >= 500) {
			k = 4;
			std::cout << "������� ������������ �� ������ � �� ������ � \n" << s1 * k;
			ostatok = 300 - ves / s1 * k;
			std::cout << "������� ��������� \n" << ostatok;
			std::cout << "������� ������������ �� ������ � �� ������ � \n" << s2 * k;
			std::cout << "������� ������������ ����������� \n" << s2 * k - ostatok;
		}
		else if (ves <= 1500 && ves >= 1000) {
			k = 7;
			std::cout << "������� ������������ �� ������ � �� ������ �\n" << s1 * k;

			ostatok = 300 - ves / s1 * k;
			std::cout << "������� ��������� \n" << ostatok;
			std::cout << "������� ������������ �� ������ � �� ������ �\n" << s2 * k;
			std::cout << "������� ������������ ����������� \n" << s2 * k - ostatok;
		}
		else if (ves <= 2000 && ves >= 1500)
		{
			k = 9;
			std::cout << "������� ������������ �� ������ � �� ������ �\n" << s1 * k;
			ostatok = 300 - ves / s1 * k;
			std::cout << "������� ��������� \n " << ostatok;
			std::cout << "������� ������������ �� ������ � �� ������ �\n" << s2 * k;

			std::cout << "������� ������������ �����������\n " << s2 * k - ostatok;
		}


	}
	*/
/*
while (true)
	{
	std::cout << "						  ������� �� ���������             \n  ";

	std::cout << "  ax^2+bx=c=0   ";

	float a, b, c, d, x1, x2;

	std::cout << "������� A: \n   ";

	std::cin >> a;

	std::cout << "������� B:\n    ";

	std::cin >> b;

	std::cout << "������� C: \n    ";

	std::cin >> c;

	std::cout << a << "x^2+" << b << "�+" << c << "=0 \n  ";

	d = std::pow(b, 2) - (4 * a * c);

	std::cout << a << " ������������:	\n " << d << "";

	if (d < 0)
	{
		std::cout << "������ ���\n ";
	}

	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "\n ��� ������ �����:\n " << x1 << "\n   ";
	}
	else
	{
		x1 = (-b - std::sqrt(d)) / (2 * a);
		x2 = (-b + std::sqrt(d)) / (2 * a);
		std::cout << "��� ������ x1 �����:\n " << x1 << " \n   ";
		std::cout << "��� ������ x2 �����:\n " << x2 << "  \n ";
	}


	system("pause");    
	system("cls");
		
	}*/
/*
srand(time(NULL));
int a;
a = rand()%6+11;
std::cout << a;
/* ���� ������ �����
* 2 ������ ��������� 
* 1 ������ 1-10
* 2 ������� 1-500
* ������ ���������� ����� ������� 
* ������� 25 ������� 
 ������� ������� ����� ��������� �� 1����� 

int magicnumber = 0, number = 0, count = 0, life = 0, choose = 0;

while (true)
{
	system("cls");
	std::cout << "����\" ������ �����\"\n\n";


}

*/
//��������
int min = INT_MIN;
int max = INT_MAX;
int const size = 10;
int Arr[size];
int i = 0;
while (i < size)
{
	Arr[i] = rand()%10 - 5;
	std::cout << Arr[i] << " ";
	
	i++;
	

	
}


std::cout  << "\n ";
for (int i = 0; i < size; i++)
{
	if (Arr[i] < 0)
		std::cout << Arr[i] << " ";
}


std::cout << "\n ";
for (int i = 0; i < size; i++)
{
	if (Arr[i] > 0)
		std::cout << Arr[i] << " ";
}
std::cout << "\n ";
int b = 0;
for (int i = 0; i < size; i++)
{
	if (Arr[i] == 0)
		b++;
		

}
std::cout << b;
	return 0;
}