extern void fn_8251CF80(void *, int, void *);
extern void fn_8251FA58(unsigned int);
extern void fn_82520158(const char *, void *, int);
extern void fn_82544F40(void);
extern unsigned char lbl_83276741;
extern unsigned int lbl_832810F0;

void fn_82489570(void)
{
  struct { char buf[16]; struct {int a; int b; int c;} v; } L;

  if (lbl_832810F0 != 0) {
    fn_82544F40();
    fn_8251FA58(lbl_832810F0);
    lbl_832810F0 = 0;
  }
  if (lbl_83276741 == 0) {
    lbl_83276741 = 1;
  }
  fn_82520158("first_scene", L.buf, 0);
  L.v.a = 0;
  L.v.b = 0;
  L.v.c = 0;
  fn_8251CF80(L.buf, 0, &L.v);
}
