#include<iostream>
using namespace std;
int main () {
    //bubble sort
    int arr[] = {2,4,6,7,8,5};
    int n = 6;
    for (int i = 0;i<n-1;i++){
        int check = 0;
        for(int j = 0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check = 1;
            }
        }if (check == 0){
            break;
        }
        for (int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
        }
    }