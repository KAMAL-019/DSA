SinglyLinkedListNode *p = llist;
    int i = 0;
    while (p != NULL)
    {
        p = p->next;
        i++;
    }
    i = i-1;
    p = llist;
    while(p!=NULL){
        if(i == positionFromTail){
            break;
        }
        p=p->next;
        i--;
    }
   return p->data;
}
