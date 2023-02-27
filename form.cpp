#include <iostream>
using namespace std;
//find the max element in the array
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int a[x],b[y];
	    for(int i=0;i<x;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i =0; i<y;i++)
	    {
	        cin>>b[i];
	    }
	    long int max=0;
	    int c[x];
	    for(int i=0;i<y;i++)
	    {
	      long int sum=0;
	      for(int j=0;j<x;j++)
	      {
	          c[j]=a[j]/(i+1);
	          sum+=c[j];
	      }
	      sum= sum*b[i];
	      if(max<sum)
	      {
	          max=sum;
	      }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
