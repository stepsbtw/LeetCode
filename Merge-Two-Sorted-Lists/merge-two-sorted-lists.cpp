struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Simple DSA problem, using an implemented linked list.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if either the lists are empty, just return the other list.
        if(!list1){ 
            return list2;
        }
        if(!list2){
            return list1;
        }
        // as the struct was implemented without giving pointer to head and pointer to tail we create them.
        ListNode* head;
        ListNode* tail;
        
        if(list1->val<list2->val){ // just choosing the right start.
            head = list1;
            tail = list1;
            list1 = list1->next;
        }else{
            head = list2;
            tail = list2;
            list2 = list2->next;
        }

        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next = list1; // insert the lowest element in the tail of the list.
                list1 = list1->next;
            }else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // as tail is a pointer, you can easily traverse the list.
        }
        if(!list1){ // ITS IMPORTANT TO HANDLE THE LAST ELEMENT, WHICH IS NOT COVERED IN THE LOOP.
            tail->next = list2;
        }else{
            tail->next = list1;
        }
        return head;
    }
};
