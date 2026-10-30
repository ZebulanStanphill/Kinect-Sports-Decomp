typedef struct Tmp_82758CD0 {
  char pad0[0x1c];
  void *p;
  char pad20[0x35 - 0x20];
  unsigned char flag;
  char pad36[2];
} Tmp_82758CD0;
extern void fn_8267BE38(void *);
extern void fn_8275F338(Tmp_82758CD0 *, char *, char *);
extern void fn_82762930(Tmp_82758CD0 *);

void fn_82758CD0(char *param_1)
{
  Tmp_82758CD0 t;
  fn_82762930(&t);
  t.flag = 1;
  fn_8275F338(&t, param_1 + 0x28, param_1 + 0x34);
  fn_8267BE38(t.p);
}
