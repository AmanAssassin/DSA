#include<bits/stdc++.h>
using namespace std;

int exoor(int a[])
  { 
    // finding the 2 - non repeating term in array in array usinmg Ex-or ^
int res = 0;
for(int i = 0; i < 7; i++)
{
    res = res ^ a[i];
}

return res;
}
int main()
 
{
    int a[8] = {5, 4, 1, 4, 3, 5, 1,2};
    cout<<exoor(a);
    return 0;
}