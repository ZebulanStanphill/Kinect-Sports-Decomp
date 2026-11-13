extern unsigned int *auStack_30;
extern int fn_82E4FE40();
extern int fn_82EE1048();
extern int fn_82EE10E0();


unsigned __int64 fn_82EE1848(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int auStack_30 [12];
  
  param_2 = param_2 & 0xffff;
  if (param_2 < *(unsigned int *)(param_1 + 0x254)) {
    uVar2 = fn_82EE1048(param_1 + 0x48,param_2,auStack_30);
    uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & (unsigned __int64)auStack_30[0];
    if (uVar2 == 0) {
      uVar1 = 0xffffffffc00d36bb;
    }
    else {
      iVar3 = (int)uVar2;
      if (*(int *)(iVar3 + 0xc) != 0) {
        fn_82E4FE40();
      }
      *(unsigned int *)(iVar3 + 0xc) = 0;
      if (*(int *)(iVar3 + 0x14) != 0) {
        fn_82E4FE40();
      }
      *(unsigned int *)(iVar3 + 0x14) = 0;
      if ((*(unsigned int *)(param_1 + 0x254) < param_2 + 1) ||
         (iVar3 = fn_82EE10E0(param_1 + 0x48,param_2), iVar3 < 0)) {
        uVar1 = 0xffffffff80004005;
      }
      else {
        *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + -1;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

