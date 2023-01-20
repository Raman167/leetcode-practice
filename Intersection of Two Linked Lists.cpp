class Solution {
public:
    
    bool isNodePresent(ListNode* headA, ListNode* target){
    while(headA!=NULL){
      if(headA==target)
        return true;
    headA=headA->next;
    }
    return false;
}

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       while(headB != NULL){
          if(isNodePresent(headA, headB)) 
             return headB;
          headB = headB->next;
      }
        return NULL;   
    }

  
};

