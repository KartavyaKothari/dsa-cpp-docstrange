#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

void bubble_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = 0 ; j < arr.size() - 1 ; j++){
            if(!cmp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void display(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {5,4432,46,7,8,6,43,235,6,7,8,3,1};
    cout<<"Arr before sorting: "<<endl;
    display(arr);
    bubble_sort(arr);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}