#include <iostream>
#include "Operator.h"

using namespace std;



int main()
{
	int a, b, result;

	int op;

	cout << "두 정수를 입력해 주세요." << endl;

	cin >> a >> b;

	cout << "연산자를 선택해 주세요(ADD: 1, SUB: 2, MUL: 3, DIV: 4. MOD: 5를 입력하세요) " << endl;

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


	cout << "계산 결과 값은 " << result << "입니다." << endl;

	return 0;
}

