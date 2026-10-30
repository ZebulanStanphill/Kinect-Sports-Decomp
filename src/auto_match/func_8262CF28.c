struct Node_8262CF28;
typedef struct { int kind; int pad; int key; } Body_8262CF28;
typedef struct Node_8262CF28 { struct Node_8262CF28 *prev; struct Node_8262CF28 *next; Body_8262CF28 *data; } Node_8262CF28;
typedef struct { Node_8262CF28 *prev; Node_8262CF28 *next; Body_8262CF28 body; } Link_8262CF28;
typedef struct { char pad[0x304]; Node_8262CF28 *head; } Owner_8262CF28;
typedef struct { int pad0; int pad1; int flag; int key; int pad2; float val; } Req_8262CF28;
extern int fn_82522ED8(l);
extern float lbl_821CC160;

char fn_8262CF28(Owner_8262CF28 *o, Req_8262CF28 *r)
{
  Node_8262CF28 *n;
  Body_8262CF28 *b;
  for (n = o->head; n != 0; n = n->next) {
    b = n->data;
    if (b->kind == 0x6d) goto found;
  }
  b = 0;
found:
  while (b != 0) {
    if (b->key == r->key) {
      Link_8262CF28 *l;
      if (r->val != lbl_821CC160) return 0;
      l = (Link_8262CF28 *)((char *)b - 8);
      if (l->prev != 0) l->prev->next = l->next;
      if (l->next != 0) l->next->prev = l->prev;
      l->prev = 0;
      l->next = 0;
      fn_82522ED8(l);
      return (r->flag == 0) + 1;
    }
    {
      int kind = b->kind;
      Link_8262CF28 *l = (Link_8262CF28 *)((char *)b - 8);
      for (n = l->next; n != 0; n = n->next) {
        b = n->data;
        if (b->kind == kind) goto next;
      }
      b = 0;
    }
next: ;
  }
  return 0;
}
