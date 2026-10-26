typedef struct Node { struct Node *next; } Node;
typedef struct { int a; Node *head; } FreeList;
typedef struct { char pad[0x3cc]; FreeList list; } Obj;
extern void fn_82B20BC0(Node *n);
static void Push(FreeList *l, Node *n) { n->next = l->head; l->head = n; }
void fn_82B22F90(Obj *o, Node *n)
{
  fn_82B20BC0(n);
  Push(&o->list, n);
}
