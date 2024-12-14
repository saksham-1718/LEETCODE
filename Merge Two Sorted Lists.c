struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // Create a dummy node to simplify the process
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    // Merge the two lists while both are non-empty
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // If one of the lists is not empty, append the rest of the list
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    // Return the merged list (dummy.next is the head of the new list)
    return dummy.next;
}
