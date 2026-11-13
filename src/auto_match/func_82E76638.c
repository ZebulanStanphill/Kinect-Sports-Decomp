extern int fn_82E4FE08();
extern int fn_82F68CC0();


unsigned __int64 fn_82E76638(int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if ((param_2 & 0xffff) < (unsigned int)*(unsigned short *)(param_1 + 1)) {
    if ((param_3 == (unsigned int *)0x0) || (param_4 == (unsigned int *)0x0)) {
      uVar1 = 0xffffffff80004003;
    }
    else {
      iVar3 = (param_2 & 0xffff) * 0x1a;
      *param_4 = 0;
      *param_3 = 0;
      if (*(int *)(iVar3 + *param_1 + 0x16) != 0) {
        uVar2 = fn_82E4FE08();
        *param_3 = (int)uVar2;
        if ((uVar2 & 0xffffffff) == 0) {
          return 0xffffffff8007000e;
        }
        fn_82F68CC0(uVar2,*(unsigned int *)(iVar3 + *param_1 + 0x12),
                     *(unsigned int *)(iVar3 + *param_1 + 0x16));
        *param_4 = *(unsigned int *)(iVar3 + *param_1 + 0x16);
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

