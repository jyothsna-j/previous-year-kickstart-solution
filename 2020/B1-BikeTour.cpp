#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int m=0; m<T; ++m)
    {
        int N;
        cin>>N;
        int h[N], peak=0;
        for(int i=0; i<N; ++i)
            cin>>h[i];
        for(int i=1; i<N-1; ++i)
            if(h[i]>h[i-1] and h[i]>h[i+1])
                peak = peak + 1;
        cout<<"Case #"<<m+1<<": "<<peak<<endl;
    }
    return 0;
}
