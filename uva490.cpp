#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s[101];
    int index = 0;
    int maxlength = 0;
    while (getline(cin, s[index]))
    {
        if (maxlength < s[index].length())
            maxlength = s[index].length();
        index++;
    }
    for (int i =0 ; i < maxlength ; i++)
    {
        for (int j = index - 1; j >= 0; j--)
        {
            if (s[j].length() > i)
                cout << s[j][i];
            else
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
