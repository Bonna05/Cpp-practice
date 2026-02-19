#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Array Size: ";
    cin>>n;
    int arr[200];
    cout<<"Array Input: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"Largest element: "<<largest;
    return 0;
    
}