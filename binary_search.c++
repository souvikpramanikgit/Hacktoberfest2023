#include <bits/stdc++.h>
using namespace std;

int bisea(int a[], int n, int key)
{
    int beg = 0, end = n - 1;
    int mid;
    while (beg <= end)
    {
        mid = beg+((end-beg)/2);
        if (a[mid] == key)
        {
            return mid;
        }
        if (a[mid] > key)
        {
            end = mid - 1;
        }
        if (a[mid] < key)
        {
            beg = mid + 1;
        }
        
    }
    return -1;
}

int main()
{
    int evenarr[6] = {1, 2, 3, 5, 6, 8};
    int oddarr[5] = {2, 4, 6, 8, 9};

    int evenin = bisea(evenarr, 6, 8);
    int oddin = bisea(oddarr, 5, 6);

    cout << " Index of 8 is " << evenin << endl;
    cout << " Index of 6 is " << oddin << endl;
    return 0;
}
