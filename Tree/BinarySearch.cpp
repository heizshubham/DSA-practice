#include<iostream>
using namespace std;

int main()
{
 int list[10];
 int last =9;
 cout << "Enter the array elements(10) : \n";
 for(int i=0;i<10;i++)
  cin >> list[i];

 int target;
 cout << "Enter the element to be searched : ";
 cin >> target;

 int begin = 0;
 int end = 9;
 int mid,locn;
 while(begin<=last) {
  mid = (begin+end)/2;
  
  if(target>list[mid])
   begin = mid+1;
 
  else if(target<list[mid])
   end = mid-1;

  else
   begin = last+1;
 }
 locn = mid;
 if(target == list[mid])
  cout << "Element found at : " << locn+1;

 else
  cout << "Element not found";
 return 0;
}
