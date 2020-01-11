#include<iostream>
using namespace std;
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
void push(struct node** head_ref, int new_data)
{
   
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

int GetNth(struct node* head, int index);


int main()
{
  int T,i,n,l,k;
    
    cin>>T;
    
    while(T--){
    struct node *head = NULL;
        
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }
   
    printf("%d\n", GetNth(head, n-k));  
    getchar();
    }
    return 0;
}

/* Print he nth node in the linked list Node is defined as 

struct node
{
    int data;
    struct node* next;
}; 
// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index){
         node *temp=head;
         for(int i =0;i<index;i++){
             temp=temp->next;
         }
         int x;
         x=temp->data;
         return x;
}
