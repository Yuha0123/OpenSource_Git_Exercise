#include <iostream>
#include "Operator.h"

using namespace std;



int main()
{
	int a, b, result;

	int op;

	cout << "�� ������ �Է��� �ּ���." << endl;

	cin >> a >> b;

	cout << "�����ڸ� ������ �ּ���(ADD: 1, SUB: 2, MUL: 3, DIV: 4. MOD: 5�� �Է��ϼ���) " << endl;

	cin >> op;

	switch (op)
	{
	case 1:
		result = ADD(a, b);
		break;
	case 2:
		result = SUB(a, b);
		break;
	case 3:
		result = MUL(a, b);
		break;
	case 4:
		result = DIV(a, b);
		break;

	case 5:
		result = MOD(a, b);
		break;
	default:
		result = 0;
	}


	cout << "��� ��� ���� " << result << "�Դϴ�." << endl;

	return 0;
}

