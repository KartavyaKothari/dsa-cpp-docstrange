#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}

void selection_sort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int min_in = i;

        for(int j = i+1 ; j < arr.size() ; j++){
            if(!cmp(arr[min_in] , arr[j])){
                min_in = j;
            }
        }

        swap(arr[i],arr[min_in]);
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
    selection_sort(arr);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}