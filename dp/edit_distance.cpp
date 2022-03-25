#include<bits/stdc++.h>
using namespace std;

int edit_distance(string str1, int str1_s, string str2, int str2_s){
    if(str1_s == 0) return str2_s;
    if(str2_s == 0) return str1_s;

    if(str1[str1_s-1] == str2[str2_s-1]){
        return edit_distance(str1,str1_s-1,str2,str2_s-1);
    }

    return 1+min(
        edit_distance(str1,str1_s-1,str2,str2_s-1),
        edit_distance(str1,str1_s-1,str2,str2_s),
        edit_distance(str1,str1_s,str2,str2_s-1)
    );
}

int main(){
    string first = "saurabh";
    string second = "sarabhai";

    return 0;
}