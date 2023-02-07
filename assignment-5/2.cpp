SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
struct SinglyLinkedListNode * ptr = new SinglyLinkedListNode(data);
ptr->data = data;
ptr->next = NULL;
if (head == NULL) {
 head = ptr;
}
else{
SinglyLinkedListNode * p = head;
while(p->next != NULL){
    p = p-> next;
}
p->next = ptr;
}
return head;
}
