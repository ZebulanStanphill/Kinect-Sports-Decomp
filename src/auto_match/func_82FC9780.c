extern unsigned int lbl_8216DFEC;
typedef struct { unsigned int v[10]; } Body;
typedef struct { unsigned int vt; Body b; } Obj;
typedef struct { void *(**vt)(void *, int); } Alloc;
Obj * fn_82FC9780(Obj *p, Alloc *a)
{
  Obj *o = (Obj *)(*a->vt[1])(a, 0x2c);
  if (o != 0) {
    o->vt = (unsigned int)&lbl_8216DFEC;
    o->b = p->b;
    return o;
  }
  return 0;
}
