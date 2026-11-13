unsigned int fn_83066FC8(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int lVar2;
  
  if ((*param_1 != 0) && (0 < (int)param_2)) {
    if (param_3 == -1) {
      param_3 = param_1[4];
    }
    uVar1 = (param_3 + param_1[1]) - 1 & ~(param_3 - 1);
    lVar2 = uVar1 + param_2;
    if ((lVar2 - 1U & 0xffffffff) <= param_1[2]) {
      param_1[1] = (int)lVar2;
      return uVar1;
    }
  }
  return 0;
}

