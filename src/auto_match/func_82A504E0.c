typedef int (*code)();
extern int fn_82A500A0();
extern int fn_82A50350();

int fn_82A504E0(int param_1, int param_2, int param_3, int param_4)
{
  int iVar2;
  int uVar1;

  (*(code *)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 8))(*(int *)(param_1 + 0x30) + 0x2c);
  iVar2 = fn_82A50350(param_1, param_2);
  uVar1 = fn_82A500A0(*(int *)(iVar2 + 8), param_3, param_4);
  (*(code *)(*(int *)(*(int *)(param_1 + 0x30) + 0x2c) + 0x14))(*(int *)(param_1 + 0x30) + 0x2c);
  return uVar1;
}
