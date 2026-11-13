extern int fn_82A1DDC0();


unsigned __int64 fn_82E491E0(int param_1,unsigned __int64 param_2,__int64 param_3,int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (int *)0x0)) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 8);
    if ((param_2 & 0xffffffff) == (unsigned __int64)uVar1) {
      uVar2 = 0;
      *param_4 = *(int *)(param_1 + 0xc) - uVar1;
    }
    else {
      if (((unsigned __int64)*(unsigned int *)(param_1 + 0x10) < (unsigned __int64)uVar1) ||
         (*(unsigned int *)(param_1 + 0xc) < *(unsigned int *)(param_1 + 0x10))) {
        *(unsigned int *)(param_1 + 0x10) = uVar1;
      }
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0xc) <
          ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) + param_3 & 0xffffffff)) {
        param_3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
      }
      *param_4 = (int)param_3;
      fn_82A1DDC0(param_2,*(unsigned int *)(param_1 + 0x10),param_3);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (int)param_3;
    }
  }
  return uVar2;
}

