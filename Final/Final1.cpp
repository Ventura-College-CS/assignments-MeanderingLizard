#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int i;
int total_binary;
int target = 10;
int N;

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


void binarySearch(int array[], int N)
{
    return;
}


int main()
{
    const int array[i];
    for(int i=0; i<100; ++i)
        total_binary += binarySearch(array, N, target);
    bubbleSort(array, N);
    printArray(array, N);
 

}