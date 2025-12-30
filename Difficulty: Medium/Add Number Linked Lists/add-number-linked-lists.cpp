/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
    private:
        Node* reversingList(Node *head){
            if(head==NULL || head->next==NULL){
                return head;
            }
            Node* newhead=reversingList(head->next);
            Node * front=head->next;
            front->next=head;
            head->next=nullptr;
            return newhead;
            
        }
    
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // solve using reversing the Linked List
        Node* newhead1= reversingList(head1);
        Node* newhead2=reversingList(head2);
        
        Node* temp1=newhead1;
        Node* temp2=newhead2;
       
        Node* resulttemp= new Node(0);
        Node* resulthead=resulttemp;
        
        int carry=0;
        while (temp1 || temp2 || carry) {
    int val1 = temp1 ? temp1->data : 0;
    int val2 = temp2 ? temp2->data : 0;

    int sum = val1 + val2 + carry;
    carry = sum / 10;

    resulttemp->next = new Node(sum % 10);
    resulttemp = resulttemp->next;

    if (temp1) temp1 = temp1->next;
    if (temp2) temp2 = temp2->next;
}

        if(temp1!=NULL){
              int digit=(temp1->data+ carry)%10;
            carry=(temp1->data+carry)/10;
            Node* temp=new Node(digit);
            resulttemp->next=temp;
            resulttemp=resulttemp->next;
            
            temp1=temp1->next;
            
        }
        if(temp2!=NULL){
              int digit=(temp2->data+ carry)%10;
            carry=(temp2->data+carry)/10;
            Node* temp=new Node(digit);
            resulttemp->next=temp;
            resulttemp=resulttemp->next;
            
            temp2=temp2->next;
            
        }
        if(carry==1){
            Node* temp=new Node(carry);
            resulttemp->next=temp;
        }
      
        Node* finalresulthead = reversingList(resulthead->next);
        Node* finaltemp=finalresulthead;
        while(finaltemp!=NULL){
            if(finaltemp->data!=0){
                return finaltemp;
            }
            finaltemp=finaltemp->next;
        }
        
        
        
        
    }
};