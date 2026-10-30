typedef struct SP { void *p; int *rep; } SP;
typedef struct Sub { void *vt; int n; int a; int b; int c; int d; SP sp; int g; } Sub;
typedef struct Blk { void *vt; int uses; int weaks; Sub obj; } Blk;
extern SP *fn_82365BD8(SP *dst, SP *src);
extern void fn_822315A0(int *rep);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821ADF5C;

Blk *fn_822E7EB0(Blk *blk, int a, int b, int c, int d, SP *arg, int g)
{
  Sub *s;
  blk->uses = 1;
  blk->vt = &lbl_821AD588;
  blk->weaks = 1;
  s = &blk->obj;
  if (s != 0) {
    SP t1;
    SP t2;
    SP *r1 = fn_82365BD8(&t1, arg);
    SP *r2 = fn_82365BD8(&t2, r1);
    s->a = a;
    s->b = b;
    s->n = 1;
    s->vt = &lbl_821ADF3C;
    s->c = c;
    s->d = d;
    fn_82365BD8(&s->sp, r2);
    s->g = g;
    if (r2->rep != 0) fn_822315A0(r2->rep);
    s->vt = &lbl_821ADF5C;
    if (r1->rep != 0) fn_822315A0(r1->rep);
  }
  return blk;
}
