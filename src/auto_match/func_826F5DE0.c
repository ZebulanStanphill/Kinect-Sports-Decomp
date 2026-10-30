typedef struct Node { char pad[0x78]; struct Node *next; } Node;
typedef struct { char pad[0xafc]; Node *head; } List;
extern void fn_8267C498(Node *);
void fn_826F5DE0(List *p) { Node *n = p->head; while (n) { Node *next = n->next; n->next = 0; fn_8267C498(n); n = next; } p->head = 0; }
