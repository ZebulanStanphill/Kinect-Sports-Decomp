extern unsigned int *auStack_2c;
extern int fn_828D1000();
extern int fn_828D10C8();
extern int fn_828D1290();
extern unsigned int uStack_30;


void fn_828D13D0(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned char uStack_30;
  unsigned char auStack_2c [1];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0xc4;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_828D10C8(auStack_2c,param_1,param_2 * 0xc4 + (unsigned __int64)*param_1);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    fn_828D1290(param_1,param_2 - (__int64)(int)uVar1);
    fn_828D1000(param_1[1],param_2 - (__int64)((int)(param_1[1] - *param_1) / 0xc4),0,param_1 + 3
                  ,0,uStack_30);
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0xc4) * 0xc4 + param_1[1];
  }
  return;
}

