typedef int (*code)();

extern void fn_82816C38(void);
extern void fn_82816C98(void);
extern void fn_82816CE8(void);
extern int fn_82815220(void *a, void *b, int c, void *d, int e);
extern int fn_82816600(int a, int b, void *c, int d, int e);

void fn_82816D58(int param_1, int param_2)
{
  unsigned char auStack_20[8];

  fn_82815220((void *)fn_82816C38, (void *)fn_82816C98, 0, (void *)fn_82816CE8, 0);
  fn_82816600(param_1, 0, auStack_20, param_2, 0x800);
}
