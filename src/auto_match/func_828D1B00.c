extern void fn_8223C478(void *bs, int a, int b);
extern void fn_828E9DB8(void *bs, int v, int n);
extern void fn_828EA2D8(void *bs, void *p, int n);
extern void fn_8224BF30(void *bs, const char *s, int n);
typedef struct { union { char buf[16]; char *ptr; } u; unsigned size; unsigned res; } Str_828D1B00;
typedef struct { char pad0[0x84]; int f84; unsigned f88; unsigned f8c; unsigned f90; char pad1[4]; char f98[8]; int fa0; int fa4; Str_828D1B00 str; int fc0; unsigned char fc4; unsigned char fc5; unsigned char fc6; } Obj_828D1B00;

static const char *CStr(Str_828D1B00 *s) { return s->res >= 16 ? s->u.ptr : s->u.buf; }
void fn_828D1B00(Obj_828D1B00 *o, void *bs)
{
  int v = o->f84;
  unsigned char b;
  fn_8223C478(bs, 0x10, 0);
  fn_828E9DB8(bs, v, 0x10);
  fn_8223C478(bs, 0x40, 0);
  fn_828EA2D8(bs, o->f98, 8);
  b = 1 < o->f88;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    v = o->f88 - 1;
    fn_8223C478(bs, 2, 0);
    fn_828E9DB8(bs, v, 2);
  }
  b = o->f8c != o->f88;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    v = o->f8c - 1;
    fn_8223C478(bs, 2, 0);
    fn_828E9DB8(bs, v, 2);
  }
  b = o->f90 != 0;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    v = o->f90;
    fn_8223C478(bs, 4, 0);
    fn_828E9DB8(bs, v, 4);
  }
  { int v2 = o->fa0;
  fn_8223C478(bs, 8, 0);
  fn_828E9DB8(bs, v2, 8); }
  v = o->fa4;
  fn_8223C478(bs, 8, 0);
  fn_828E9DB8(bs, v, 8);
  b = o->fc4 != 0;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    v = o->fc4;
    fn_8223C478(bs, 8, 0);
    fn_828E9DB8(bs, v, 8);
  }
  b = o->fc5 != 0;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    v = o->fc5;
    fn_8223C478(bs, 8, 0);
    fn_828E9DB8(bs, v, 8);
  }
  b = o->str.size != 0;
  fn_8223C478(bs, 1, 0);
  fn_828E9DB8(bs, b != 0, 1);
  if (b != 0) {
    fn_8224BF30(bs, CStr(&o->str), 0);
  }
  {
    unsigned char c = o->fc6;
    fn_8223C478(bs, 1, 0);
    fn_828E9DB8(bs, c != 0, 1);
  }
}
