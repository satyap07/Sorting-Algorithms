/**
  This algorithm is used when the elements are present only in a limited range
**/
#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[], int n){
    int output[n];
    int max=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max)
        max=arr[i];
    int range=max+1;
    int count[range];
    for(int i=0;i<range;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
    for(int i=1;i<=max;i++)
        count[i]=count[i]+count[i-1];
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
        arr[i]=output[i];

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
countingSort(arr,n);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
