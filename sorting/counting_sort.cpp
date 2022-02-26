#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

void counting_sort(vector<int> &arr){
   map<int,int> cnt;

   for(int ele: arr){
       cnt[ele]++;
   }

   int i = 0;

    for(auto row: cnt){
        int k = row.second;

        while(k--){
            cout<<row.first<<" ";
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
    vector<int> arr = {1,3,4,5,3,2,4,5,2,2,1,1,4,4,5,6,7,8,4,3,1};
    cout<<"Arr before sorting: "<<endl;
    display(arr);
    cout<<endl;
    cout<<"Arr after sorting: "<<endl;
    counting_sort(arr);
    
    // display(arr);
}