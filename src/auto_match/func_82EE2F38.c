extern int memmove();


int fn_82EE2F38(unsigned int *param_1,unsigned int param_2,int param_3)

{
  int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = param_2 + param_3;
  if ((uVar2 > param_1[1]) ||
     (uVar2 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar3 = (param_1[1] - param_2) - param_3;
    if (uVar3 != 0) {
      memmove((param_2 & 0x3fffffff) * 4 + *param_1,
                   (uVar2 & 0x3fffffff) * 4 + *param_1,(uVar3 & 0x3fffffff) << 2);
    }
    uVar1 = 1;
    param_1[1] = param_1[1] - (int)param_3;
  }
  return uVar1;
}

