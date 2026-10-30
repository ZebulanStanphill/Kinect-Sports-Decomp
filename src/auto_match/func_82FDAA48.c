extern unsigned int lbl_8216E624;
typedef struct { unsigned int v[5]; } Body;
typedef struct { unsigned int vt; Body b; } Obj;
typedef struct { void *(**vt)(void *, int); } Alloc;
Obj * fn_82FDAA48(Obj *p, Alloc *a)
{
  Obj *o = (Obj *)(*a->vt[1])(a, 0x18);
  if (o != 0) {
    o->vt = (unsigned int)&lbl_8216E624;
    o->b = p->b;
    return o;
  }
  return 0;
}
