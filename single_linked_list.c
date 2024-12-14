/* All these are only functions */


/*1. Reverse the linked list*/
/* Iterative */
void reverse_list(ST **head)
{
    ST* curr = *head;
    ST* prev = NULL, *next = NULL;

    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return;
}

/* recursive */

In main, call reverse(NULL,head);
struct node *head;
void reverse(struct node *prev, struct node *cur)
{
   if(cur){
      reverse(cur,cur->link);
      cur->link = prev;
    }
    else{
      head = prev;
    }
}

/* 2. Add a nodes in linkedlist in ascending order */

void add_nodes_ascending_order(ST **head, int value)
{
    ST *temp = (ST *)malloc(sizeof(ST));
    temp->data = value;
    temp->mext = NULL;

    if(*head == NULL || *head->data >= value) {
        temp->next = *head;
        *head = temp;
    } else {
        ST* temp1 = *head;
        while(temp1->next!=NULL && temp1->next->data < temp->data)
            temp1 = temp1->next;

        temp->next = temp1->next;
        temp1->next = temp;
    }
    return;
}

