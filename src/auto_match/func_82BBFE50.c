typedef struct Node_82BBFE50 {
    int pad0;
    struct Node_82BBFE50 *next;   /* 0x04 */
    struct Node_82BBFE50 *prev;   /* 0x08 */
} Node_82BBFE50;

typedef struct Owner_82BBFE50 {
    char pad0[0xc];
    Node_82BBFE50 anchor;         /* 0x0c */
} Owner_82BBFE50;

void fn_82BBFE50(Owner_82BBFE50 *o, Node_82BBFE50 *n)
{
    Node_82BBFE50 *at = &o->anchor;
    Node_82BBFE50 *next;

    next = at->next;
    n->next = next;
    if (next != 0) {
        next->prev = n;
    }
    n->prev = at;
    at->next = n;
}
