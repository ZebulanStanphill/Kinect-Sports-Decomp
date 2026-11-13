extern unsigned int *auStack_2c;
extern int fn_828D81E8();
extern int fn_828E2248();
extern int fn_828E2460();
extern unsigned int uStack_30;


void fn_828E24D8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char uStack_30;
  unsigned char auStack_2c [1];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0x1c;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_828D81E8(auStack_2c,param_1,param_2 * 0x1c + (unsigned __int64)*param_1);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_828E2460(param_1,param_2 - (__int64)(int)uVar1);
    fn_828E2248(param_1[1],param_2 - (__int64)((int)(param_1[1] - *param_1) / 0x1c),0,param_1 + 3
                  ,0,uStack_30);
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0x1c) * 0x1c + param_1[1];
  }
  return;
}

