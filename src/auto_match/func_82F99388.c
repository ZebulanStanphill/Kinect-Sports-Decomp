extern unsigned int lbl_8216C69C;
typedef struct { unsigned int v[5]; } Body;
typedef struct { unsigned int vt; Body b; } Obj;
typedef struct { void *(**vt)(void *, int); } Alloc;
Obj * fn_82F99388(Obj *p, Alloc *a)
{
  Obj *o = (Obj *)(*a->vt[1])(a, 0x18);
  if (o != 0) {
    o->vt = (unsigned int)&lbl_8216C69C;
    o->b = p->b;
    return o;
  }
  return 0;
}
