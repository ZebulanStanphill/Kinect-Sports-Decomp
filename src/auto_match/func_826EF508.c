extern unsigned int *auStack_30;
extern int fn_826BCFF8();
extern int fn_826BD398();


void fn_826EF508(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned char uVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  unsigned int auStack_30;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x14), piVar1 != (int *)0x0)) {
    iVar2 = (**(int (***)())(*piVar1 + 8))();
    if (param_2 == '\0') {
      if ((*(unsigned char *)(param_1 + 0x15) & 1) == 0) {
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x18);
    }
    uVar6 = *(unsigned int *)(param_1 + 0x18);
    if (iVar2 != 0) {
      iVar3 = fn_826BCFF8(iVar2);
      uVar6 = uVar6 - iVar3;
      if (uVar6 < param_1 + 0x30U) {
        uVar6 = 0;
      }
      else {
        auStack_30 = 0;
        fn_826BD398(uVar6,&auStack_30,iVar2);
      }
    }
    *(unsigned int *)(param_1 + 0x18) = uVar6;
    return;
  }
  if (param_2 == '\0') {
    if ((*(unsigned char *)(param_1 + 0x15) & 1) == 0) {
      return;
    }
    uVar4 = 0x2b;
  }
  else {
    uVar4 = 0x2d;
  }
  puVar5 = (unsigned char *)(*(int *)(param_1 + 0x18) + -1);
  *(unsigned char **)(param_1 + 0x18) = puVar5;
  *puVar5 = uVar4;
  return;
}

