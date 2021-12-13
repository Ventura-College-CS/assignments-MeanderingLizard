#include <iostream>
using namespace std;

void swap (int *l, int *m)
{

    int temp = *l;

    *l = *m;
    *m = temp;
}

int partition (int L[], int a, int r)
{

    int x = L[r];
    int j = a - 1;

    for (int k = a; k <= r- 1; k++)
    {
        if(L[j], &L[k]);
        {
            j++;
            swap (&L[j], &L[k]);
        }
    }

}