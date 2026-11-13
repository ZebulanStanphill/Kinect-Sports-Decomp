extern int fn_82691CD8();
extern int fn_82691F08();
extern int fn_82692008();


void fn_82692200(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  if ((param_2 & 0xffffffff) < 0x10) {
    param_2 = 0x10;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x10) + param_2 & ~(unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  if ((*(char *)(param_1 + 500) == '\0') ||
     ((unsigned __int64)(unsigned int)(8 << (*(unsigned int *)(param_1 + 0xc) & 0x3f)) < (uVar4 & 0xffffffff))) {
LAB_82692344:
    if ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x204)) {
      fn_82691F08();
    }
    else {
      fn_82691CD8(param_1,uVar4,0x1000);
    }
  }
  else {
    uVar5 = (int)uVar4 - 1;
    uVar1 = uVar5 >> (*(unsigned int *)(param_1 + 0xc) & 0x3f);
    piVar2 = *(int **)((uVar1 + 0x37) * 8 + param_1);
    if ((piVar2 == (int *)(uVar1 * 8 + param_1 + 0x1b4)) &&
       (piVar2 = (int *)fn_82692008(param_1,uVar1), piVar2 == (int *)0x0)) {
      uVar5 = uVar5 >> (*(unsigned int *)(param_1 + 0xc) & 0x3f);
      piVar2 = *(int **)((uVar5 + 0x37) * 8 + param_1);
      if ((piVar2 == (int *)(uVar5 * 8 + param_1 + 0x1b4)) &&
         (piVar2 = (int *)fn_82692008(param_1,uVar5), piVar2 == (int *)0x0)) goto LAB_82692344;
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      *(int *)(piVar2[2] + 0x10) = *(int *)(piVar2[2] + 0x10) + 1;
      iVar3 = *(int *)(param_1 + 0x210) - (uVar5 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f));
    }
    else {
      *(int *)(*piVar2 + 4) = piVar2[1];
      *(int *)piVar2[1] = *piVar2;
      *(int *)(piVar2[2] + 0x10) = *(int *)(piVar2[2] + 0x10) + 1;
      iVar3 = *(int *)(param_1 + 0x210) - (uVar1 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f));
    }
    *(int *)(param_1 + 0x210) = iVar3;
  }
  return;
}

