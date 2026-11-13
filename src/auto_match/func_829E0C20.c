#define true 1


unsigned int * fn_829E0C20(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  if ((param_2 & 0xffff) == 0) {
    if (param_1[2] + 8U <= (unsigned int)param_1[1]) {
      return (unsigned int *)(*param_1 + param_1[2]);
    }
  }
  else {
    puVar3 = (unsigned int *)*param_1;
    uVar4 = 0;
    while( true ) {
      if (puVar3[1] >> 0x11 == (param_2 & 0xffff)) {
        return puVar3;
      }
      uVar1 = *puVar3 >> 0xe;
      if (uVar1 == 0) break;
      iVar2 = (*puVar3 >> 3 & 0x7fe) + uVar1;
      uVar4 = iVar2 + uVar4;
      if (uVar4 >= (unsigned int)param_1[2]) {
        return (unsigned int *)0x0;
      }
      puVar3 = (unsigned int *)(iVar2 + (int)puVar3);
    }
  }
  return (unsigned int *)0x0;
}

