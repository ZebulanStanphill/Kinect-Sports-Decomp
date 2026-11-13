/* Walks the list to the node whose next is the sentinel lbl_8320A778 and sets its state to 2. */
typedef struct Node_82822E08 { struct Node_82822E08 *next; int pad4; int pad8; int state; } Node_82822E08;
extern Node_82822E08 *lbl_8320A778;
void fn_82822E08(Node_82822E08 *n)
{
    Node_82822E08 *m = n;
    Node_82822E08 *end = lbl_8320A778;
    while (m->next != end) m = m->next;
    m->state = 2;
}
