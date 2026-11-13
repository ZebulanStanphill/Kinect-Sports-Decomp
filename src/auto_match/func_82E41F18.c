extern int fn_82E4FE40();
extern int fn_82E50BE8();


int fn_82E41F18(int param_1,unsigned int param_2)

{
  int lVar1;
  unsigned int iVar2;
  
  if (*(unsigned int *)(param_1 + 0x5a4) < param_2) {
    if (*(unsigned int *)(param_1 + 0x5a0) != 0) {
      fn_82E4FE40(*(unsigned int *)(param_1 + 0x5a0));
    }
    *(unsigned int *)(param_1 + 0x5a0) = 0;
    lVar1 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < param_2) {
      lVar1 = -1;
    }
    iVar2 = fn_82E50BE8(lVar1,0,0,0,0);
    *(int *)(param_1 + 0x5a0) = iVar2;
    if (iVar2 == 0) {
      *(unsigned int *)(param_1 + 0x5a4) = 0;
      return 0x8007000e;
    }
    *(int *)(param_1 + 0x5a4) = param_2;
  }
  return 0;
}

