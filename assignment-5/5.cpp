SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
SinglyLinkedListNode* p = llist;
SinglyLinkedListNode* q = llist->next;
if(position == 0){
    llist = llist->next;
    free(p);
    return llist;
}
else if(position == 1){
    p->next = q->next;
    free(q);
    return llist;
}
else{
int i = 0;
while( i != position -1){
    p = p->next;
    q= q->next;
    i++;
}
p->next = q->next;
free(q);
return llist;
}
}
