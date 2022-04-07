//Assassin
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int w=0,l=0;
	while(n--)
	{
		int s,t;
		cin>>s>>t;
		if(s>t){
			w=1;
			l = s-t;
		}
		else{
			w=2;
			l =t-s;
		}
	}
	cout<<w<<" "<<l;
	return 0;
}


