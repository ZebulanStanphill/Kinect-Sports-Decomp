#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_8236A928();
extern int fn_8236BA88();


void fn_822B15C0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  int iVar10;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar9 = ZEXT48(piVar1);
  iVar10 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  uVar5 = 0;
  piVar1 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10)) >> 3
                     & 4) + **(int **)(iVar2 + 8));
  uVar3 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
  uVar8 = (unsigned __int64)uVar3;
  uVar7 = (unsigned __int64)*(unsigned int *)(uVar3 + 8);
  if (uVar7 != 0) {
    do {
      iVar4 = fn_822ABA88(uVar8);
      if (*(int *)(*(int *)(iVar4 + 0x110) + 0x1c) == 0x14) {
        uVar6 = 1;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  piVar1 = (int *)uVar9;
  uVar5 = 0;
  uVar7 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar7 != 0) {
    uVar8 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar4 = fn_822ABA88(uVar8);
      if (((int)uVar6 != 0) && (*(int *)(*(int *)(iVar4 + 0x110) + 0x1c) == 8)) {
        iVar10 = iVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    if (iVar10 != 0) {
      fn_8236A928(iVar2,iVar10,6);
      return;
    }
  }
  fn_8236BA88(uVar9);
  return;
}

