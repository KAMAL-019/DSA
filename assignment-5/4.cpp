SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* ptr = new SinglyLinkedListNode(data);
SinglyLinkedListNode* p;
p = llist;
int i = 0;
while(i != position -1){
p = p->next;
i++;
}
ptr ->data = data;
ptr ->next = p->next;
p->next = ptr;
return llist;
}
