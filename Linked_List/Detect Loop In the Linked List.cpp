int detectloop(Node *head) {
    
    
     Node *one,*two;
    one =head;
    two=head;
    while(one && two && two->next){
        one=one->next;
        two=two->next->next;
        // two=two->next;
        if(one==two){
            return 1;
        }
    }
    return 0;
    
}
