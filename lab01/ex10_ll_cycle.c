#include <stddef.h>
#include "ex10_ll_cycle.h"
// 0309-15点虽然通过了测试但是写的比较丑

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node * fast_ptr=head;
    node * slow_ptr=head;
    
    // int tag=0;
    // if(NULL==head)return tag;
    while(fast_ptr!=NULL && fast_ptr->next!=NULL){
        fast_ptr = fast_ptr->next->next;
        slow_ptr = slow_ptr->next;
        if(fast_ptr==slow_ptr)
            return 1;
        // tag=0;
    }
    if(fast_ptr == NULL || fast_ptr->next ==NULL) {
            // tag = 0;
            return 0;
    }
    return 0;

}
