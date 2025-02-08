struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next = head;
    struct ListNode* prev = temp;
    struct ListNode* pres = head;
    
    while (pres != NULL) {
        if (pres->val == val) {
            prev->next = pres->next; 
            free(pres);
        } else {
            prev = pres;
        }
        pres = prev->next; 
    }
    
    head = temp->next;
    free(temp);
    return head;
}
