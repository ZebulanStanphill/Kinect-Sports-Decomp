extern int fn_82644040();
extern int fn_8264D6C0();


void fn_82643B08(unsigned int *param_1)

{
  unsigned __int64 uVar1;
  int *piVar3;
  __int64 lVar2;
  unsigned int uVar4;
  
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] =
         ((param_1[3] >> 0x14) + 0x200 & 0x1000) + (param_1[3] & 0x1fffffff) + -0x40000000;
  }
  uVar1 = fn_82644040(param_1[5],param_1[2] >> 2,0x80);
  if (uVar1 == 0) {
    uVar4 = *(unsigned int *)(param_1[5] + 0x4230);
    *param_1 = 0;
  }
  else {
    piVar3 = (int *)uVar1;
    *piVar3 = ((int)((uVar1 + 4 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) +
              ((unsigned int)(uVar1 + 4) & 0x1fffffff) + -0x40000000;
    if ((int *)param_1[3] == (int *)0x0) {
      *param_1 = (unsigned int)piVar3;
    }
    else {
      *(int *)param_1[3] =
           ((int)((uVar1 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)piVar3 & 0x1fffffff) +
           -0x40000000;
    }
    lVar2 = (((uVar1 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (uVar1 & 0x1fffffff) + -0x40000000;
    fn_8264D6C0(lVar2,(unsigned __int64)param_1[2] + lVar2,0);
    uVar4 = (unsigned int)uVar1;
  }
  param_1[1] = uVar4;
  param_1[3] = uVar4 + 4;
  param_1[4] = (param_1[2] - 4 & 0xfffffffc) + uVar4;
  return;
}

