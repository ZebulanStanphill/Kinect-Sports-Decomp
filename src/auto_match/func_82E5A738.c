typedef struct { void *vt; int a, b; int c; short d; char e; char pad; char buf[0x50]; int g; } Obj_82E5A738;
extern Obj_82E5A738 *fn_82E50BE8(int, int, int, int, int);
extern void *memset(void *, int, unsigned int);
extern char lbl_82154D80[];

int fn_82E5A738(void *unused, Obj_82E5A738 **out)
{
  Obj_82E5A738 *q;
  Obj_82E5A738 *p = fn_82E50BE8(0x68, 0, 0, 0, 0);
  if (p != 0) {
    p->a = 0;
    p->vt = lbl_82154D80;
    p->b = 0;
    p->d = 0;
    p->e = 0;
    memset(p->buf, 0, sizeof(p->buf));
    p->g = 0;
    q = p;
  } else {
    q = 0;
  }
  *out = q;
  return 0 == q ? 0x8007000e : 0;
}
