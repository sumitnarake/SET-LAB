#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int p;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]<0)
            {
                a[i]=(-a[i]);
            }          
        }
        p=a[0];
        for(int i=1;i<n;i++)
        {
            if(p>a[i])
            {
                p=a[i];
            }
        }
      cout<<p-1<<endl;

    }
    return 0;
}
