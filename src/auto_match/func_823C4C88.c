extern int fn_823C4C00();
extern int fn_823C4C00();
extern int fn_82508078();


void fn_823C4C88(int param_1)

{
  int iVar1;

  if ((*(int *)(param_1 + 0x9a4) != 0) && (iVar1 = *(int *)(param_1 + 0x41c), iVar1 != 0)) {
    if ((iVar1 == 1) || ((iVar1 == 0xb || (iVar1 == 0xc)))) {
      if ((*(int *)(*(int *)(param_1 + 0x9a0) + 0x2c) == *(int *)(*(int *)(param_1 + 0x9a4) + 0x2c))
         && (*(int *)(param_1 + 0x4c0) == 0)) {
        fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b605c,0);
      }
      fn_823C4C00(*(unsigned int *)(param_1 + 0x4b8),3);
    }
    else if (iVar1 == 5) {
      fn_823C4C00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x9a0) + 0x2c));
    }
  }
  return;
}
