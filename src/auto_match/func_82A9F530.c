typedef unsigned int uint;
extern int fn_82A9A428();
extern int fn_82A9D3D8();
extern int fn_82A9ECB8();

struct Vec { char *data; uint count; uint cap; };
struct Obj { char pad[0x28]; int x28; };
struct Node { char pad[8]; struct Obj *obj; struct Node *next; };
struct Inner14 { char pad[0x18]; int x18; };
struct Inner18 { char pad[0x2c]; struct Node *head; };
struct B { char pad[0x14]; struct Inner14 *p14; struct Inner18 *p18; char pad2[0x28 - 0x1c]; int x28; };
struct A { char pad[0x6c]; struct Vec *vec; char pad2[0x90 - 0x70]; int hr; };
struct Entry { int a; int b; int c; };

int fn_82A9F530(struct A *a, uint idx, struct B *b)
{
  int *hr = &a->hr;
  struct Entry *e;
  struct Node *n;
  int tmp;

  if (*hr < 0) return *hr;
  {
    struct Vec *v = a->vec;
    if (v->count <= idx) {
      uint cnt = idx + 1;
      if (cnt > v->cap) fn_82A9A428(v, cnt, hr);
      v->count = cnt;
      if (*hr < 0) return *hr;
    }
  }
  e = (struct Entry *)(a->vec->data + idx * 0x14);
  e->a = fn_82A9ECB8(a, b->p14->x18);
  e->b = b->x28;
  for (n = b->p18->head; n != 0; n = n->next) {
    tmp = n->obj->x28;
    fn_82A9D3D8(&e->c, &tmp, hr);
    if (*hr < 0) return *hr;
  }
  return *hr;
}
