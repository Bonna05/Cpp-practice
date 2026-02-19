#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    
    if(n<=1){
        cout<<"Not Prime";
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0)
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}