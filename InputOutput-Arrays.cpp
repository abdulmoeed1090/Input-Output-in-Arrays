// This is the simple c++ task to display the smallest and largest number entered in this program using arrays
#include <iostream>
#include <limits>
using namespace std;

// main function
int main()
{
    int n;
    // setting max number to minimum integer value because if number entered is grater than minimum integer value it will store this grater value
    int maxNo = INT_MIN;
    // setting min number to maximum integer value because if number entered is less than maximum integer value it will store this grater value
    int minNo = INT_MAX;
    int arr[n];
    cout << "Enter the size of array:" << endl;
    cin >> n;
    cout << "Enter the values you want to store in an Array:\n";
    // us8ing for-loop
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
        cout << endl;

        if (arr[n] > maxNo)
        {
            maxNo = arr[n];
        }
        if (arr[n] < minNo)
        {
            minNo = arr[n];
        }
    }
    // Displaying max and min numbers
    cout << "Max number you entered is:" << maxNo << endl;
    cout << "Min number you entered is:" << minNo << endl;

    return 0;
}