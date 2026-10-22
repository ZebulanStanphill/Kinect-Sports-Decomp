extern void fn_82529320(void *, int);
extern void fn_8255B400(int, void *);

typedef struct {
  char pad0[0x40];
  void *a;
  void *b;
  void *c;
  void *d;
  char pad50[0xc];
  int *mgr;
  int pad60;
  void *e;
} Obj;

void fn_8240A638(Obj *p)
{
  if (p->a != 0) {
    fn_82529320(p->a, 0);
    p->a = 0;
  }
  if (p->b != 0) {
    fn_82529320(p->b, 0);
    p->b = 0;
  }
  if (p->c != 0) {
    fn_82529320(p->c, 0);
    p->c = 0;
  }
  if (p->d != 0) {
    fn_82529320(p->d, 0);
    p->d = 0;
  }
  if (p->e != 0) {
    fn_8255B400(*(int *)((char *)p->mgr + 0x844), p->e);
    p->e = 0;
  }
}
