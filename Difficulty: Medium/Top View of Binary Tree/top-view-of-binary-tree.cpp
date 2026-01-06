/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution{
    public:
    vector<int> topView(Node *root){
        //your code goes here
        map<int,int> mpp;
        queue<pair<Node*,int>> que;
        //doing level order Traversal...
        que.push({root,0});
        while(!que.empty()){
            auto node=que.front();
            que.pop();
            int linenum=node.second;
            if(mpp.find(linenum)==mpp.end()){
                mpp[linenum]=node.first->data;
            }
            if(node.first->left){
                que.push({node.first->left,linenum-1});
            }
            if(node.first->right){
                que.push({node.first->right,linenum+1});
            }

        }
        vector<int> result;
        for(auto it :mpp){
            result.push_back(it.second);
        }
        return result;

    }
};