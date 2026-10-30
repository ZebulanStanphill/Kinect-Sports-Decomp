typedef struct Alloc_82D02798 { struct AVt_82D02798 *vt; } Alloc_82D02798;
struct AVt_82D02798 { void *s0; void *(*alloc)(Alloc_82D02798 *, int); void (*free)(Alloc_82D02798 *, void *, int); };
typedef struct { char pad[0x10]; Alloc_82D02798 *alloc; } Ctx_82D02798;
typedef struct { char a; char p1[3]; int b; char c; } Obj_82D02798;
extern Ctx_82D02798 *fn_82CE5410();
extern Obj_82D02798 *lbl_8323B51C;
void fn_82D02798(void)
{
  Obj_82D02798 *old = lbl_8323B51C;
  Obj_82D02798 *p;
  Alloc_82D02798 *al;
  if (old != 0) {
    al = fn_82CE5410()->alloc;
    al->vt->free(al, old, 0x3c);
  }
  al = fn_82CE5410()->alloc;
  p = (Obj_82D02798 *)al->vt->alloc(al, 0x3c);
  if (p != 0) {
    p->b = 0;
    p->a = 0;
    p->c = 0;
    lbl_8323B51C = p;
  } else {
    lbl_8323B51C = 0;
  }
}
