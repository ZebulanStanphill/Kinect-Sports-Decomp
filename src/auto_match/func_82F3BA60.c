extern int fn_82E4FE40();
extern int fn_82E50BE8();


unsigned __int64 fn_82F3BA60(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    if (((*(unsigned int *)(param_1 + 0x4c) & 1) != 0) &&
       ((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) < (param_2 & 0xffffffff))) {
      if (*(int *)(param_1 + 0x70) != 0) {
        fn_82E4FE40();
      }
      *(unsigned int *)(param_1 + 0x70) = 0;
      *(unsigned int *)(param_1 + 0x6c) = 0;
      iVar2 = fn_82E50BE8(param_2 * 6,0,0,0,0);
      *(int *)(param_1 + 0x70) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff8007000e;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)param_2;
    uVar1 = 0;
  }
  return uVar1;
}

