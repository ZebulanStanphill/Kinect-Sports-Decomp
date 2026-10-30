extern int fn_824427D0();
extern int fn_8265CA20();
typedef struct VT { void (*dtor)(void *, int); } VT;
typedef struct Elem { VT *vt; char pad[0x2c]; } Elem;
typedef struct Del { VT *vt; } Del;
typedef struct Obj { char pad[0x6c]; Elem *first; Elem *last; Elem *cap; int p78; Del *del; } Obj;

void fn_82454448(Obj **param_1)
{
  Obj *o = *param_1;
  if (o != 0) {
    Del *d = o->del;
    if (d != 0) d->vt->dtor(d, 1);
    if (o->first != 0) {
      Elem *p = o->first;
      Elem *e = o->last;
      for (; p != e; p++) p->vt->dtor(p, 0);
      fn_8265CA20(o->first);
    }
    o->first = 0;
    o->last = 0;
    o->cap = 0;
    fn_824427D0(o);
    fn_8265CA20(o);
  }
}
