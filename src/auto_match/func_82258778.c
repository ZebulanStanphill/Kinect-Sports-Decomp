extern void fn_82232540(void *);
extern void fn_8223B930(void *);
extern void fn_82240DB8(void *, int);
extern void *fn_8265C9E0(int);
extern char lbl_82196BD0[];
extern char lbl_82198334[];
extern char lbl_82198390[];
extern char lbl_821983B0[];

typedef struct {
  void *vtbl;
  int pad;
  int a;
  char *buf;
  int n;
} Sub;

typedef struct {
  void *vtbl;
  char pad0[0x998];
  char m99c[0x68];
  char ma04[0x68];
  Sub sub;
} Outer;

Outer *fn_82258778(Outer *param_1)
{
  char *buf;
  Sub *s;
  int i;

  fn_82232540(param_1);
  param_1->vtbl = lbl_82196BD0;
  fn_8223B930(param_1->m99c);
  fn_8223B930(param_1->ma04);
  param_1->vtbl = lbl_821983B0;
  s = &param_1->sub;
  fn_82240DB8(s, 1);
  s->vtbl = lbl_82198390;
  param_1->sub.a = 7;
  param_1->sub.n = 5;
  buf = (char *)fn_8265C9E0(5);
  for (i = 0; i < 5; i++) buf[i] = 0;
  param_1->sub.buf = buf;
  s->vtbl = lbl_82198334;
  return param_1;
}
