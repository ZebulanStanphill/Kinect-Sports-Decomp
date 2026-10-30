struct Obj_826CE4B0;
typedef struct V_826CE4B0 { void (**vt)(struct V_826CE4B0 *); } V_826CE4B0;
typedef struct Item_826CE4B0 { int pad; int rc; V_826CE4B0 *obj; int pad2; unsigned key; } Item_826CE4B0;
typedef struct List_826CE4B0 { int pad[2]; int *items; unsigned n; } List_826CE4B0;
typedef struct Sub_826CE4B0 { int (**vt)(struct Sub_826CE4B0 *); } Sub_826CE4B0;
typedef struct Child_826CE4B0 { char pad[0x66]; unsigned char f66; char pad2; Sub_826CE4B0 sub; } Child_826CE4B0;
typedef struct Obj_826CE4B0 {
  char pad[0xa8]; Child_826CE4B0 **kids; unsigned nkids; char pad2[0x104]; List_826CE4B0 *list;
} Obj_826CE4B0;
extern int fn_8267C498(Item_826CE4B0 *);
extern int fn_826997B0();
extern struct Obj_826CE4B0 *fn_826BD928();

void fn_826CE4B0(Obj_826CE4B0 *o, unsigned key)
{
  List_826CE4B0 *l;
  Item_826CE4B0 *it;
  int *items;
  Child_826CE4B0 *c;
  unsigned i, j;
  int off, ib, iv;

  l = o->list;
  if (l != 0 && (i = 0, 0 < l->n)) {
    off = 0;
    do {
      ib = (int)l->items;
      iv = *(int *)(ib + off);
      if (iv != 0) {
        *(int *)(iv + 4) = *(int *)(iv + 4) + 1;
      }
      it = (Item_826CE4B0 *)*(int *)(ib + off);
      if (it->key == key) {
        (*it->obj->vt[3])(it->obj);
        fn_826997B0((char *)o->list + 8, i);
      } else {
        i++;
        off += 4;
      }
      fn_8267C498(it);
      l = o->list;
    } while (i < l->n);
  }
  j = 0;
  if (0 < o->nkids) {
    do {
      c = o->kids[j];
      if ((c->f66 & 0x80) != 0) {
        if ((*c->sub.vt[2])(&c->sub) == 2) {
          fn_826CE4B0(fn_826BD928(&c->sub), key);
        }
      }
      j++;
    } while (j < o->nkids);
  }
}
