#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cpp_int fac=1;
	    for(int i=1;i<=n;i++){
	        fac*=i;
	    }
	    cout<<fac<<endl;
	}
	return 0;
}