typedef struct Node { struct Node *next; int a; int b; int val; } Node;
typedef struct List { int a; Node *head; } List;
typedef struct Obj { char pad[0x3c]; List *list; } Obj;
extern void fn_82518FF0(Node **it);
extern void fn_82826050(List *l, int f);
extern void fn_82F6E230(int v);

void fn_82829B70(Obj *o)
{
  Node *it;
  List *l;
  Node *head = o->list->head;
  for (it = head->next; it != head; ) {
    fn_82F6E230(it->val);
    fn_82518FF0(&it);
    head = o->list->head;
  }
  l = o->list;
  if (l) {
    fn_82826050(l, 1);
  }
}
