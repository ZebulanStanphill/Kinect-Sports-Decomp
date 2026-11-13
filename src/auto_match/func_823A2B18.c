typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822AA770();
extern int fn_823985A8();
extern int fn_82399BA0();
extern int fn_8239C118();
extern int fn_8239CE98();
extern int fn_8239D2B0();
extern int fn_8239FF60();
extern int fn_8288B760();


void fn_823A2B18(int param_1)

{
  bool bVar1;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  __int64 lVar2;
  __int64 lVar3;
  bool bVar7;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return;
  }
  iVar5 = *(int *)(param_1 + 8);
  *(unsigned int *)(param_1 + 0xc) = 1;
  if (*(int *)(iVar5 + 0x178) == 0) {
    iVar4 = (**(int (***)())(**(int **)(iVar5 + 0x2e0) + 0x34))();
    iVar5 = fn_822AA770(*(unsigned int *)(**(int **)(iVar5 + 8) + iVar4 * 4));
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x168) == 0) {
        uVar6 = *(unsigned int *)(iVar5 + 0x16c);
      }
      else {
        uVar6 = fn_8288B760();
        uVar6 = uVar6 & 0xff;
      }
      if (uVar6 != 0) goto LAB_823a2ba8;
    }
    bVar1 = false;
  }
  else {
LAB_823a2ba8:
    bVar1 = true;
  }
  lVar2 = fn_82399BA0(*(unsigned int *)(param_1 + 8));
  lVar3 = fn_8239CE98(*(unsigned int *)(param_1 + 8));
  bVar7 = lVar3 == 0;
  if (!bVar1) {
    bVar7 = lVar2 == 0 && bVar7;
  }
  if (bVar7) {
    fn_8239D2B0();
  }
  else {
    fn_823985A8(*(unsigned int *)(param_1 + 8));
  }
  if ((int)lVar2 == 0) {
    if ((unsigned char)(!bVar1 + 0x15U) < 0x1d) {
      fn_8239FF60(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2dc));
    }
    uVar6 = (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x38))();
    if (2 < uVar6) {
      fn_8239C118(*(unsigned int *)(param_1 + 8),!bVar1 + '\n');
    }
  }
  return;
}

