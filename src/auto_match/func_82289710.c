extern int fn_82267F50(unsigned, void *, int, int);
extern int fn_82268330();
extern int fn_822886B0();
extern int fn_8228A540();
extern int fn_8228AF60();
extern unsigned fn_8265C9E0(int);
extern int fn_8265CA20();


extern char lbl_82196582[];
void fn_82289710(int *p)
{
  unsigned obj;
  unsigned mem;
  int r;

  obj = ((unsigned *)p)[0x185];
  if (obj != 0) {
    fn_82268330(obj);
    fn_8265CA20(obj);
  }
  mem = fn_8265C9E0(0x700);
  if (mem != 0)
    r = fn_82267F50(mem, p + 0x10c, p[0], p[0x1a6]);
  else
    r = 0;
  ((int *)p)[0x185] = r;
  p[499] = 0;
  fn_822886B0(p);
  fn_8228A540(p, "ticker_teamsetupmember_live");
  fn_8228AF60(p, lbl_82196582);
}
