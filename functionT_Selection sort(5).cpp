#include<iostream>
using namespace std;

template<typename T>
void selection(T array[], int n)
{
    int min;
    for(int i = 0; i < n - 1; i++)  
    {
        min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(array[j] < array[min])
                min = j;
        }
        T temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    cout << "Array after sorting" << endl;
    for(int i = 0; i < n; i++)  
    {
        cout << array[i] << ",";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the length of array" << endl;
    cin >> n;

    int intArray[n];
    float floatArray[n];

    cout << "Enter the INT array" << endl;
    for(int i = 0; i < n; i++) 
    {
        cout << "Enter the element at index " << i << " : " << endl;
        cin >> intArray[i];
    }

    cout << "Enter the FLOAT array" << endl;
    for(int i = 0; i < n; i++)  
    {
        cout << "Enter the element at index " << i << " : " << endl;
        cin >> floatArray[i];
    }
    // Call the template function for both arrays
    selection(intArray, n);
    selection(floatArray, n);

    return 0;
}

