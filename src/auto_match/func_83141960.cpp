// Erase the global tree's nodes and release its sentinel through the system.
// The erase helper remains an out-of-line call. Tree_83141960 and
// Node_83141960 describe only the fields this shutdown function accesses.

#include <utility>
#include "game/Allocator_825089A0.h"
struct Node_83141960 { Node_83141960 *left; };
struct Tree_83141960 { int pad; Node_83141960 *head; };
extern "C" { Tree_83141960 lbl_8321452C; void fn_828EAF40(void *, Tree_83141960 *, Node_83141960 *, Node_83141960 *); }
extern "C" void fn_83141960() {
 char result[16];
 fn_828EAF40(result, &lbl_8321452C, lbl_8321452C.head->left, lbl_8321452C.head);
 Node_83141960 *head = lbl_8321452C.head;
 fn_825089A0()->vf28(head);
}
