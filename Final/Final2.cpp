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

swap (&L[j+1], &L[r+1]);
return (j+1);

}

void quickSort(int L[], int a, int r)
{

    if (a<r)
    {

        int q = partition(L, a,r);
        quickSort(L, a, q - 1);
        quickSort(L, q+1, r);

    }
}

int main()
{

    int l[] = {9,7,3,5,6,2};
    int n = sizeof(l)/sizeof(l[0]);
    quickSort(l,0,n-1);
    for (int i=0; i<n; i++)
    cout << l[i] << " ";
    return 0;

}
