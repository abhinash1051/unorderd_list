// C++ program to find the count of positive
// and negative integers in an array
#include<bits/stdc++.h>
using namespace std;

int CountPositive(int arr[],int n){
int p_count = 0;
for(int i =0;i<n;i++){
	if (arr[i]>=0){
	p_count++;
	}
}
return p_count;
}

//Function to print the array
void printArray(int arr[],int n){
cout<<"Array: ";
for(int i = 0; i<n; i++){
	cout<<arr[i]<<" ";
}
cout<<"\n";
}

int main()
{
int arr[] = {-9,7,-5,3,2 };
int n;
n = sizeof(arr) / sizeof(arr[0]);

printArray(arr, n);

int p_count = CountPositive(arr,n);
cout<<"Count of Positive elements = "<<p_count<<", ";
cout<<"Count of Negative elements = "<<n - p_count;

return 0;
}
