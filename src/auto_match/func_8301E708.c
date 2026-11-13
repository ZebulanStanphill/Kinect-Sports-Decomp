extern int fn_82FE89F8();


unsigned __int64 fn_8301E708(int param_1,unsigned int *param_2,int param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  if ((int)param_4 == *(int *)(param_1 + 0x14)) {
    if ((int)param_4 != 0) {
      param_3 = param_3 - (int)param_2;
      do {
        uVar3 = 0;
        if (*(char *)*param_2 != '\0') {
          lVar2 = fn_82FE89F8();
          uVar3 = -(unsigned int)(lVar2 != 0) & (unsigned int)lVar2;
        }
        *(unsigned int *)(param_3 + (int)param_2) = uVar3;
        param_4 = param_4 + -1;
        param_2 = param_2 + 1;
      } while (param_4 != 0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

