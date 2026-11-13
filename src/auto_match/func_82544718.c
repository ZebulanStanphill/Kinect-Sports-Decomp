extern int lbl_8326AF58[];
extern void fn_82A93C18(int, int, int, int, int, int, int, int, int, int, int, int);
extern void fn_82A93F70(int, int);
int fn_82544718(int p1, int p2, int p3, int p4, int p5, int p6)
{
  fn_82A93C18(p2, p3, 1, 0, p4, 0, 0, -1, 0, p1, p6, 0);
  fn_82A93F70(p1, lbl_8326AF58[0xf0] + p5);
  return p1;
}
