// cac9995_hw11_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{ 
    //calculate the sum of squared integers in an array
    int testArrayA[] = { 2, 3, -1, 10 };
    int testArrayB[] = { 9, 20, 31, 37 };
    int size = 4;
    

    
    cout << "a) Sum of array A = " << sumOfSquares(testArrayA, 4);
    cout << "\n" << "\n";

    cout << "b) Array A is sorted(true or false):  ";
    isSorted(testArrayA, 4);

    cout << "\n" << "\n";
    cout << "a) Sum of array B = " << sumOfSquares(testArrayB, 4);
    cout << "\n" << "\n";

    cout << "b) Array B is sorted(true or false):  ";
    isSorted(testArrayB, 4);


    return 0;

}


int sumOfSquares(int arr[], int arrSize)
{
   
    if (arrSize == 1) {
        return pow(arr[0], 2);
    }

    return pow(arr[arrSize-1], 2) + sumOfSquares(arr, arrSize - 1);
}


bool isSorted(int arr[], int arrSize)
{
    if (arrSize == 1) {
        cout << "true";
        return true;
    }
       
    if (arr[arrSize - 2] > arr[arrSize - 1]) {
        cout << "false";
        return false;
    }
        
    return isSorted(arr, arrSize - 1);
}