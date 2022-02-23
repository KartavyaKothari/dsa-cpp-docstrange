#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a<b;
}

void merge(vector<int> &arr, int a, int m, int b){
    // vector<int> arr1;
    // for(int i = a ; i <= m ; i++)arr1.push_back(arr[i]);
    vector<int> arr1(arr.begin()+a,arr.begin()+m+1);
    vector<int> arr2(arr.begin()+m+1,arr.begin()+b+1);

    int i = 0;
    int j = 0;
    int k = a;

    while(i < arr1.size() && j < arr2.size()){
        if(cmp(arr1[i],arr2[j])){
            arr[k] = arr1[i];
            k++;
            i++;
        }else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<arr1.size()){
        arr[k] = arr1[i];
        k++;
        i++;
    }

    while(j<arr2.size()){
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void merge_sort(vector<int> &arr, int a, int b){ //merge_sort(arr,0,5)
    if(a==b) return;
    if(a>b) return;

    int mid = (a+b)/2; // mid = 2

    merge_sort(arr,a,mid); // m(arr,0,2)
    merge_sort(arr,mid+1,b); // m(arr,3,5)

    merge(arr,a,mid,b);
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
    merge_sort(arr,0,arr.size()-1);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}