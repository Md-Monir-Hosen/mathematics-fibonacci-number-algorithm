#include<bits/stdc++.h>
using namespace std;
#define N 30
int fib[N];
int largestFiboLessOrEqual(int n)
{
    fib[0]=1;
    fib[1]=2;
    int i;
    for(i=2;fib[i-1]<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return (i-2);
}
char* fibonacciEncoding(int n)
{
    int index=largestFiboLessOrEqual(n);
    char* codeword = (char*)malloc(sizeof(char)*(index+3));
    int i=index;
    while(n)
    {
        codeword[i]='1';
        n=n-fib[i];
        i=i-1;
        while(i>=0 && fib[i]>n)
        {
            codeword[i]='0';
            i=i-1;
        }
    }
    codeword[index+1]='1';
    codeword[index+2]='\0';
    return codeword;
}
int main()
{
     int n = 143;
    cout <<"Fibonacci code word for " <<n <<" is " << fibonacciEncoding(n);

    return 0;
}
