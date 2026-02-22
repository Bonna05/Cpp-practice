#include<iostream>
using namespace std;
int main()
{
                int n;
                cout<<"Size: ";
                cin>>n;
                int arr[n];
                cout<<"Array Input: ";
                for(int i=0;i<n;i++){
                                cin>>arr[i];
                }
                int item;
                cout<<"Item: ";
                cin>>item;

                int index=0;
                while(index<n && arr[index]!=item){
                                index++;
                }
                cout<<item<<"found at index "<<index<<endl;
                int new_value;
                cout<<"New Value: ";
                cin>>new_value;

                for(int i=n-1;i>=index;i--){
                                arr[i+1]=arr[i];
                }


                arr[index]=new_value;
                n=n+1;
                cout<<"Updated value: ";
                for(int i=0;i<n;i++){
                                cout<<arr[i]<<" ";
                }


                return 0;
}
