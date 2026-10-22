extern void fn_82DF85B8(void *out, int *p, int q);
extern void fn_82DF87A0(int a, int b, int c, void *d);
extern int fn_82CE5410(void);
extern void fn_82CEA4B8(void *out, int v);
extern void fn_82BA02A8(void *p);

void fn_82DF8550(int param_1, int param_2, int *param_3, int param_4)
{
  int uVar1;
  int iVar2;
  int a;
  int b;

  uVar1 = *(int *)(*param_3 + 8);
  fn_82DF85B8(&a, param_3, param_4);
  fn_82DF87A0(param_1, param_2, uVar1, &a);
  iVar2 = fn_82CE5410();
  fn_82CEA4B8(&b, *(int *)(iVar2 + 0x10));
  fn_82BA02A8(&b);
}
