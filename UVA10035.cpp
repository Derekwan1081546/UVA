//uva10035
#include <iostream>
using namespace std;

int main() {
	long int a, b, c, d, e, result, carry;

	while (cin >> a >> b) {
		if (a == 0 && b == 0) break;	//�P�_a�Mb�O�_���s,�p�G�O�h���X

		carry = 0, c = 0;	//���k�s

		while (a != 0 || b != 0)	//�P�_a��b�䤤���@�O�_�����s,�p�G���߫h�~�����
		{
			d = a % 10;	//��a���Ӽ�
			a = a / 10;	
			e = b % 10;	//��b���Ӽ�
			b = b / 10;

			result = d + e + c;
			if (result >= 10)	//�P�_���Ƭۥ[�O�_�j�󵥩�10
			{
				c = 1;	//�i��
				carry ++;	
			}
			else
			{
				c = 0;
			}
		}
		//��X
		if (carry == 0) 
		{
			cout << "No carry operation." << endl;
		}
		else if (carry == 1)
		{
			cout << carry << " carry operation." << endl;
		}
		else if (carry > 1)
		{
			cout << carry << " carry operations." << endl;
		}
	}

	return 0;
}
