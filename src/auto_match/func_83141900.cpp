// Erase the global tree and release its sentinel through the system allocator.
#include <new>
#include "game/Allocator_825089A0.h"
struct Node_83141900 { Node_83141900 *left; };
struct Tree_83141900 { int allocator; Node_83141900 *head; };
extern "C" {
extern Tree_83141900 lbl_83214518;
void fn_828EAF40(void *result, Tree_83141900 *tree, Node_83141900 *root, Node_83141900 *last);
void fn_83141900()
{
    char result[16];
    fn_828EAF40(result, &lbl_83214518, lbl_83214518.head->left, lbl_83214518.head);
    Node_83141900 *head = lbl_83214518.head;
    fn_825089A0()->vf28(head);
}
}
