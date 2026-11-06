typedef struct Obj_8243C490 Obj_8243C490;
typedef struct Buf16_8243C490 { int a[4]; } Buf16_8243C490;
typedef struct VT_8243C490 {
  void *s[16];
  void (*f40)(Obj_8243C490 *, Buf16_8243C490 *);
} VT_8243C490;
struct Obj_8243C490 { VT_8243C490 *vt; };

typedef struct Writer_8243C490 {
  int h[4];
  Buf16_8243C490 *buf;
  int n;
  void *p;
  int q;
  int r;
} Writer_8243C490;

extern void fn_8223C478(Writer_8243C490 *, int, int);
extern void fn_82248CC8(Obj_8243C490 *, Buf16_8243C490 *);
extern void fn_8265CA20(void *);
extern void fn_828E9D28(Writer_8243C490 *, Buf16_8243C490 *, int);
extern void fn_828E9DB8(Writer_8243C490 *, int, int);
extern void fn_828E9F18(Writer_8243C490 *, long long, int);

void fn_8243C490(Obj_8243C490 *param_1, long long *param_2)
{
  long long v;
  Buf16_8243C490 a;
  Writer_8243C490 b;

  param_1->vt->f40(param_1, &a);
  b.p = 0;
  b.q = 0;
  b.r = 0;
  b.buf = &a;
  b.n = 4;
  fn_828E9D28(&b, &a, 4);
  fn_8223C478(&b, 1, 0);
  fn_828E9DB8(&b, 1, 1);
  v = *param_2;
  fn_8223C478(&b, 0x1e, 0);
  fn_828E9F18(&b, v, 0x1e);
  fn_82248CC8(param_1, &a);
  if (b.p != 0) {
    fn_8265CA20(b.p);
  }
}
