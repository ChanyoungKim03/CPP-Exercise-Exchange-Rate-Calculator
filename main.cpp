#include <iostream>

int main()

{
	std::cout << "USD (S), JPY (Y), EUR(R), GBP(P) �߿��� ���ϴ� ȭ���� ��ȭ(KRW)���� �˷��帳�ϴ�" << std::endl;
	std::cout << "�� �� ������ ���� ���ּ���" << std::endl;

	float value;
	char unit;
	const float usd = 1251.00f, jpy = 9.6338f, eur = 1337.32f, gbp = 1568.07f;

	std::cin >> value >> unit;

	switch (unit)
	{
		case 's':
		case 'S':
			std::cout << "�� " << value * usd << " �� �Դϴ�." << std::endl;
			break;

		case 'y':
		case 'Y':
			std::cout << "�� " << value * jpy << " �� �Դϴ�." << std::endl;
			break;

		case 'r':
		case 'R':
			std::cout << "�� " << value * eur << " �� �Դϴ�." << std::endl;
			break;

		case 'p':
		case 'P':
			std::cout << "�� " << value * gbp << " �� �Դϴ�." << std::endl;
			break;

		default:
			std::cout << "�߸� �Է��ϼ̽��ϴ�. ������ ��Ȯ�ϰ� ���ּ���." << std::endl;
			break;

	}

}