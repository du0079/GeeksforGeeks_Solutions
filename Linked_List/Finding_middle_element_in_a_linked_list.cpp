#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head);

/* Driver program to test above function*/
int main()
{
  int T,i,n,l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

    printf("%d\n", getMiddle(head));
    }
    return 0;
}

struct Node {
    int data;
    Node* next;
}; 

/* Should return data of middle node. If linked list is empty, then  -1*/

int getMiddle(Node *head)
{  Node *temp=head;
int count=0;
 while(temp!=NULL){
     temp=temp->next;
     count++;
 }
 temp=head;
         if(count%2==0){
             int x= ((count/2)+1);
             for(int i=0;i<x-1;i++){
                 temp=temp->next;
             }return temp->data;
         }
         else{
             int y= ((count+1)/2);
             for(int i=0;i<y-1;i++){
                 temp=temp->next;
             }return temp->data;
         }
}
