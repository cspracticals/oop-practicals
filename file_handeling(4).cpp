#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("afile,dat");
    cout << "Write to the file" << endl;
    cout << "Enter your name:";
    cin.getline(data, 100);
    outfile << data << endl;
    cout << "Enter your ROLLNO:";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    outfile.close();
    ifstream infile;
    infile.open("afile.dat");
    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    infile.close();
    return 0;
}
