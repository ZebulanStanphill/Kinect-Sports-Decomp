extern int fn_82875118();
extern int fn_828754A8();
extern int fn_82875500();
extern int fn_82875698();
extern unsigned int uStack_30;


void fn_82875710(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char uStack_30;
  
  uVar2 = param_1[1];
  uVar1 = (int)(uVar2 - *param_1) / 0x70;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    if ((param_2 * 0x70 + (unsigned __int64)*param_1 & 0xffffffff) != (unsigned __int64)uVar2) {
      uVar3 = fn_828754A8((unsigned __int64)uVar2);
      fn_82875118(uVar3,param_1[1],param_1 + 3);
      param_1[1] = (unsigned int)uVar3;
    }
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_82875698(param_1,param_2 - (__int64)(int)uVar1);
    fn_82875500(param_1[1],param_2 - (__int64)((int)(param_1[1] - *param_1) / 0x70),0,param_1 + 3
                  ,0,uStack_30);
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x70) * 0x70 + param_1[1];
  }
  return;
}

