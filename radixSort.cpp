#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n, int exp){
int count[10];
int output[n];
for(int i=0;i<10;i++)
    count[i]=0;
for(int i=0;i<n;i++){
    count[(arr[i]/exp)%10]++;
}
for(int i=1;i<10;i++)
    count[i]=count[i]+count[i-1];
for(int i=n-1;i>=0;i--){
    output[count[(arr[i]/exp)%10]-1]=arr[i];
    count[(arr[i]/exp)%10]--;
}
for(int i=0;i<n;i++)
    arr[i]=output[i];
}


void radixSort(int arr[], int n){
int max;
for(int i=0;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
int noOfDigits=floor(log10(max)+1);
for(int exp=1;max/exp>0; exp=exp*10){
    countingSort(arr,n,exp);
}
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
radixSort(arr,n);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
