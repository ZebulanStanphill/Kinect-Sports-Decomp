typedef struct Item_826C6BC0 { int pad[2]; int c; } Item_826C6BC0;
typedef struct Holder_826C6BC0 { int pad[2]; Item_826C6BC0 **items; unsigned int n; } Holder_826C6BC0;
typedef struct Elem_826C6BC0 { char pad[0x66]; unsigned char flags; } Elem_826C6BC0;
typedef struct Obj_826C6BC0 {
  char pad[0xa8]; Elem_826C6BC0 **arr; unsigned int narr; char pad2[0x1b4 - 0xb0]; Holder_826C6BC0 *h;
} Obj_826C6BC0;

void fn_826C6BC0(Obj_826C6BC0 *o, void *param_2)
{
  unsigned int i;
  if (o->h != 0) {
    for (i = 0; i < o->h->n; i++) {
      int c = o->h->items[i]->c;
      if (c != 0) {
        (*(int (**)())(*(int *)c + 0x10))((void *)c, param_2);
      }
    }
  }
  for (i = 0; i < o->narr; i++) {
    Elem_826C6BC0 *e = o->arr[i];
    if ((e->flags & 0x80) != 0) {
      (*(int (**)())(*(int *)e + 0xdc))(e, param_2);
    }
  }
}
