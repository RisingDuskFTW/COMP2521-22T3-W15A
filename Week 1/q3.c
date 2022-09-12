// Solution 1: Using a while loop
void listDelete(struct list *l, int value) {
    // list is empty
    if (l->head == NULL) {
        return;
    
    // deleting first value
    } else if (l->head->value == value) {
        struct node *newHead = l->head->next;
        free(l->head);
        l->head = newHead;
    
    // deleting middle value
    } else {
        struct node *curr = l->head;
        while (curr->next != NULL) {
            if (curr->next->value == value) {
                struct node *toDelete = curr->next;
                curr->next = toDelete->next;
                free(toDelete);
                break;
            }
            curr = curr->next;
        }
    }
}

// Solution 2: Using a for loop
void listDelete(struct list *l, int value) {
    // list is empty
    if (l->head == NULL) {
        return;
    
    // deleting first value
    } else if (l->head->value == value) {
        struct node *newHead = l->head->next;
        free(l->head);
        l->head = newHead;
    
    // deleting middle value
    } else {
        for (struct node *curr = l->head; curr->next != NULL; curr = curr->next) {
            if (curr->next->value == value) {
                struct node *toDelete = curr->next;
                curr->next = toDelete->next;
                free(toDelete);
                break;
            }
        }
    }
}
