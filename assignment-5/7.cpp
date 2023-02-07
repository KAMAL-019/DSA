bool has_cycle(SinglyLinkedListNode* head) {
 SinglyLinkedListNode *p,*q;
    p=head;
    q=head;
    if (head == nullptr) {
        return 0;
    }
    
    while (p != nullptr && p->next != nullptr ) {
        q=q->next;
        p=p->next->next;
        if (q==p) {
            return 1;
        }
    }
   return 0;
}
