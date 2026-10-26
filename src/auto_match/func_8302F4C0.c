typedef struct Entry { int a; int b; unsigned char flags; } Entry;
typedef struct Node { struct Node *next; unsigned int key; Entry e; } Node;
typedef struct Obj { char pad[0xe4]; Node *list; } Obj;

static Entry *find(Obj *o, unsigned int key)
{
  Node *n;
  for (n = o->list; n != 0; n = n->next) {
    if (n->key == key) return &n->e;
  }
  return 0;
}

unsigned char fn_8302F4C0(Obj *param_1, unsigned int param_2)
{
  Entry *e = find(param_1, param_2);
  if (e != 0) return e->flags >> 5;
  return 0;
}
