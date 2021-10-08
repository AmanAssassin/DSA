#include <bits/stdc++.h>
using namespace std;

// this function will remove all repeating elements and will give ubnique output
int exoor(int a[])
  { 
    // finding the non repeating term in array in array usinmg Ex-or ^
int res = 0;
for(int i = 0; i < 7; i++)
{
    res = res ^ a[i];
}

return res;
}
int main()

{
    int a[7] = {5, 4, 1, 4, 3, 5, 1};
    cout<<exoor(a);
    return 0;
}
//          ::processs::
// res=0
// res^a[i] -> 0^5    res=5
// res^a[i] -> 5^4    res=5^4 
// res^a[i] -> 5^4^1    res=5^4^1 
// res^a[i] -> 5^4^1^4  -->>4^4=0    res=5^1
// res^a[i] -> 5^1^3  -->>    res=5^1^3
// res^a[i] -> 5^1^3^5  since 5^5=0-->>    res=1^3
// res^a[i] -> 1^3^1  since 1^1=0-->>    res=3
// at end return res storing 3 hence 3 output
