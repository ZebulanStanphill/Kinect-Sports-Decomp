typedef struct Obj Obj;
typedef struct { void *qi; void *addref; void (*Release)(Obj *o); } VT;
struct Obj { VT *vt; };
typedef struct { char pad[0x64]; unsigned int count; char pad2[0xc]; Obj **items; } S;

int fn_82E46FB8(S *p)
{
  unsigned int i;
  for (i = 0; i < p->count; i++) {
    Obj **items = p->items;
    if (items[i] != 0) {
      items[i]->vt->Release(items[i]);
      items[i] = 0;
    }
  }
  p->count = 0;
  return 0;
}
