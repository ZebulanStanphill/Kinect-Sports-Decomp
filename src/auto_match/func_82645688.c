typedef struct {
  char pad0[0x30];
  int *cur;
  char pad1[4];
  int *limit;
  char pad2[0x2a9c - 0x3c];
  void *f2a9c;
  char pad3[0x2b04 - 0x2aa0];
  volatile int f2b04;
} Obj_82645688;
extern int *fn_82645110(Obj_82645688 *);
extern void fn_826452A8(Obj_82645688 *, void *, int, int);

void fn_82645688(Obj_82645688 *o)
{
  int *p = o->cur;
  if (p > o->limit) p = fn_82645110(o);
  *++p = 0x5c8;
  *++p = 0x20000;
  o->cur = p;
  if (o->f2a9c != 0) fn_826452A8(o, o->f2a9c, 4, 0);
  while (o->f2b04 != 0) {
  }
}
