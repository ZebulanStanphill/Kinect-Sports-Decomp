extern unsigned int lbl_8217E1C8;
typedef struct { unsigned int v[6]; } Body;
typedef struct { unsigned int vt; Body b; } Obj;
typedef struct { void *(**vt)(void *, int); } Alloc;
Obj * fn_83056F88(Obj *p, Alloc *a)
{
  Obj *o = (Obj *)(*a->vt[1])(a, 0x1c);
  if (o != 0) {
    o->vt = (unsigned int)&lbl_8217E1C8;
    o->b = p->b;
    return o;
  }
  return 0;
}
