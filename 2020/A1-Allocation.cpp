#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int m=0; m<T; ++m)
    {
        int B, N, sum = 0, count = 0;
        cin>>N>>B;
        int cost[N];
        for(int i=0; i<N; ++i)
            cin>>cost[i];
        sort(cost, cost+N);
        for(int i=0; i<N; ++i)
        {
            if(sum+cost[i]>B)
                break;
            else
            {
                sum = sum + cost[i];
                count = count + 1;
            }
        }
        cout<<"Case #"<<m+1<<": "<<count<<endl;
    }
}
