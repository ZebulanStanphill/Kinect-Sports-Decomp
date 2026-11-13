#define true 1


unsigned int * fn_8270AED0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  puVar1 = (unsigned int *)*param_1;
  if (puVar1 == (unsigned int *)0x0) {
    *param_1 = param_2;
  }
  else {
    uVar4 = (unsigned __int64)(unsigned int)param_2[4];
    uVar5 = uVar4;
    param_1 = puVar1;
    if ((unsigned int)puVar1[4] == uVar4) {
      return puVar1;
    }
    while( true ) {
      uVar2 = uVar5 >> 0x1f;
      uVar5 = (uVar5 & 0x7fffffff) << 1;
      iVar3 = (int)uVar2 + 1;
      puVar1 = (unsigned int *)param_1[iVar3];
      if (puVar1 == (unsigned int *)0x0) break;
      param_1 = puVar1;
      if ((unsigned int)puVar1[4] == uVar4) {
        return puVar1;
      }
    }
    param_1[iVar3] = param_2;
  }
  *param_2 = param_1;
  return (unsigned int *)0x0;
}

