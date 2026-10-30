typedef struct Node { int pad[2]; struct Node *next; } Node;
extern void (*lbl_831751CC)(Node *);
void fn_82BF71F8(Node *p) { while (p) { Node *next = p->next; lbl_831751CC(p); p = next; } }
