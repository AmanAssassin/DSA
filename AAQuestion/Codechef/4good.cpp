#include<bits/stdc++.h>
using namespace std;
//#define ll lonf long

int main()
	{
	int t;
	cin>>t;

	while(t--)
		{
			int n;
			cin>>n;
			int count = 0;
			while(n!=0)
			{
				
				if(n % 10 == 4)
					count++;
				n = n/10;
			}
			cout<<count<<endl;
		}
	return 0;
	} 
