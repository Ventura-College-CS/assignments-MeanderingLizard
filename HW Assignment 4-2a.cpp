#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int i;
int total_linear;
int total_binary;

int target = rand()%100;

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
        array[i] = rand()%100+1;
    
} 

void bubbleSort(int array[], int N)
{
    return;
} 

void linearSearch(int array[], int N, int target)
{
    for(int i=0; i<N; i++)
        if(array[i] == target)
            return;
    return;
}  // comparison count

void binarySearch(int array[], int N)
{
    return;
}  // comparison count



int main()
{
    const int N = 64;
    int array[N];

    srand(time(0));
    makeArray(array, N);
    printArray(array, N);

    for(int i=0; i<100; ++i)
        total_linear += linearSearch(array, N, target);

    bubbleSort(array, N);
    printArray(array, N);

    for(int i=0; i<100; ++i)
        total_binary += binarySearch(array, N, target);
        
}

