struct ListNode{
    int val;
    ListNode* next;    
    /*ListNode(){
        val = 0;
        next = nullptr;
    }*/
    // simpler way to write constructors
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next){}
};


// given two linked lists, invert them and sum the digits to find a new number.
// create a new inverted list for that number.
class Solution{
    public: ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        ListNode* head = new ListNode();
        ListNode* temp = head;
        int digito1,digito2,sobe=0;
        while(l1||l2||sobe){
            if(l1){
                digito1 = l1->val;
                l1 = l1->next;
            }else{
                digito1 = 0;
            }
            if(l2){
                digito2 = l2->val;
                l2 = l2->next;
            }else{
                digito2 = 0;
            }
            int soma = digito1+digito2+sobe;
            sobe = soma/10;
            soma %= 10;
            ListNode* newNode = new ListNode(soma); // use CONSTRUCTOR
            temp->next = newNode;
            temp = temp->next;
        }
        return head->next;
    }
};