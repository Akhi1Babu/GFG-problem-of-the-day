/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    private:
        int checking(Node * root){
             if(root==NULL){
            return 0;

        }
        int left=checking
        (root->left);
        int right=checking
        (root->right);
        if(left==-1|| right==-1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }
        return 1+max(left,right);
        
        }
  public:
    bool isBalanced(Node* root) {
        // code here
      int temp= checking(root);
      return temp!=-1;
       
    }
};