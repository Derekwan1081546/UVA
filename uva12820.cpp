//uva12820
#include<iostream>

using namespace std;

int main() {
    int n, s, t, i, j, k;
    char c;

    s = 1;
    while (cin>>n) 
	{
        getchar();
        t = 0;
        while (n--) {
            int num[26] = { 0 };
            bool ans[30] = {};
            while ((c = getchar()) != '\n') {
                if (c == '\n')
                    break;
                num[c - 'a']++;
            }
            for (i = 0, j = 0, k = 0; i < 26; i++) {
                if (num[i]) {
                    j++;
                    if (ans[num[i]]) {
                        k = 1;
                        break;
                    }
                    ans[num[i]] = 1;
                }
            }
            if (k == 0 && j != 1)
                t++;
        }
        cout <<"Case "<< s <<": "<< t << endl;
        s++;
    }
    
    return 0;
}
