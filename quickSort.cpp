#include<bits/stdc++.h>
using namespace std;
int partiton(int arr[], int l ,int h){
int pivot=arr[l];
int i=l-1,j=h+1;
while(true){

    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    if(i>=j)
        return j;
    swap(arr[i],arr[j]);
}

}
void quickSort(int arr[], int l, int h){
if(l<h){
    int p=partiton(arr,l,h);
    quickSort(arr,l,p);
    quickSort(arr,p+1,h);

}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
quickSort(arr,0,n-1);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
