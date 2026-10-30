typedef struct Pr_82366238 { int a; void *ref; } Pr_82366238;
extern int fn_822315A0(void *);
extern int fn_824011D8();
extern int fn_82402CF8();
extern int *fn_82522588();

void fn_82366238(int param_1, int param_2)
{
  int iVar1;
  int *p;
  Pr_82366238 t1;
  Pr_82366238 t2;

  p = fn_82522588(&t1);
  fn_824011D8(*p, *(int *)(param_1 + 4) + 0x820);
  if (t1.ref != 0) {
    fn_822315A0(t1.ref);
  }
  p = fn_82522588(&t2, param_2);
  iVar1 = *p;
  fn_82402CF8(iVar1, 0, 0);
  *(int *)(iVar1 + 0x28c) = 0;
  *(int *)(iVar1 + 0x288) = 0;
  *(int *)(iVar1 + 0x290) = 0;
  *(int *)(iVar1 + 0x294) = 0;
  *(int *)(iVar1 + 0x298) = 0;
  *(int *)(iVar1 + 0x29c) = 0;
  *(int *)(iVar1 + 0x2a0) = 0;
  *(int *)(iVar1 + 0x2a4) = 0;
  if (t2.ref != 0) {
    fn_822315A0(t2.ref);
  }
}
