typedef struct Node { unsigned int pad; struct Node *next; unsigned int rest[1]; unsigned int value; } Node;
unsigned int fn_82CEACC8(Node *p) { Node *n = p->next; unsigned int sum = p->value; if (n) do { sum += n->value; n = n->next; } while (n); return sum; }
