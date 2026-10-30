typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_831BCCF0;
extern Node *lbl_8323B468;
void fn_83139BD8(void) { Node *p = &lbl_831BCCF0; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
