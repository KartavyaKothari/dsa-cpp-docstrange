#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int partition(vector<int> &arr, int a, int b){
    int pivot = arr[b];
    int i = a-1;

    for(int j = a ; j < b ; j++){
        if(cmp(arr[j],pivot)){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],pivot);

    return i+1;
}

void quick_sort(vector<int> &arr, int a, int b){
   if(a>=b) return;

   int p = partition(arr,a,b);

   quick_sort(arr,a,p-1);
   quick_sort(arr,p+1,b);
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
    quick_sort(arr,0,arr.size()-1);
    cout<<"Arr after sorting: "<<endl;
    display(arr);
}