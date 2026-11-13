typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225F160();
extern int fn_822AA770();
extern int fn_82372F88();
extern int fn_82374078();
extern int fn_823807F0();
extern int fn_824BD858();
extern int fn_824C97F0();
extern int fn_8288B760();


void fn_8238BC18(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  bool bVar9;
  int *piVar10;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar4 = fn_82372F88(iVar1);
  iVar5 = fn_822AA770(*(unsigned int *)(**(int **)(iVar1 + 8) + iVar4 * 4));
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else if (*(int *)(iVar5 + 0x168) == 0) {
    uVar6 = *(unsigned int *)(iVar5 + 0x16c);
  }
  else {
    uVar6 = fn_8288B760();
    uVar6 = uVar6 & 0xff;
  }
  iVar5 = fn_822AA770(*(unsigned int *)(**(int **)(iVar1 + 8) + iVar4 * 4));
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x168) == 0) {
      uVar7 = *(unsigned int *)(iVar5 + 0x16c);
    }
    else {
      uVar7 = fn_8288B760();
      uVar7 = uVar7 & 0xff;
    }
    bVar9 = true;
    if (uVar7 != 0) goto LAB_8238bcbc;
  }
  bVar9 = false;
LAB_8238bcbc:
  if ((*(int *)(iVar1 + 0xa0) == 0) || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)) {
    uVar8 = 9;
    if (!bVar9) {
      uVar8 = 10;
    }
    fn_823807F0(*(unsigned int *)(iVar1 + 0x664),uVar8);
  }
  if (uVar6 != 0) {
    fn_824BD858((double)*(float *)(iVar1 + 0x7d4),(double)*(float *)(iVar1 + 0x7d8));
  }
  puVar2 = *(unsigned int **)(*(int *)(param_1 + 8) + 0xa8);
  piVar3 = (int *)puVar2[1];
  for (piVar10 = (int *)*puVar2; piVar10 != piVar3; piVar10 = piVar10 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),0xffffffff821b45e4);
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x100) = 1;
  uVar6 = (unsigned int)((unsigned __int64)LZCOUNT(iVar4) >> 3) & 4;
  piVar10 = *(int **)(**(int **)(iVar1 + 8) + uVar6);
  if ((((int)*(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x20) == 0) &&
      (piVar10 = *(int **)(*(int *)(iVar1 + 0x20) + uVar6),
      (piVar10[1] - *piVar10 & 0xfffffffcU) == 0)) &&
     (iVar5 = fn_8225F160(), 1 < *(int *)(iVar5 + 0x14))) {
    fn_82374078(iVar1,iVar4,0x36);
  }
  return;
}

