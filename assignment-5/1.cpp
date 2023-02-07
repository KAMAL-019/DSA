void printLinkedList(SinglyLinkedListNode* head) {
 SinglyLinkedListNode* one;
 one = head;
 while(one!= NULL){
     cout<<one->data <<endl;
     one = one->next;
 }
 

}
