#include <iostream>

using namespace std;

int LargestNonAdjacentSum(int a[],int n){
    int LNAsums[n+1];
    LNAsums[1] = a[1];
    LNAsums[2] = a[2]>LNAsums[1]?a[2]:LNAsums[1];
    for(int i=3;i<=n;i++){
        if(a[i]+LNAsums[i-2]>LNAsums[i-1]){
            LNAsums[i] = a[i]+LNAsums[i-2];
        }else{
            LNAsums[i] = LNAsums[i-1];
        }
    }
    return LNAsums[n];
}
int main()
{
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    int a[n+1];
    cout<<"\nEnter elements: ";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"\nLargest non adjacent sum: "<<LargestNonAdjacentSum(a,n);
}
