#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int img;

    public:
        // Constructor with default values
        complex(int r = 0, int i = 0) {
            real = r;
            img = i;
        }

        // Addition operator overloading
        complex operator+(const complex &obj) {
            complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        // Multiplication operator overloading
        complex operator*(const complex &obj) {
            complex temp;
            temp.real = real * obj.real - img * obj.img;
            temp.img = real * obj.img + img * obj.real;
            return temp; 
        }

        // Print function
        void print() {
            cout << real << "+" << img << "i";
        }
};

int main()
{
    complex c1(10, 5), c2(2, 4);

    // Addition
    complex c3 = c1 + c2;
    cout << "Sum: ";
    c3.print();
    cout << endl;

    // Multiplication
    complex c4 = c1 * c2;
    cout << "Product: ";
    c4.print();

    return 0;
}

