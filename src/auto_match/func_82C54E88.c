extern int fn_82A29A38();
extern int malloc();
extern int fn_82F691F0();


unsigned __int64 fn_82C54E88(int *param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if (param_1[2] == param_1[1]) {
    lVar2 = ((unsigned __int64)(param_1[1] + 4) & 0x1fffffff) << 3;
    uVar1 = malloc(lVar2);
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,lVar2);
    }
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if ((unsigned int)param_1[1] <= (unsigned int)param_1[2]) {
      fn_82A29A38();
    }
    *(unsigned int *)(param_1[2] * 4 + *param_1) = param_2;
    uVar1 = (unsigned __int64)(unsigned int)param_1[2];
    param_1[2] = param_1[2] + 1;
  }
  return uVar1;
}

