// Selection sort
/* 	name: selection_sort function
    params: a list (array) - arr
    return: sorted array
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Return type function_name (parameters)
void selection_sort(int shub_arr[], int len)
{
    // travele for each postion

    for (int i = 0; i < len; i++)
    {
        // what to do for each position?
        // start traveling from next of cuurent pos and do some check
        int k = i;
        for (int j = i + 1; j < len; j++)
        {
            // do some check up
            if (shub_arr[j] < shub_arr[k])
            {
                k = j; // assigment operation
            }
        }
        swap(shub_arr[i], shub_arr[k]);
    }
    return;
}
int main()
{
    /* code */
    int intput_arr[] = {2, 8, 5, 3, 9, 4, 1};
    int len = sizeof(intput_arr) / sizeof(int);
    cout << "length of array is: " << len << endl;
    selection_sort(intput_arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << intput_arr[i] << " ";
    }
    return 0;
}