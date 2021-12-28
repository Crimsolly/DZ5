#include <iostream>
#include <string>

using namespace std;

//task1 

bool myarr(double arr[], double size)
{
	for (size_t i = 0; i < size ; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return true;
}
int main()
{
	const int size = 5;
	double arr[] = { 1, 2, 3, 4 };
	if (myarr (arr, size)) 
	{
		cout << "The array is ready" << endl;
	}
	return 0;
}

//task2

bool Vers (int arr[], int size) 
{
        
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << (arr[i] = !arr[i]) << " \n";
        
    }
    
    return true;
   
}
int main()
{
   
    const int size = 10;
    int arr[] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    Vers (arr, size);
    
}

//task3

bool Vers(int arr[], int size)
{
	for (size_t i = 1; i <= 22; i+=3)
	{
		cout << i << " ";
	}
	return true;
}
int main()
{
	
	const int size = 8;
	int arr[size];
	if (Vers(arr, size))
	{
		cout << "Array Ready" << endl;
	}
	return 0;
}
