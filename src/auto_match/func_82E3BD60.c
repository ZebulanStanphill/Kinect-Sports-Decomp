typedef struct { void *vt; int a, b; short c; short d; char e; char f[0x2b]; int g; } Obj;
extern Obj *fn_82E50BE8(int, int, int, int, int);
extern char lbl_82152F14[];

int fn_82E3BD60(void *unused, Obj **out)
{
  Obj *q;
  Obj *p = fn_82E50BE8(0x40, 0, 0, 0, 0);
  if (p != 0) {
    p->a = 0;
    p->vt = lbl_82152F14;
    p->b = 0;
    p->d = 0;
    p->e = 0;
    p->g = 0;
    q = p;
  } else {
    q = 0;
  }
  *out = q;
  return 0 == q ? 0x8007000e : 0;
}
