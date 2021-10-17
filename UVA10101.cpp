#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void rec(long long x,int flag)
{
    string unit[4]={"kuti","lakh","hajar","shata"};
    if(x!=0)
    {
        if(x/10000000!=0){
            flag=0;        //不是最後一組
            rec(x/10000000,flag);
        }
        else{flag=1;}    //最高位那組
        long long a[4]={0};
        a[0]=(x/100000)%100;
        a[1]=(x/1000)%100;
        a[2]=(x/10)%100;
        a[3]=x%10;
        for(int i=0;i<4;i++)
        {
            if(i==0 && a[i]==0 && flag==0){cout<<" "<<unit[i];}    //印kuti
            if(a[i]!=0){cout<<" "<<a[i]<<" "<<unit[i];}
        }
    }
}
int main()
{
    long long x;
    int counter(1);
    while(cin>>x)
    {
        cout<<setw(4)<<counter<<".";    
        rec(x/100,0);
        if(x==0) {cout<<" 0";}
        if(x%100!=0) {cout<<" "<<x%100;}
        cout<<endl;        
        counter++;
    }
    return 0;
}
