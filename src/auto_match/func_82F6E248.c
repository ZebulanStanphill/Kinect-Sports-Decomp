extern int fn_82F63BA0();
extern int fn_82F68240();
extern int malloc();


unsigned int fn_82F6E248(unsigned int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  
  if ((param_2 - 1 & param_2) == 0) {
    if (param_2 < 5) {
      param_2 = 4;
    }
    uVar3 = param_2 + 3 + param_1;
    if (uVar3 < param_1) {
      puVar1 = (unsigned int *)fn_82F68240();
      *puVar1 = 0xc;
      return 0;
    }
    iVar2 = malloc(uVar3);
    if (iVar2 != 0) {
      uVar3 = iVar2 + param_2 + 3 & ~(param_2 - 1);
      *(int *)(uVar3 - 4) = iVar2;
      return uVar3;
    }
  }
  else {
    puVar1 = (unsigned int *)fn_82F68240();
    *puVar1 = 0x16;
    fn_82F63BA0();
  }
  return 0;
}

