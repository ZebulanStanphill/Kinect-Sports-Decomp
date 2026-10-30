typedef struct Req_82784648 { struct Obj_82784648 *o; int zero; int f8; int a, b, c; } Req_82784648;
typedef struct Obj_82784648 {
  char pad0[8];
  int f8;
  char pad1[0xc];
  unsigned int cnt;
  char deq1[8];
  char **map;
  unsigned int cur;
  int minv, maxv;
} Obj_82784648;
extern void fn_827845D8(void *d, Req_82784648 *r);

void fn_82784648(Obj_82784648 *p, int a, int b, int c)
{
  Req_82784648 r;
  unsigned int i;

  r.o = p;
  r.zero = 0;
  r.f8 = p->f8;
  r.a = a;
  r.b = b;
  r.c = c;
  fn_827845D8(&p->cnt, &r);
  i = p->cnt - 1;
  p->cur = *(unsigned int *)((char *)p->map + ((i >> 4) & 0xffffffc)) + (i & 0x3f) * 0x18;
  if (a >= 0) {
    if (a < p->minv) p->minv = a;
    if (a > p->maxv) p->maxv = a;
  }
  if (b >= 0) {
    if (b < p->minv) p->minv = b;
    if (b > p->maxv) p->maxv = b;
  }
}
