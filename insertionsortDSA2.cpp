#include<iostream>
#include<vector>
using namespace std;
int main () {
    //insertion sort
    int arr[] = {2,4,-1,7,8,5};
    int n = 7;
    for (int i =1;i<n;i++){
        int j = i;
        while (j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
