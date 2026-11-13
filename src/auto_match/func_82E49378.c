extern int fn_82A1DDC0();


__int64 fn_82E49378(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  lVar3 = 0;
  if (((param_2 & 0xffffffff) == 0) || (param_4 == (unsigned int *)0x0)) {
    lVar3 = -0x7fffbffd;
  }
  else {
    uVar1 = param_1[2];
    if (((unsigned __int64)(unsigned int)param_1[4] < (unsigned __int64)uVar1) || ((unsigned int)param_1[3] < (unsigned int)param_1[4])) {
      param_1[4] = uVar1;
    }
    if (((unsigned __int64)(unsigned int)param_1[1] + (unsigned __int64)uVar1 & 0xffffffff) <
        ((unsigned int)param_1[4] + param_3 & 0xffffffff)) {
      param_3 = (unsigned __int64)(unsigned int)param_1[1];
    }
    *param_4 = 0;
    uVar2 = ((unsigned __int64)(unsigned int)param_1[4] - (unsigned __int64)(unsigned int)param_1[2]) + param_3;
    if (((uVar2 & 0xffffffff) <=
         ((unsigned __int64)(unsigned int)param_1[3] - (unsigned __int64)(unsigned int)param_1[2] & 0xffffffff)) ||
       (lVar3 = (**(int (***)())(*param_1 + 0x14))(param_1,uVar2 & 0xffffffff), -1 < lVar3)) {
      fn_82A1DDC0(param_1[4],param_2,param_3);
      param_1[4] = param_1[4] + (int)param_3;
    }
  }
  return lVar3;
}

