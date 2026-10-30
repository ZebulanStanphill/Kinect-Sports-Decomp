typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_831872B8;
extern Node *lbl_8323B468;
void fn_83138628(void) { Node *p = &lbl_831872B8; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
