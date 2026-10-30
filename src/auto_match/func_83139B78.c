typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_831BCCC0;
extern Node *lbl_8323B468;
void fn_83139B78(void) { Node *p = &lbl_831BCCC0; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
