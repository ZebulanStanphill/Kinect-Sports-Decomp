typedef struct Node { struct Node *next; unsigned key; int value; } Node;
typedef struct Map { Node *head; } Map;
extern unsigned *fn_8300C068(void);
static int *find(Map *m, unsigned key) { Node *n; for (n = m->head; n; n = n->next) if (n->key == key) return &n->value; return 0; }
int *fn_8300C538(Map *m, unsigned key) { int *v = find(m, key); if (v == 0) { unsigned *p = fn_8300C068(); if (p != 0) { *p = key; v = (int *)(p + 1); } } return v; }
