extern void fn_827B50C8(void *, unsigned int, void *);

typedef struct A_827B5240 {
  unsigned int f0;
  unsigned int f4;
  unsigned int f8;
  unsigned int fc;
  unsigned int f10;
  unsigned int f14;
  unsigned int f18;
} A_827B5240;
typedef struct B_827B5240 {
  unsigned int f0;
  unsigned int f4;
  unsigned int f8;
} B_827B5240;
typedef struct Obj_827B5240 {
  int pad0[2];
  int f8;
  unsigned int fc;
  unsigned int f10;
  unsigned int f14;
  int pad1[2];
  unsigned int *pagesB;
  int pad2[0xb];
  unsigned int *pagesA;
} Obj_827B5240;

void fn_827B5240(Obj_827B5240 *o, unsigned int a, unsigned int b)
{
  A_827B5240 *n;
  B_827B5240 *e;
  unsigned int j;
  n = (A_827B5240 *)(o->pagesA[a >> 8] + (a & 0xff) * 0x1c);
  while (n->f8 >= o->fc && n->fc >= o->f10) {
    j = b;
    for (;;) {
      if (j >= o->f14) {
        return;
      }
      e = (B_827B5240 *)(o->pagesB[j >> 8] + (j & 0xff) * 0xc);
      if ((e->f8 & 0x80000000) == 0 && e->f0 <= n->f8 && e->f4 <= n->fc) {
        break;
      }
      j++;
    }
    fn_827B50C8(o, a, e);
    e->f8 |= 0x80000000;
    o->f8++;
    fn_827B5240(o, n->f14, j);
    b = j;
    a = n->f18;
    n = (A_827B5240 *)(o->pagesA[a >> 8] + (a & 0xff) * 0x1c);
  }
}
