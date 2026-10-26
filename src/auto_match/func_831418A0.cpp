// Destroy the global list and release its sentinel through the system heap.
#include <new>
#include "game/Allocator_825089A0.h"
typedef System_825089A0 System_831418A0;
extern "C" System_831418A0 *fn_825089A0();
struct Node_831418A0 { Node_831418A0 *next; };
struct List_831418A0 { int allocator; Node_831418A0 *head; };
struct Iterator_831418A0 { Node_831418A0 *node; };
extern "C" {
extern List_831418A0 lbl_83214504;
void fn_828EAF40(Iterator_831418A0 *, List_831418A0 *, Node_831418A0 *, Node_831418A0 *);
void fn_831418A0() {
 Iterator_831418A0 result;
 fn_828EAF40(&result, &lbl_83214504, lbl_83214504.head->next, lbl_83214504.head);
 Node_831418A0 *head=lbl_83214504.head;
 System_831418A0 *system=fn_825089A0();
 system->vf28(head);
}
}
