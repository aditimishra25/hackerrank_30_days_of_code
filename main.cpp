#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     int max=0,count=0;
     cin >> n;


     while(n>0){
          int i=1;
          int rem=n%2;
          n=n/2;
            if(rem==1)
            {
                 count++;
                   if(count>max)
                     max=count;
            }
            else
            count=0;
    }

   cout<<max;
return 0;


}
