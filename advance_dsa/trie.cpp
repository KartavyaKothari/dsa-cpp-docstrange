#include<bits/stdc++.h>
using namespace std;

class Happy{
    Happy* h;
};

class Node{
    public:
    bool is_end;
    vector<Node*> next;

    Node(){
        is_end = false;
        next = vector<Node *>(26,nullptr);
    }
};

class Trie{
    Node *root;
    public:

    Trie(){
        root = new Node();
    }

    void insert(string word){
        Node *q = root;
        for(char c: word){
            if(q->next[c-'a']==nullptr){
                q->next[c-'a'] = new Node();
            }

            q=q->next[c-'a'];
        }
        q->is_end = true;
    }

    bool find(string word){
        Node *q = root;
        for(char c: word){
            if(q->next[c-'a']==nullptr){
                return false;
            }

            q=q->next[c-'a'];
        }
        
        return q->is_end;
    }
};

int main(){

    return 0;
}