extern int fn_82F68CC0();


unsigned int * fn_82537D18(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  *param_1 = (int)param_3;
  if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
    uVar1 = *(unsigned int *)(param_2 + 4);
    if ((unsigned int)param_4 != uVar1) {
      do {
        fn_82F68CC0(param_3,param_4,0xc4);
        param_4 = param_4 + 0xc4;
        param_3 = param_3 + 0xc4;
      } while ((param_4 & 0xffffffff) != (unsigned __int64)uVar1);
    }
    if ((param_3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 4)) {
      uVar2 = param_3;
      do {
        uVar2 = uVar2 + 0xc4;
      } while ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 4));
    }
    *(int *)(param_2 + 4) = (int)param_3;
  }
  return param_1;
}

