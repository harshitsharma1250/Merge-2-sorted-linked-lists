class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ptr1 = list1 ;
        ListNode *ptr2 = list2 ;
        ListNode *ptr3 = new ListNode(-1) ;
        ListNode *temp = ptr3 ;


        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val > ptr2->val){
                ptr3->next = ptr2 ;
                ptr2 = ptr2->next ;
            }
            else{
                ptr3->next = ptr1 ;
                ptr1 = ptr1->next ;
            }
            ptr3=ptr3->next ;
        }

        while(ptr1!=NULL){
            ptr3->next = ptr1 ;
            ptr1=ptr1->next ;
            ptr3=ptr3->next ;
        }

         while(ptr2!=NULL){
            ptr3->next = ptr2 ;
            ptr2=ptr2->next ;
            ptr3=ptr3->next ;
        }

        return temp->next ;
    }
};
