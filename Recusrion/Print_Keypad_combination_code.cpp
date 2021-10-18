#include <iostream>
#include <string>
using namespace std;

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string dial(int key)
{
    unordered_map<int, string> m;
    m[0] = "";
    m[1] = "";
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    return m[key];
}
void pK(int num, string out)
{

    if (num == 0)
    {
        cout << out << endl;
        return;
    }
    string pd = dial(num % 10);
    for (int i = 0; i < pd.size(); i++)
    {
        pK(num / 10, pd[i] + out);
    }
}

void printKeypad(int num)
{
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    pK(num, "");
}

// void printKeypad(int num){
//     /*
//     Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
//     */
// }
