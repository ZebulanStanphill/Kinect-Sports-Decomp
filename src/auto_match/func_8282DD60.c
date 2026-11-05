typedef struct Ent { char pad[0x1c]; int key; int val; } Ent;
typedef struct Obj_8282DD60 { char pad[0x2f4]; char list[0xe8]; unsigned f3dc; } Obj;
extern void fn_828223C8(void *, Ent **);
extern int fn_828252D0(int);
void fn_8282DD60(Obj *o)
{
  Ent *e;
  void *a = o->list;
  Ent *p;
  while (fn_828223C8(a, &e), e != 0) {
    p = e;
    if (o->f3dc != 0) { p->val = fn_828252D0(e->key); }
    else e->val = 0;
    a = e;
  }
}
