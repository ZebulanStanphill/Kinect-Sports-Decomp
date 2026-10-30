typedef struct TNode { unsigned short type; unsigned short pad[9]; struct TNode *next; } TNode;
typedef struct Elem { int key; int pad[2]; TNode *node; int pad2[8]; } Elem;
typedef struct Arr { Elem *data; unsigned short count; } Arr;
typedef struct Item { char pad[0xac]; Arr arr; } Item;
typedef struct Owner { char pad[0x48]; Item **items; int count; } Owner;
extern void fn_82D94A38(int a, int key);

void fn_82D82658(Owner *o, int a)
{
  int i;
  for (i = 0; i < o->count; i++) {
    Item *it = o->items[i];
    Arr *arr = &it->arr;
    int j;
    for (j = 0; j < arr->count; j++) {
      Elem *e = (Elem *)((char *)arr->data + j * 0x30);
      TNode *n = e->node;
      while (n->type >= 0x17) {
        n = n->next;
      }
      if (n->type != 0x16) {
        fn_82D94A38(a, e->key);
      }
    }
  }
}
