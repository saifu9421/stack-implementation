#include<bits/stdc++.h>
using namespace std;
  class Node{
      public:
         int val;
           Node *next;
          Node*prev;
            Node(int val){
                this->val =  val;
                   this->next = NULL;
                  this->prev = NULL;
            }
    };
     class MyStack{
           public:
                     Node *head = NULL;
                     Node *tail = NULL;
              
              void push(int val){
                 Node *newNode  = new Node(val);
                  if(head == NULL){
                     head  = newNode;
                     tail = newNode;
                     return;
                  };
                     tail->next = newNode;
                     newNode->prev = tail;
                       tail = newNode;
                     
              };
               
               void pop(){
                    if(head->next == NULL){
                         Node *deleteNode = head;
                          head = head->next;
                           delete deleteNode;
                           return;
                    }; 
                        Node *deleteNode =  tail;
                        tail = tail->prev;
                        delete deleteNode;
                        tail->next = NULL;
               };
                
                int size(){
                        Node *tmp =  head;
                          int  count = 0;
                            while (tmp != NULL)
                            {
                                 count++;
                                  tmp = tmp->next;
                            };
                             return count;      
                };
                 
                 int top(){
                     return tail->val;
                 };
                  
                  bool empty(){
                      if(size() == 0) return true;
                       else return false;
                  };
     };
      
 int main(){
         MyStack st;
          int n;
           cin>>n;
            for(int i = 1; i<= n; i++){
                  int val; cin>>val;
                   st.push(val);
            };
             while (!st.empty())
             {
                   cout<<st.top()<<" ";
                    st.pop();
             };
             
     return 0;
 }