extern void fn_824D4BF0(void);
extern void fn_82230110(void *, const char *);
extern void fn_82230300(void *, int, int);
typedef struct { char d[0xc]; char flag; } Sub;
extern void fn_82897DF8(Sub *, void *, void *);
typedef struct { char pad[0xa6c]; Sub a; char pad2[0x4b]; Sub b; } O;
void fn_824DED18(O *p)
{
  char s1[32];
  char s2[40];
  Sub *x;
  fn_824D4BF0();
  fn_82230110(s1, "Blocking High");
  x = &p->a;
  x->flag = 0;
  fn_82897DF8(x, p, s1);
  fn_82230300(s1, 1, 0);
  fn_82230110(s2, "Blocking Low");
  x = &p->b;
  x->flag = 0;
  fn_82897DF8(x, p, s2);
  fn_82230300(s2, 1, 0);
}
