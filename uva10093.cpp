#include <iostream>
#include <string>
using namespace std;

int main()
{
    string is1, dic = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int val[62], i, j;

    for (i = 0; i < 62; i++)//���͹����Ȫ��}�C 
    {
        val[i] = i;
    }

    while (getline(cin, is1))//��J���� 
    {
        int sum = 0, max = 0;//sum�C�Ӧ���`�M�Amax�̤j���ƪ��� 
        for (i = 0; i < is1.length(); i++)//�����ꪺ�C�Ӧ�ƪ��� 
        {
            for (j = 0; j < 62; j++)
            {
                if (is1[i] == dic[j])
                {
                    sum = sum + val[j];//�C�Ӧ�Ƭۥ[ 
                    if (val[j] > max)//���ȳ̤j���� 
                    {
                        max = val[j];
                    }
                    break;
                }
            }

        }

        for (i = max; i < 62; i++)//���i�H�㰣sum���� 
        {                  //�]��62�i��A�ҥH�u�n���61�N�n 

            if (sum == 0)//�u��0�N��G�i��
            {
                cout << "2" << endl;
                break;
            }
            else if (sum % i == 0)
            {
                cout << i + 1 << endl;
                break;
            }

        }

        if (i == 62)//�䤣��i�H�㰣sum���� 
        {
            cout << "such number is impossible!" << endl;
        }

    }
    return 0;
}