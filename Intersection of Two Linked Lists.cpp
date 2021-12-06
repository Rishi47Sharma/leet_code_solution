class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL)
        {
            return NULL;
        }
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        while(tempA != tempB){
             if(tempA==NULL)
            {
                tempA=headB;
            }else{
                tempA=tempA->next;
            }
         if(tempB==NULL)
            {
                tempB=headA;
            }else{
                tempB=tempB->next;
            }
            
        }
           
        return tempA;
        
        
    }
};
