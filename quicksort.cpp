#include<bits/stdc++.h>
using namespace std;
int quickpivot(int* arr,int s,int e)
{
    int i=s;
    int j=e;
    int pivotindex=s;
    while(i<=j && i<=e)
    {
        while(arr[i]<=arr[pivotindex])
        {
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[pivotindex],arr[j]);
    
    return j;

}
void quicksort(int* arr,int s,int e){
    if(s>=e){
        return;
    }
    int  pivot=quickpivot(arr,s,e);
    quicksort(arr,s,pivot-1);
    quicksort(arr,pivot+1,e);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"hello";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
