extern int fn_82691CD8();
extern int fn_82691F88();
extern int fn_82692008();
extern int fn_82692200();
extern unsigned int lbl_82005F20;


void fn_82692370(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if ((param_3 - 1 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 0x10)) {
    fn_82692200();
    return;
  }
  if ((param_2 & 0xffffffff) < 0x10) {
    param_2 = 0x10;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 1;
  if ((param_3 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    param_3 = uVar2;
  }
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    param_2 = param_3;
  }
  uVar2 = (param_2 + param_3) - 1 & ~(param_3 - 1);
  if ((*(char *)(param_1 + 500) == '\0') ||
     ((unsigned __int64)(unsigned int)(8 << (*(unsigned int *)(param_1 + 0xc) & 0x3f)) < (uVar2 & 0xffffffff))) {
LAB_82692508:
    if ((uVar2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x204)) {
      fn_82691F88();
    }
    else {
      fn_82691CD8(param_1,uVar2,param_3);
    }
  }
  else {
    uVar4 = (int)uVar2 - 1;
    iVar3 = *(int *)(&lbl_82005F20 + (uVar4 >> (*(unsigned int *)(param_1 + 0xc) & 0x3f)) * 4);
    piVar1 = *(int **)((iVar3 + 0x37) * 8 + param_1);
    if ((piVar1 == (int *)(iVar3 * 8 + param_1 + 0x1b4)) &&
       (piVar1 = (int *)fn_82692008(param_1,iVar3), piVar1 == (int *)0x0)) {
      iVar3 = *(int *)(&lbl_82005F20 + (uVar4 >> (*(unsigned int *)(param_1 + 0xc) & 0x3f)) * 4);
      piVar1 = *(int **)((iVar3 + 0x37) * 8 + param_1);
      if ((piVar1 == (int *)(iVar3 * 8 + param_1 + 0x1b4)) &&
         (piVar1 = (int *)fn_82692008(param_1,iVar3), piVar1 == (int *)0x0)) goto LAB_82692508;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(piVar1[2] + 0x10) = *(int *)(piVar1[2] + 0x10) + 1;
      iVar3 = *(int *)(param_1 + 0x210) - (iVar3 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f));
    }
    else {
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(piVar1[2] + 0x10) = *(int *)(piVar1[2] + 0x10) + 1;
      iVar3 = *(int *)(param_1 + 0x210) - (iVar3 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f));
    }
    *(int *)(param_1 + 0x210) = iVar3;
  }
  return;
}

