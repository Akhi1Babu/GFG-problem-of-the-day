/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
private:
    Node* MergeList(Node*list1,Node*list2){
        Node*resulthead=new Node(-1);
        Node* resulttemp=resulthead;
        while(list1!=NULL && list2!=NULL){
            if(list1->data<=list2->data){
                Node* newnode=new Node(list1->data);
                list1=list1->bottom;
                 resulttemp->bottom=newnode;
            }
            else{
                
                Node* newnode=new Node(list2->data);
                list2=list2->bottom;
                 resulttemp->bottom=newnode;
                
            }
           
            
                resulttemp=resulttemp->bottom;
                resulttemp->next=nullptr;
  
        }
        if(list1){
            resulttemp->bottom=list1;
        }
        else{
            resulttemp->bottom=list2;
        }
        return resulthead->bottom;
    }
  public:
    Node *flatten(Node *root) {
        // code here
        if(root==NULL || root->next==NULL){
            return root;
        }
        Node* root2=flatten(root->next);
       return MergeList(root,root2);
       
        
    }
};