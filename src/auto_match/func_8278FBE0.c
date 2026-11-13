extern int fn_8267B890();
extern int fn_8267BDA8();
extern int memmove();


int fn_8278FBE0(unsigned int *param_1,int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = param_1[1];
  uVar2 = uVar3 + param_4;
  if (param_1[2] < uVar2) {
    if (*param_1 == 0) {
      uVar1 = fn_8267B890(*(unsigned int *)(param_2 + 0x1c),(uVar2 & 0x7fffffff) << 1,0);
    }
    else {
      uVar1 = fn_8267BDA8(*param_1,(uVar2 & 0x7fffffff) << 1);
    }
    uVar3 = param_1[1];
    *param_1 = uVar1;
    param_1[2] = param_1[1] + param_4;
  }
  if (uVar3 - param_3 != 0) {
    memmove((param_3 + param_4 & 0x7fffffff) * 2 + (unsigned __int64)*param_1,
                 (param_3 & 0x7fffffff) * 2 + (unsigned __int64)*param_1,
                 (uVar3 - param_3 & 0x7fffffff) << 1);
  }
  param_1[1] = (int)param_4 + param_1[1];
  return (param_3 & 0x7fffffff) * 2 + *param_1;
}

