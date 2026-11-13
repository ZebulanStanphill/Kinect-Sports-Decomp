extern int fn_82682298();
extern unsigned int lbl_82007310;
extern unsigned int uStack_30;


void fn_826AAA08(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uStack_30;
  
  uVar1 = param_1[7];
  uVar2 = *param_1;
  param_1[0xd] = param_1[0xd] + 1;
  param_1[7] = uVar1 + 1;
  uVar3 = param_1[9];
  if (param_1[9] <= uVar2) {
    uVar3 = uVar2;
  }
  param_1[9] = uVar3;
  if (((param_1[0xf] != 0) && (param_1[8] < uVar2)) ||
     ((param_1[0x10] != 0 && ((param_1[0x10] <= uVar1 + 1 && (param_1[0xf] < uVar2)))))) {
    uStack_30 = 0;
    fn_82682298(param_1,&uStack_30);
    uVar1 = (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
    if (param_1[0xf] < (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      param_1[9] = uVar2;
      param_1[8] = param_1[0xf];
    }
    uVar3 = uVar2 - (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
    if (uVar2 - (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) < param_1[8]) {
      uVar3 = param_1[8];
    }
    param_1[8] = uVar3;
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(__int64)((double)uVar3 * lbl_82007310))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if (param_1[9] < (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      param_1[8] = (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
    }
    param_1[0xc] = param_1[9];
    param_1[7] = 0;
    param_1[0xb] = uVar1;
    param_1[0xe] = param_1[0xd];
  }
  param_1[10] = uVar2;
  return;
}

