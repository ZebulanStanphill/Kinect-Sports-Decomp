extern void fn_82901EE0(void);
extern void fn_82631400(void *, void *);
extern int fn_82636C98(unsigned int, unsigned int, int, int, int, int, int, void *, int *);

typedef struct Obj_82903E30 Obj_82903E30;
typedef struct Vt_82903E30 { void *f[3]; unsigned int *(*getData)(Obj_82903E30 *); } Vt_82903E30;
struct Obj_82903E30 { Vt_82903E30 *vt; };
typedef struct Buf_82903E30 { int a, b; unsigned int c; int d; } Buf_82903E30;

int fn_82903E30(Obj_82903E30 *o)
{
  int ret = 0;
  unsigned int *p;
  Buf_82903E30 buf;
  unsigned int base;
  unsigned int size, c;
  p = o->vt->getData(o);
  if ((*p & 1) == 0) {
    fn_82631400(p, &buf);
    c = buf.c;
    base = 0;
    size = 0;
    if (p[6] != 0) {
      p = (unsigned int *)(p[6] + (int)p);
      if (p != 0) {
        base = p[0];
        size = p[1];
      }
    }
    fn_82636C98(base + c, size, 0, 0, 0, 0, 4, (void *)fn_82901EE0, &ret);
  }
  return ret;
}
