#include<iostream>
#include<stdio.h>
#include <math.h>
using namespace std;

int main()
{
    while (true) {
        long long int num1 = 3712466378565634,num2 = 81824678687366;
        int x,sum1=0,sum2=0;
        cout<<"\n ENTER THE TWO NUMBERS ";
        if(num1<num2)
        {
            num1=num1+num2;
            num2=num1-num2;
            num1=num1-num2;
        }
        for(x=1;x<=num1/2;x++)
        {
            if(num1%x==0)
                sum1+=x;
            if(num2%x==0)
                sum2+=x;
        }
        if(sum1==num2 && sum2==num1)
            cout<<"\n ENTERED PAIR OF NUMBER IS AMICABLE NUMBER ";
        else
            cout<<"\n ENTERED PAIR OF NUMBER IS NOT AN AMICABLE NUMBER ";
    }
    
}

