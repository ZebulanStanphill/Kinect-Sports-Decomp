typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_831BCCD0;
extern Node *lbl_8323B468;
void fn_83139B98(void) { Node *p = &lbl_831BCCD0; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
