#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);       
    arr.push_back(4);
    arr.push_back(5);
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
}