SinglyLinkedListNode* ptr = new SinglyLinkedListNode(data);
ptr->data= data;
ptr->next =NULL;
if(llist == NULL){
    llist = ptr;
}
else{
ptr->next = llist;
llist = ptr;
}
return llist;
