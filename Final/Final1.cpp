#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int i;
int total_binary;
int target = 10;
int N = 10;

void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
    {
        cout << array[i] << "\t";
        if(i%8 == 7) cout << endl;
    }
    return;
} 


void makeArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        array[i] = rand()%10+1;
    
} 


void bubbleSort(int array[], int N)
{
    return;
}


int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 

        if (arr[mid] == x)
            return mid;
 

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
 
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;

}
 



int main()
{
     int array[i];
    for(int i=0; i<100; ++i)
        total_binary += binarySearch(array, 0, N, target);
    bubbleSort(array, N);
    printArray(array, N);

}