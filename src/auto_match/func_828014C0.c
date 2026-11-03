extern void fn_828029E8(void *);
extern void fn_82802A58(void *, unsigned);
extern void fn_82802A50(void *, float);
extern void fn_82802A30(void *, void *);
extern void fn_82802A68(void *, int);
extern void fn_82802A38(void *, int);
extern void fn_82802A20(void *, int);
extern void fn_82802A40(void *, int);
extern void fn_82802A28(void *, int);
extern void fn_82802A48(void *, int);
extern void fn_82802A70(void *, int, int, int);
extern void fn_82802488(void *, int, unsigned, int);
extern int fn_827F9E08(void *);
extern char lbl_83156C10[];

void fn_828014C0(char *obj, float x, int a, int b, unsigned c, int d, int e, int f, int g, int h)
{
  char buf[36];
  int r;
  fn_828029E8(buf);
  fn_82802A58(buf, f);
  fn_82802A50(buf, x);
  fn_82802A30(buf, lbl_83156C10);
  fn_82802A68(buf, h);
  fn_82802A38(buf, e);
  fn_82802A20(buf, 1);
  fn_82802A40(buf, 0xc);
  fn_82802A28(buf, *(int *)(obj + 0x9c));
  r = fn_827F9E08(obj);
  switch (r) {
  case 0:
    fn_82802A48(buf, 0);
    break;
  case 1:
    fn_82802A48(buf, 1);
    break;
  }
  fn_82802A70(buf, a, b, d);
  if (c != 0)
    fn_82802488(buf, a, c, 1);
}
