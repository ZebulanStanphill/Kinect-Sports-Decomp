typedef struct Obj_823BAFF8 Obj_823BAFF8;
typedef struct Buf16_823BAFF8 { int a[4]; } Buf16_823BAFF8;
typedef struct VT_823BAFF8 {
  void *s[16];
  void (*f40)(Obj_823BAFF8 *, Buf16_823BAFF8 *);
} VT_823BAFF8;
struct Obj_823BAFF8 { VT_823BAFF8 *vt; };

typedef struct Writer_823BAFF8 {
  int h[4];
  Buf16_823BAFF8 *buf;
  int n;
  void *p;
  int q;
  int r;
} Writer_823BAFF8;

extern void fn_8223C478(Writer_823BAFF8 *, int, int);
extern void fn_82248CC8(Obj_823BAFF8 *, Buf16_823BAFF8 *);
extern void fn_8265CA20(void *);
extern void fn_828E9D28(Writer_823BAFF8 *, Buf16_823BAFF8 *, int);
extern void fn_828E9DB8(Writer_823BAFF8 *, int, int);
extern void fn_828E9F18(Writer_823BAFF8 *, long long, int);

void fn_823BAFF8(Obj_823BAFF8 *param_1)
{
  Buf16_823BAFF8 a;
  Writer_823BAFF8 b;

  param_1->vt->f40(param_1, &a);
  b.p = 0;
  b.q = 0;
  b.r = 0;
  b.buf = &a;
  b.n = 4;
  fn_828E9D28(&b, &a, 4);
  fn_8223C478(&b, 1, 0);
  fn_828E9DB8(&b, 0, 1);
  fn_8223C478(&b, 0x1e, 0);
  fn_828E9F18(&b, 0, 0x1e);
  fn_82248CC8(param_1, &a);
  if (b.p != 0) {
    fn_8265CA20(b.p);
  }
}
