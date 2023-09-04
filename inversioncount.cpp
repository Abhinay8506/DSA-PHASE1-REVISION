
#include <bits/stdc++.h>
using namespace std;

int merge(int*arr, int low, int mid, int high) {
    int temp[high-low+1]; // temporary array
    int left = low;      
    int right = mid + 1;   

 
    int cnt = 0;

   
    int k=0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k++]=arr[left++];
        }
        else {
           temp[k++]=arr[right++];
            cnt += (mid - left + 1); 
    
        }
    }

   

    while (left <= mid) {
        temp[k++]=arr[left++];
    }

    while (right <= high) {
        temp[k++]=arr[right++];
    }

    int p=0;
    for (int i = low; i <= high,p<k; i++,p++) {
        arr[i] = temp[i - low];
    }

    return cnt; 
}

int mergeSort(int*arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  
    cnt += mergeSort(arr, mid + 1, high); 
    cnt += merge(arr, low, mid, high);  
    return cnt;
}

int numberOfInversions(int*a, int n) {

    
    return mergeSort(a, 0, n - 1);
}

int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt = numberOfInversions(arr, n);
    cout << "The number of inversions are: "
         << cnt << endl;
    return 0;
}

