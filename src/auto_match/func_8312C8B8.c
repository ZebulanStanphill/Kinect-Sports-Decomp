typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_8317F8FC;
extern Node *lbl_8323B468;
void fn_8312C8B8(void) { Node *p = &lbl_8317F8FC; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
