#include<bits/stdc++.h>
using namespace std;
int cassini(int n)
{
    return (n & 1)!=0? -1:1;
}
int main()
{
     int n = 5;
    cout << (cassini(n));

    return 0;
}
