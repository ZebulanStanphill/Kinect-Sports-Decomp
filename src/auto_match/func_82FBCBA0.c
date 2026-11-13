extern void fn_82FC9A08(void *);
extern void fn_82FC9C90(void *, void *);
extern void fn_82FC9F80(void *);
extern void fn_82FCA218(void *, void *);

struct A;
typedef struct AVT { void *f0; void *f4; void (*free)(struct A *, void *); } AVT;
typedef struct A { AVT *vt; } A;
struct P;
typedef struct PVT { void (*f0)(struct P *, int); } PVT;
typedef struct P {
  PVT *vt;
  int p4;
  void *f8;
  void *fc;
  void *f10;
  int p14[4];
  void *f24;
  void *f28;
  void *f2c;
  void *g[12];
  char pad[0x100 - 0x60];
  unsigned count;
} P;

typedef struct { int a; void *b; int c, d; } E16_cba0;
typedef struct { char pad[0x18]; void *b; char pad2[0x3c-0x1c]; } E3C_cba0;
int fn_82FBCBA0(P *p, A *a)
{
  unsigned i;
  int off;
  char *arr;
  void **q;
  int n;
  if (p->f8 != 0) {
    fn_82FC9C90(p->f8, a);
    if (p->f8 != 0) fn_82FC9A08(p->f8);
    a->vt->free(a, p->f8);
    p->f8 = 0;
  } else if (p->fc != 0) {
    fn_82FCA218(p->fc, a);
    if (p->fc != 0) fn_82FC9F80(p->fc);
    a->vt->free(a, p->fc);
    p->fc = 0;
  }
  if (p->f24 != 0) {
    i = 0;
    if (p->count > 0) {
      off = 0;
      do {
        arr = (char *)p->f24;
        if (*(void **)(arr + off + 4) != 0) {
          a->vt->free(a, *(void **)(arr + off + 4));
          *(void **)(arr + off + 4) = 0;
        }
        i++;
        off += 0x10;
      } while (i < p->count);
    }
    a->vt->free(a, p->f24);
    p->f24 = 0;
  }
  if (p->f28 != 0) {
    E16_cba0 *el;
    i = 0;
    if (p->count > 0) {
      do {
        el = (E16_cba0 *)p->f28;
        if (el[i].b != 0) {
          a->vt->free(a, el[i].b);
          el[i].b = 0;
        }
        i++;
      } while (i < p->count);
    }
    a->vt->free(a, p->f28);
    p->f28 = 0;
  }
  if (p->f2c != 0) {
    i = 0;
    if (p->count > 0) {
      off = 0;
      do {
        arr = (char *)p->f2c;
        if (*(void **)(arr + off + 0x18) != 0) {
          a->vt->free(a, *(void **)(arr + off + 0x18));
          *(void **)(arr + off + 0x18) = 0;
        }
        i++;
        off += 0x3c;
      } while (i < p->count);
    }
    a->vt->free(a, p->f2c);
    p->f2c = 0;
  }
  if (p->f10 != 0) {
    a->vt->free(a, p->f10);
    p->f10 = 0;
  }
  q = p->g;
  n = 12;
  do {
    if (*q != 0) {
      a->vt->free(a, *q);
      *q = 0;
    }
    n--;
    q++;
  } while (n != 0);
  p->vt->f0(p, 1);
  a->vt->free(a, p);
  return 1;
}
