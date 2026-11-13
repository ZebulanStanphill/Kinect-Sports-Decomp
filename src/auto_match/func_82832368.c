extern unsigned int *auStack_20;
extern int fn_8233EB88();
extern int fn_82360E28();


void fn_82832368(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_20 [8];
  
  uVar1 = (int)(param_1[1] - *param_1) >> 2;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_8233EB88(auStack_20,param_1,(param_2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_82360E28(param_1,param_2 - (__int64)(int)uVar1);
    uVar4 = param_2 - (__int64)((int)(param_1[1] - *param_1) >> 2);
    if (uVar4 != 0) {
      puVar3 = (unsigned int *)(param_1[1] - 4);
      uVar2 = uVar4 & 0xffffffff;
      while (uVar2 != 0) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
        uVar4 = uVar4 - 1;
        uVar2 = uVar4;
      }
    }
    param_1[1] = (int)((param_2 - (__int64)((int)(param_1[1] - *param_1) >> 2) & 0xffffffff) << 2)
                 + param_1[1];
  }
  return;
}

