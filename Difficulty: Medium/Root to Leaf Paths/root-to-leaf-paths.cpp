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
    void addingPath(Node* root,vector<int> & temp,vector<vector <int>> &result){
        if(root->left==NULL && root->right==NULL){ //checking if it is a leaf node...
             temp.push_back(root->data);
            result.push_back(temp);
            temp.pop_back();
            return;
            
            
        } 
        temp.push_back(root->data);
        if(root->left!=NULL){
        addingPath(root->left,temp,result);
        }
        if(root->right!=NULL){
        addingPath(root->right,temp,result);
        
        }
         temp.pop_back();
        
        
    }
    
  public:
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int> temp;
        vector<vector<int>> result;
        addingPath(root,temp,result);
        return result;
    }
};