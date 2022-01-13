#include<iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
      int T;
      cin>>T;
      for(int i=0; i<T; ++i)
      {
            long int a[3][3], count = 0, val[4] = {0, 0, 0, 0}, answer;
            double ans[4];
            cin>>a[0][0]>>a[0][1]>>a[0][2];
            cin>>a[1][0]>>a[1][2];
            cin>>a[2][0]>>a[2][1]>>a[2][2];
            ans[0] = (double)(a[0][1] + a[2][1])/2;
            ans[1] = (double)(a[1][0] + a[1][2])/2;
            ans[2] = (double)(a[0][0] + a[2][2])/2;
            ans[3] = (double)(a[0][2] + a[2][0])/2;
            if((double)a[0][1]==(double)((a[0][0])+a[0][2])/2)
                count++;
            if((double)a[2][1]==(double)((a[2][0])+a[2][2])/2)
                count++;
            if((double)a[1][0]==(double)((a[0][0])+a[2][0])/2)
                count++;
            if((double)a[1][2]==(double)((a[0][2])+a[2][2])/2)
                count++;
            for(int m=0; m<4; ++m)
            {
                long long int j = (long long int)((double)ans[m]*10);
                if(j%10!=0)
                {
                    val[m]=0;
                    continue;
                }
                for(int x=0; x<4; ++x)
                    if(ans[m]==ans[x])
                        val[m]++;
            }
            sort(val, val+4, greater<int>());
            cout<<"Case #"<<i+1<<": "<<val[0]+count<<endl;
      }
      return 0;
      
}
