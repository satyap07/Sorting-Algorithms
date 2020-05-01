#include<bits/stdc++.h>
using namespace std;
void cycleSort(int arr[], int n){
   for(int cs=0;cs<n-1;cs++){
    int pos=cs;
    int item=arr[cs];
    for(int i=cs+1;i<n;i++)
        if(arr[i]<item)
            pos++;
    if(pos==cs)
        continue;
    if(arr[pos]==item)
        pos++;
    swap(item,arr[pos]);
    while(pos!=cs){
        pos=cs;
        for(int i=cs+1;i<n;i++)
            if(arr[i]<item)
                pos++;
        if(arr[pos]==item)
            pos++;
        swap(item,arr[pos]);
    }
   }

}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
cycleSort(arr,n);
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

