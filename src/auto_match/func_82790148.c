extern int fn_8267B890();
extern int fn_8267BDA8();
extern int memcpy();


void fn_82790148(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  if ((unsigned __int64)(unsigned int)param_1[8] < (param_3 + (unsigned int)param_1[9] & 0xffffffff)) {
    uVar3 = (unsigned int)param_1[8] + param_3;
    param_1[8] = (int)uVar3;
    lVar2 = (uVar3 & 0x7fffffff) << 1;
    if (param_1[7] == 0) {
      uVar1 = fn_8267B890(*param_1,lVar2,0);
    }
    else {
      uVar1 = fn_8267BDA8(param_1[7],lVar2);
    }
    param_1[7] = uVar1;
  }
  memcpy((unsigned __int64)(unsigned int)param_1[7] + ((unsigned __int64)(unsigned int)param_1[9] & 0x7fffffff) * 2,param_2,
               (param_3 & 0x7fffffff) << 1);
  param_1[9] = (int)param_3 + param_1[9];
  return;
}

