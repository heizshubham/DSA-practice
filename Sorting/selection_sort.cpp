// Sorting algo

// 1. Selection sort
// 2. Bubble sort
// 3. quick sort (rand quick)
// 4. Merge sort
// 5. Insertion sort
// 6. count sort

// # Algo (understanding logic)
// # Code
// # Complexity Analysis (TC and SC)
// # Adaptive?
// # Stable?
// [5, 7, 9. 2 , 5 11, 9]
// => [2,5,5,7,9,9,11]

// Selection sort
/* 	name: selection_sort function
	params: a list (array) - arr
	return: sorted array
*/
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// // Return type function_name (parameters)
// void selection_sort(int shub_arr[], int len)
// {
// 	// travele for each postion
	
// 	for(int i=0;i<len;i++)
// 	{
// 		// what to do for each position?
// 		// start traveling from next of cuurent pos and do some check
// 		int k = i;
// 		for(int j=i+1;j<len;j++)
// 		{
// 			// do some check up
// 			if(shub_arr[j]<shub_arr[k])
// 			{
// 				k=j; // assigment operation 
// 			}
// 		}
// 		swap(shub_arr[i], shub_arr[k]);
// 	}
// 	return;
// }
// int main()
// {
// 	/* code */
// 	int intput_arr[] = {2,8,5,3,9,4,1};
// 	int len = sizeof(intput_arr)/sizeof(int);
// 	cout<<"length of array is: "<<len<<endl;
// 	selection_sort(intput_arr, len);
// 	for(int i=0;i<len;i++)
// 	{
// 		cout<<intput_arr[i]<<" ";
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
// Return type function_name (parameters)
vector<int> selection_sort(vector<int>shub_arr)
{
	// travele for each postion
	int len = shub_arr.size();
	cout<<"length of array is: "<<len<<endl;
	for(int i=0;i<len;i++)
	{
		// what to do for each position?
		// start traveling from next of cuurent pos and do some check
		int k = i;
		for(int j=i+1;j<len;j++)
		{
			// do some check up
			if(shub_arr[j]<shub_arr[k])
			{
				k=j; // assigment operation 
			}
		}
		swap(shub_arr[i], shub_arr[k]);
	}
	return shub_arr;
}
int main() {
    int len;
    cout << "Enter array size: ";
    cin >> len;
    vector<int> input_arr(len);
    cout << "Enter array elements: ";
    for (int i = 0; i < len; i++) {
        cin >> input_arr[i];
    }

    vector<int> res_arr = selection_sort(input_arr);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) {
        cout << res_arr[i] << " ";
    }
    cout << endl;

    return 0;
}


