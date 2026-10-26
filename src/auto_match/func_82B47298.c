typedef struct Node { struct Node *next; } Node;
typedef struct { int pad; Node *head; } Pool;
typedef struct { char pad[0x3cc]; Pool pool; } Owner;
typedef struct { Owner *owner; Node *node; } Args;

void fn_82B47298(Args *a)
{
  Pool *pool = &a->owner->pool;
  Node *n = a->node;
  n->next = pool->head;
  pool->head = n;
}
