extern void fn_82232CC8(void *);
extern void fn_82233250(void *);
extern void fn_82240DB8(void *, int);
extern char lbl_82198278[];
extern char lbl_821983D0[];
extern char lbl_821983E0[];

typedef struct {
  void *vtbl;
  int pad;
  int a;
  int b;
  int n;
  char rest[0x44];
} Sub;

typedef struct {
  void *vtbl;
  char pad0[0xe0];
  char m[6][0x128];
  Sub s1;
  Sub s2;
} Outer;

Outer *fn_822589B8(Outer *param_1)
{
  Sub *s;

  fn_82232CC8(param_1);
  param_1->vtbl = lbl_821983E0;
  fn_82233250(param_1->m[0]);
  fn_82233250(param_1->m[1]);
  fn_82233250(param_1->m[2]);
  fn_82233250(param_1->m[3]);
  fn_82233250(param_1->m[4]);
  fn_82233250(param_1->m[5]);
  s = &param_1->s1;
  fn_82240DB8(s, 1);
  s->a = 7;
  s->n = 4;
  s->b = 0;
  param_1->s1.vtbl = lbl_821983D0;
  s = &param_1->s2;
  fn_82240DB8(s, 1);
  s->a = 7;
  s->n = 4;
  s->b = 0;
  param_1->s2.vtbl = lbl_82198278;
  return param_1;
}
