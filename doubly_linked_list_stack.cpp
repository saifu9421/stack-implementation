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
                    Node *tmp =  head;
                     while (tmp->next !=  NULL)
                     {
                          tmp =  tmp->next;
                     };
                      tmp->next = newNode;
                       newNode->prev = tmp;
                     
              };
               
               void pop(){
                    if(head->next == NULL){
                         Node *deleteNode = head;
                          head = head->next;
                           delete deleteNode;
                    }; 
                    Node *tmp = head;
                     while (tmp->next->next != NULL)
                     {
                          tmp = tmp->next;
                     };
                     Node *deleteNode = tmp->next->next;
                     tmp->next = tmp->next->next;
                     delete deleteNode;
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
                      Node  *tmp =  head;
                       if(tmp->next == NULL){
                         return tmp->val;
                       };
                        while (tmp->next != NULL)
                        {
                             tmp = tmp->next;
                        };
                         return tmp->val;
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