#include <iostream>
#include <string>
using namespace std;

int main()
{
    string is1, dic = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int val[62], i, j;

    for (i = 0; i < 62; i++)//玻ネ癸莱皚 
    {
        val[i] = i;
    }

    while (getline(cin, is1))//块代戈 
    {
        int sum = 0, max = 0;//sum–计羆㎝max程计 
        for (i = 0; i < is1.length(); i++)//т代戈–计 
        {
            for (j = 0; j < 62; j++)
            {
                if (is1[i] == dic[j])
                {
                    sum = sum + val[j];//–计 
                    if (val[j] > max)//т程计 
                    {
                        max = val[j];
                    }
                    break;
                }
            }

        }

        for (i = max; i < 62; i++)//т俱埃sum计 
        {                  //62秈┮璶т61碞 

            if (sum == 0)//Τ0碞讽秈
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

        if (i == 62)//тぃ俱埃sum计 
        {
            cout << "such number is impossible!" << endl;
        }

    }
    return 0;
}