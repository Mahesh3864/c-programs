/* All these are only functions */


/*Reverse the linked list*/
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
    return NULL;
}

/* recursive */

ST* reverse_list(ST* head)
{

