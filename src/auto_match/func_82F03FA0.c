extern void fn_82EDAED0(void *p);
extern void fn_82F01808();
extern void fn_82F02A98(void *p, int v);
extern void fn_82F02E20(void *p, int a, int b, int c, int d, int e, int f);
extern void fn_82F03248();

typedef struct P {
  char pad0[0x10];
  int f10;
  char pad14[0x6a4 - 0x14];
  int f6a4;
  char pad6a8[0x4a94 - 0x6a8];
  int a;
  int b;
  int c;
} P;

void fn_82F03FA0(P *p)
{
  int t;
  int saved;
  int a, b, c;

  t = p->f10;
  saved = p->f6a4;
  p->f10 = 0;
  a = p->a;
  b = p->b;
  p->f6a4 = t;
  c = p->c;
  fn_82F02A98(p, 0);
  fn_82F03248();
  fn_82F01808();
  fn_82F02E20(p, a, b, c, p->a, p->b, p->c);
  fn_82EDAED0(p);
  p->f10 = p->f6a4;
  p->f6a4 = saved;
  fn_82F02A98(p, p->f10);
  fn_82F03248();
  fn_82F01808();
}
