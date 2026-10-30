typedef struct Node { int a, b; struct Node *next; } Node;
extern Node lbl_83186F2C;
extern Node *lbl_8323B468;
void fn_83138608(void) { Node *p = &lbl_83186F2C; Node *old = lbl_8323B468; lbl_8323B468 = p; p->next = old; }
