struct E_826C9718;
typedef struct EVT_826C9718 {
  int pad0;
  void (*f4)(struct E_826C9718 *, void *);
  int pad8, padc;
  unsigned char (*f10)(struct E_826C9718 *);
} EVT_826C9718;
typedef struct E_826C9718 { EVT_826C9718 *vt; } E_826C9718;
typedef struct Pair_826C9718 { E_826C9718 **first; unsigned int second; } Pair_826C9718;
struct X_826C9718;
typedef struct XVT_826C9718 {
  char pad[0x28];
  unsigned int (*f28)(struct X_826C9718 *);
  void (*f2c)(Pair_826C9718 *, struct X_826C9718 *, unsigned int);
} XVT_826C9718;
typedef struct X_826C9718 { XVT_826C9718 *vt; } X_826C9718;
typedef struct Z_826C9718 { char pad[0x10]; unsigned int count; char pad14[4]; char flag; } Z_826C9718;
typedef struct B_826C9718 { char pad[0xc]; int *p; } B_826C9718;
typedef struct Y_826C9718 { char pad[0xa7c]; unsigned int f7c; } Y_826C9718;
typedef struct A_826C9718 {
  char pad0[0xc];
  char sub[0x80 - 0xc];
  B_826C9718 *b;
  char pad84[0x9c - 0x84];
  X_826C9718 *x;
  Y_826C9718 *y;
  char pada4[0x1ac - 0xa4];
  Z_826C9718 *z;
} A_826C9718;
extern unsigned int fn_826F5D70(char *, unsigned int *);
extern void fn_82704760(Y_826C9718 *, unsigned int);
extern B_826C9718 *fn_8269F500(A_826C9718 *);
extern void fn_826C8D00(char *, const char *, int, unsigned int);

void fn_826C9718(A_826C9718 *a, unsigned int idx)
{
  unsigned int n;
  if ((int)idx != -1) {
    Z_826C9718 *z = a->z;
    if (z == 0 || z->flag != 0) {
      n = a->x->vt->f28(a->x);
    } else {
      n = z->count;
    }
    if (idx < n) {
      unsigned int h;
      unsigned int saved;
      Pair_826C9718 pr;
      unsigned int i;
      h = fn_826F5D70((char *)a->y + 0xa2c, &saved);
      a->x->vt->f2c(&pr, a->x, idx);
      for (i = 0; i < pr.second; i++) {
        E_826C9718 *e = pr.first[i];
        if (e->vt->f10(e) != 0) {
          e->vt->f4(e, a);
        }
      }
      a->y->f7c = saved;
      fn_82704760(a->y, h);
      return;
    }
  }
  {
    int b = (int)a->b;
    if (b == 0) b = (int)fn_8269F500(a);
    fn_826C8D00(a->sub, "Error: %s, CallFrame('%d') - unknown frame\n", *((B_826C9718 *)b)->p, idx);
  }
}
