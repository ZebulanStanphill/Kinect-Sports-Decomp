typedef struct Obj_8233D788 Obj_8233D788;
typedef struct Buf16_8233D788 { int a[4]; } Buf16_8233D788;
typedef struct VT_8233D788 {
  void *s[16];
  void (*f40)(Obj_8233D788 *, Buf16_8233D788 *);
} VT_8233D788;
struct Obj_8233D788 { VT_8233D788 *vt; };

typedef struct Writer_8233D788 {
  int h[4];
  Buf16_8233D788 *buf;
  int n;
  void *p;
  int q;
  int r;
} Writer_8233D788;

extern void fn_8223C478(Writer_8233D788 *, int, int);
extern void fn_8224EA58(Obj_8233D788 *, Buf16_8233D788 *);
extern void fn_8265CA20(void *);
extern void fn_828E9D28(Writer_8233D788 *, Buf16_8233D788 *, int);
extern void fn_828E9DB8(Writer_8233D788 *, unsigned int, int);

void fn_8233D788(Obj_8233D788 *param_1, float x, float y, float z, float w)
{
  Buf16_8233D788 a;
  Writer_8233D788 b;

  param_1->vt->f40(param_1, &a);
  b.p = 0;
  b.q = 0;
  b.r = 0;
  b.buf = &a;
  b.n = 0x10;
  fn_828E9D28(&b, &a, 0x10);
  fn_8223C478(&b, 0x20, 0);
  fn_828E9DB8(&b, *(unsigned int *)&x, 0x20);
  fn_8223C478(&b, 0x20, 0);
  fn_828E9DB8(&b, *(unsigned int *)&y, 0x20);
  fn_8223C478(&b, 0x20, 0);
  fn_828E9DB8(&b, *(unsigned int *)&z, 0x20);
  fn_8223C478(&b, 0x20, 0);
  fn_828E9DB8(&b, *(unsigned int *)&w, 0x20);
  fn_8224EA58(param_1, &a);
  if (b.p != 0) {
    fn_8265CA20(b.p);
  }
}
