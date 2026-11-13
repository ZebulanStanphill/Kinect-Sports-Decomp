void fn_8304D5A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned short param_4,int *param_5
                  ,unsigned short *param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar1 = (unsigned __int64)param_4;
  *param_6 = param_4;
  if ((((uVar1 != 0) && (uVar1 < 2)) || ((param_1 & 0xffffffff) <= (param_3 & 0xffffffff))) ||
     ((param_3 & 0xffffffff) <= (param_2 & 0xffffffff))) {
    *param_5 = (int)param_1;
    return;
  }
  param_3 = param_3 - param_2;
  uVar3 = param_1 - param_2;
  trapWord(6,param_3,0);
  uVar2 = (uVar3 & 0xffffffff) / (param_3 & 0xffffffff);
  if (uVar2 < uVar1) {
    if (uVar1 != 0) {
      param_4 = param_4 - (short)uVar2;
      goto LAB_8304d61c;
    }
  }
  else if (uVar1 != 0) {
    *param_5 = (int)param_1 - (param_4 - 1) * (int)param_3;
    *param_6 = 1;
    return;
  }
  param_4 = 0;
LAB_8304d61c:
  *param_6 = param_4;
  trapWord(6,param_3,0);
  *param_5 = ((int)uVar3 - (int)((uVar3 & 0xffffffff) / (param_3 & 0xffffffff)) * (int)param_3) +
             (int)param_2;
  return;
}

