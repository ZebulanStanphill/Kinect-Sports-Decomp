typedef struct E_82D8ED88 { char pad[0x20]; unsigned short idx; unsigned short link; char pad2[2]; unsigned char flags; } E_82D8ED88;
typedef struct Vec_82D8ED88 { E_82D8ED88 **data; int size; } Vec_82D8ED88;
typedef struct Obj_82D8ED88 { char pad[0x28]; Vec_82D8ED88 a; char pad1[4]; Vec_82D8ED88 b; char pad2[4]; E_82D8ED88 **links; } Obj_82D8ED88;

static void Remove(Vec_82D8ED88 *v, E_82D8ED88 *e)
{
  v->data[e->idx] = v->data[v->size - 1];
  v->data[e->idx]->idx = e->idx;
  v->size--;
}

void fn_82D8ED88(Obj_82D8ED88 *o, E_82D8ED88 *e)
{
  if ((e->flags & 0xc0) == 0) {
    Remove(&o->b, e);
  } else {
    Remove(&o->a, e);
  }
  if (e->link != 0xffff) {
    o->links[e->link] = 0;
    e->link = 0xffff;
  }
}
