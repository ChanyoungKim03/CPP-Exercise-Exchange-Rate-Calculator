#include <iostream>

int main()

{
	std::cout << "USD (S), JPY (Y), EUR(R), GBP(P) 중에서 원하는 화폐의 한화(KRW)값을 알려드립니다" << std::endl;
	std::cout << "값 과 단위를 각각 써주세요" << std::endl;

	float value;
	char unit;
	const float usd = 1251.00f, jpy = 9.6338f, eur = 1337.32f, gbp = 1568.07f;

	std::cin >> value >> unit;

	switch (unit)
	{
		case 's':
		case 'S':
			std::cout << "총 " << value * usd << " 원 입니다." << std::endl;
			break;

		case 'y':
		case 'Y':
			std::cout << "총 " << value * jpy << " 원 입니다." << std::endl;
			break;

		case 'r':
		case 'R':
			std::cout << "총 " << value * eur << " 원 입니다." << std::endl;
			break;

		case 'p':
		case 'P':
			std::cout << "총 " << value * gbp << " 원 입니다." << std::endl;
			break;

		default:
			std::cout << "잘못 입력하셨습니다. 단위를 정확하게 써주세요." << std::endl;
			break;

	}

}