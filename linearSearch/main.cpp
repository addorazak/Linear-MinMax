#include <iostream>
using namespace std;

int findPosition(int key, int a[], int n)
{
    if (n == 0) {
        return -1;
    }
    else if (key == a[n - 1]) {
        return n - 1;
    }
    else{
        return findPosition(key, a, n - 1);
    }
}

int main()
{
    int a[20];
    int n;

    cout << "Enter array length:"<<endl;
    cin >> n;
    cout << "Enter numbers below:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter number to find: ";
    cin >> key;

    int position = findPosition(key, a, n);
    if (position == -1)
        cout << "Number was not found" << endl;
    else
        cout << "Number found at position " << position <<  endl;

    return 0;
}

