typedef struct Obj_8243C320 Obj_8243C320;
typedef struct Buf16_8243C320 { int a[4]; } Buf16_8243C320;
typedef struct VT_8243C320 {
  void *s[16];
  void (*f40)(Obj_8243C320 *, Buf16_8243C320 *);
} VT_8243C320;
struct Obj_8243C320 { VT_8243C320 *vt; };

typedef struct Reader_8243C320 {
  int h[4];
  Buf16_8243C320 *buf;
  int n;
  void *p;
  int q;
  int r;
} Reader_8243C320;

extern void fn_828E9D28(Reader_8243C320 *, Buf16_8243C320 *, int);
extern unsigned int fn_8223C610(Reader_8243C320 *r, unsigned int bits, int a, int b);
extern void fn_8265CA20(void *);

void fn_8243C320(Obj_8243C320 *param_1, unsigned int *out)
{
  Buf16_8243C320 a;
  Reader_8243C320 b;
  int i;

  param_1->vt->f40(param_1, &a);
  b.p = 0;
  b.q = 0;
  b.r = 0;
  b.buf = &a;
  b.n = 4;
  fn_828E9D28(&b, &a, 4);
  for (i = 0; i < 8; i++) {
    out[i] = fn_8223C610(&b, 4, 0, 0);
  }
  if (b.p != 0) {
    fn_8265CA20(b.p);
  }
}
