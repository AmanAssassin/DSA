#include <iostream>
using namespace std;

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}


/* (3 + 2i)(1 + 7i)	= 3×1 + 3×7i + 2i×1+ 2i×7i
 	= 3 + 21i + 2i + 14i2
 	= 3 + 21i + 2i − 14   (because i2 = −1)
 	= −11 + 23i


   */  