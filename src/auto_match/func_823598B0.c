extern int fn_8249ABC0();
extern int fn_8249D980();
extern int fn_824BF8A8();

void fn_823598B0(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  struct { int first; int second; } stack_pair_30;

  if (*(int *)(param_1 + 0xac) != param_2) {
    iVar2 = *(int *)(fn_8249ABC0() + 0x110);
    if (*(int *)(param_1 + 0xb4) != -1) {
      iVar2 = fn_8249D980(iVar2, *(int *)(param_1 + 0xb4));
      *(int *)(param_1 + 0xb4) = -1;
    }
    if (param_2 == 0) {
      iVar1 = *(int *)(iVar2 + 0x20);
      stack_pair_30.first = 0;
      *(int *)(iVar2 + 0x20) = iVar1 + 1;
      stack_pair_30.second = iVar1;
      fn_824BF8A8(iVar2, &stack_pair_30.first);
      *(int *)(param_1 + 0xb4) = iVar1;
    }
    *(int *)(param_1 + 0xac) = param_2;
  }
}
