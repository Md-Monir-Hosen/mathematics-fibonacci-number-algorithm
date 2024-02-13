#include<bits/stdc++.h>
using namespace std;
#define Max 100
int main()
{
    long long int arr[Max];
    arr[0]=0;
    arr[1]=0;
    int i=0;
    for(i=2;i<=Max;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=1;i<Max-1;i++)
    {
      cout<<i<<"\n";
      if((arr[i]%10==0)&&(arr[i+1]%10==1))
      {
          break;
      }
    }
       cout << "Sequence is repeating after index " << i
         << endl;
}
