struct Sub_824466E8;
typedef struct { void *f0; void *f4; void *f8; void *fc; void (*op)(struct Sub_824466E8 *, void *, int *); } Vt_824466E8;
typedef struct Sub_824466E8 { Vt_824466E8 *vt; char data[0x1c]; } Sub_824466E8;
typedef struct { void *vt; int z; Sub_824466E8 s; } Loc_824466E8;
typedef struct { char pad[8]; int f8; unsigned fc; } Arg_824466E8;
extern char lbl_821B9B78[];
extern void fn_828ABF58(Sub_824466E8 *s, int a, int b, int c);
extern void fn_8223C478(void *os, int a, int b);
extern void fn_828E9DB8(void *os, unsigned v, int n);

void fn_824466E8(void *unused, void *os, Arg_824466E8 *a)
{
  Loc_824466E8 L;
  int t;
  L.z = 0;
  L.vt = lbl_821B9B78;
  fn_828ABF58(&L.s, 0, 0, 4);
  t = a->f8;
  L.s.vt->op(&L.s, os, &t);
  if (a->f8 == 0) {
    unsigned v = a->fc;
    fn_8223C478(os, 0x20, 0);
    fn_828E9DB8(os, v, 0x20);
  }
}
