typedef struct Child { unsigned char prefix[0x10]; int value; int pad; } Child;
typedef struct Node { struct Node *next; unsigned char prefix[0x14]; Child child[2]; } Node;
typedef struct List { int pad; Node *head; } List;
extern void fn_82359C18(Child *value);
extern void fn_822509A0(Node **value);
void fn_823D5BA8(List *l){ Node *it; Node *n = l->head->next; it = n; while (n != l->head) { Child *c = &n->child[0]; fn_82359C18(c); n->child[0].value = 0; fn_82359C18(c + 1); n->child[1].value = 0; fn_822509A0(&it); n = it; } }