typedef struct Node { int a,b; struct Node *next; int c; void *value; } Node;
extern void fn_82B25248(void *,void *,void *);
static __forceinline int hasNode(Node *n) {if(n) return 1;return 0;}
void fn_82B252E0(void *a, Node **b,void *c) { Node *n=b[1]; while(hasNode(n)) { if(n->value) fn_82B25248(a,n->value,c); n=n->next; } }
