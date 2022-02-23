#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}

void insertion_sort(vector<int> &arr){
    for(int i = 1 ; i < arr.size() ; i++){
        int curr = arr[i];
        int j;
        for(j = i-1 ; j >= 0 ; j--){
            if(cmp(arr[j],curr)){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = curr;
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
    insertion_sort(arr);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}