#include<iostream>
using namespace std;


int main()
{
    int left, right, tmp;
    int k, k_tmp;
    int ans, ans_tmp;

    while( cin >> left >> right )
    {
        cout << left << " " << right << " ";
        if( left > right )
        {
            tmp = left;
            left = right;
            right = tmp;
        }

        ans = 0;
        k = left;
        while( k<=right )
        {
            ans_tmp = 1;

            k_tmp = k;
            while( k_tmp != 1 )
            {
                if( k_tmp%2 == 0 )
                    k_tmp = k_tmp/2;
                else
                    k_tmp = k_tmp*3+1;

                ans_tmp = ans_tmp+1;
            }

            if( ans_tmp > ans )
                ans = ans_tmp;

            k = k+1;
        }

        cout << ans << endl;
    }
    return 0;
}
