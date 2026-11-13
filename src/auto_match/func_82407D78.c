typedef struct { int a; unsigned b; } P_82407D78;
extern void fn_822315A0(unsigned);
extern int fn_824CCD80(int);
extern int *fn_82522588(P_82407D78 *, int *);
extern void fn_825603C8(int, int, int);
extern void fn_825604A0(int);

void fn_82407D78(int param_1, int *param_2)
{
  int iVar1;
  P_82407D78 o;

  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x10) ==
      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x24)) {
    *(int *)(*fn_82522588(&o, param_2) + 0x29c) = 1;
    if (o.b != 0) {
      fn_822315A0(o.b);
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0x22c) != 1) {
      fn_825603C8(fn_824CCD80(*(int *)(iVar1 + 0x10)), iVar1 + 0x20, 1);
      *(int *)(iVar1 + 0x22c) = 1;
    }
  }
  else if (*(int *)(iVar1 + 0x22c) != 0) {
    fn_825604A0(iVar1 + 0x20);
    *(int *)(iVar1 + 0x22c) = 0;
  }
}
