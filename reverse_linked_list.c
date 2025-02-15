struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *b = NULL, *pre = head, *a = NULL;
    while (pre != NULL) {
        a = pre->next;
        pre ->next = b;
        b = pre;
        pre = a;
    }
    return b;
}
