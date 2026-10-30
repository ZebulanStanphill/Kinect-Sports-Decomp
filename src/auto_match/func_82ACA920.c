typedef struct { int v[5]; } Data;
typedef struct List { int x0; struct Node *head; } List;
typedef struct Node { int a; int b; struct Node *next; List *list; int x10; } Node;
extern Node *fn_82AC6560(void *pool, int size, int tag);

void fn_82ACA920(void *pool, Data *src, List *list)
{
    Node *n = fn_82AC6560(pool, 0x14, 0x1a);
    *(Data *)n = *src;
    n->list = list;
    n->x10 = 0;
    n->next = list->head;
    list->head = n;
}
