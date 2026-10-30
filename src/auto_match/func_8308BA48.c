extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308AAA8();
typedef struct TE { unsigned short v; unsigned short x; } TE;
typedef struct Elem { int lo; int hi; unsigned short w8; unsigned short wa; int wc; } Elem;
typedef struct Obj { char pad[0xa0]; Elem *elems; int nbits; char pad2[4]; TE *tbl; } Obj;
typedef struct Pair { unsigned int *a; unsigned int b; } Pair;
typedef struct Arr { Pair *data; int size; int capAndFlags; } Arr;
typedef struct Stk { char *cur; char pad[0xc]; int alloc; } Stk;
typedef struct Alloc { int a; int b; int c; int d; int alloc; } Alloc;

void fn_8308BA48(Obj *o, unsigned int *param_2, Arr *out)
{
  int n = o->nbits;
  unsigned int *buf;
  unsigned int *p;
  unsigned int *end;
  Elem *base;
  Elem *e0;
  Pair pr;
  Stk *s = (Stk *)fn_82CE5410();
  buf = (unsigned int *)s->cur;
  p = buf;
  s->cur = (char *)buf + (((n >> 5) * 4 + 0x9f) & 0xffffff80);
  e0 = o->elems + *param_2;
  fn_8308AAA8(o, n, o->tbl[e0->w8].v, e0, *param_2 & 0xffff, buf);
  base = o->elems;
  pr.a = param_2;
  end = buf + (o->nbits >> 5) + 1;
  for (; p < end; p++) {
    unsigned int bits = *p;
    Elem *e = base;
    while (bits != 0) {
      if ((bits & 0xff) == 0) {
        e += 8;
        bits >>= 8;
      } else {
        if ((bits & 1) != 0 && (((e0->hi - e->lo) | (e->hi - e0->lo)) & 0x80008000) == 0 &&
            (e->wc & 1) == 0) {
          Alloc *al;
          pr.b = e->wc;
          al = (Alloc *)fn_82CE5410();
          if (out->size == (out->capAndFlags & 0x3fffffff))
            fn_82CE63B0(al->alloc, out, 8);
          if (out->data + out->size != 0) out->data[out->size] = pr;
          out->size++;
        }
        e++;
        bits >>= 1;
      }
    }
    base += 32;
  }
  ((Stk *)fn_82CE5410())->cur = (char *)buf;
}
