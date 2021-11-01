/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/

class ComplexNumbers
{
    // Complete this class
private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int r, int i)
    {
        this->real = r;
        this->imaginary = i;
    }

    void plus(const ComplexNumbers &c)
    {
        this->real = this->real + c.real;
        this->imaginary = this->imaginary + c.imaginary;
    }

    void multiply(const ComplexNumbers &c)
    {
        int r = this->real * c.real - this->imaginary * c.imaginary;
        int i = this->real * c.imaginary + this->imaginary * c.real;
        this->real = r;
        this->imaginary = i;
    }

    void print()
    {
        cout << this->real << " + "
             << "i" << imaginary << endl;
    }
};