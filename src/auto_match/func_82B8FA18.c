extern int fn_8265C9E0();


unsigned __int64 fn_82B8FA18(int param_1,int param_2)

{
  __int64 lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) != *(int *)(param_2 + 8)) && (*(int *)(param_1 + 8) != 4)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 8);
  }
  if ((*(int *)(param_1 + 0x54) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
    lVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) << 4;
    if (0xfffffff < *(unsigned int *)(param_1 + 0x68)) {
      lVar1 = -1;
    }
    iVar2 = fn_8265C9E0(lVar1);
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 == 0) {
      return 0xffffffff8007000e;
    }
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    *(unsigned int *)(param_2 + 0x14) = 1;
    *(unsigned int *)(param_1 + 0x14) = 1;
  }
  return 0;
}

