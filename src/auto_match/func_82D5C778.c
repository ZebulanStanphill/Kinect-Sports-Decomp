extern int fn_82D70F30(void *);
extern int fn_82DD77B0(void *, int, unsigned __int64);
typedef struct Sub_82D5C778 { int a; int b; unsigned int c; } Sub_82D5C778;
typedef struct Ob_82D5C778 { char pad0[8]; int f8; char pad1[0x24]; Sub_82D5C778 sub; float f3c; char pad2[0x44]; char c84; char pad3; short s86; } Ob_82D5C778;

void fn_82D5C778(Ob_82D5C778 *p,unsigned __int64 param_2)
{
  Sub_82D5C778 *s = &p->sub;
  fn_82DD77B0(s, p->f8, param_2);
  p->c84 = 0;
  if (s != 0) {
    s->a = 0;
    s->b = 0;
    s->c = 0x80000000;
  }
  fn_82D70F30(s);
  p->s86 = 0x19;
  p->f3c = 0.0f;
}
