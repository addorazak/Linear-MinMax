#include <iostream>
using namespace std;

void findMinAndMax(int a[], int low, int high, int *min, int *max)
{
    if (low == high)
        *min = *max = a[low];
    else if (high - low == 1)
    {
        if (a[low] > a[high])
        {
            *min = a[high];
            *max = a[low];
        }
        else
        {
            *min = a[low];
            *max = a[high];
        }
    }
    else
    {
        int mid = (low + high) / 2;
        int min1, max1, min2, max2;
        findMinAndMax(a, low, mid, &min1, &max1);
        findMinAndMax(a, mid + 1, high, &min2, &max2);

        if (min1 < min2)
            *min = min1;
        else
            *min = min2;

        if (max1 > max2)
            *max = max1;
        else
            *max = max2;
    }
}

int main()
{
    int a[20];
    int n;

    cout << "Enter array length:"<<endl;
    cin >> n;
    cout << "Enter the numbers below:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   int min, max;
    findMinAndMax(a, 0, n - 1, &min, &max);
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;


    return 0;
}
