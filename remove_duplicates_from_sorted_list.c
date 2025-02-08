struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* ans = head;
    while (head != NULL && head->next != NULL) {
        if (head->val == head->next->val) {
            struct ListNode* temp = head->next;
            head->next = head->next->next;
            free(temp);
        } else {
            head = head->next;
        }
    }
    return ans;
}
