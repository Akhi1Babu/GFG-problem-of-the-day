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
  public:
    Node *flatten(Node *root) {
        // code here
        vector<int> helper;
       Node* currenthead=root;
       Node* headtemp=root;
   
       if(root==NULL){
           return NULL;
       }
      while (currenthead != NULL) { // Moves Right: 5 -> 10 -> 19 -> 28
    Node* verticalTraveler = currenthead; 
    
    while (verticalTraveler != NULL) { // Moves Down each column
        helper.push_back(verticalTraveler->data);
        verticalTraveler = verticalTraveler->bottom;
    }
    
    currenthead = currenthead->next; // Move to the next column safely
}
       sort(helper.begin(),helper.end());
       int n=helper.size();
       Node* resulthead=new Node(1);
       Node* resulttemp=resulthead;
       for(int i=0;i<n;i++){
           Node* temp=new Node(helper[i]);
           resulttemp->bottom=temp;
           resulttemp=resulttemp->bottom;
           
       }
       return resulthead->bottom;
    }
};