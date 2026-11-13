typedef unsigned char bool;
#define false 0
extern int fn_82250A18();
extern int fn_8225FE40();
extern int fn_822ABA88();
extern int fn_82397F30();
extern unsigned int lbl_832975B0;
extern unsigned int uRam831c996c;


void fn_82399730(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  int *piVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  bool bVar13;
  
  piVar6 = (int *)**(unsigned int **)(param_1 + 8);
  piVar9 = (int *)*piVar6;
  iVar4 = *piVar9;
  iVar2 = *(int *)(piVar9[4] * 4 + iVar4);
  uVar7 = (unsigned __int64)*(unsigned int *)(iVar2 + 8);
  iVar2 = fn_822ABA88(iVar2,0);
  iVar2 = *(int *)(iVar2 + 0x24);
  if ((uVar7 & 0xffffffff) < 2) {
    bVar13 = false;
  }
  else {
    iVar3 = fn_822ABA88(*(unsigned int *)(piVar9[4] * 4 + iVar4),1);
    bVar13 = *(int *)(iVar3 + 0x24) != 0;
  }
  uVar8 = (unsigned __int64)*(unsigned int *)(piVar9[4] * 4 + iVar4);
  iVar4 = fn_822ABA88(uVar8,0);
  uVar1 = *(unsigned int *)(iVar4 + 0x214);
  if ((uVar7 & 0xffffffff) < 2) {
    uVar11 = 0;
  }
  else {
    iVar4 = fn_822ABA88(uVar8,1);
    uVar11 = *(unsigned int *)(iVar4 + 0x214);
  }
  piVar6 = (int *)piVar6[1];
  iVar4 = *piVar6;
  iVar3 = *(int *)(piVar6[4] * 4 + iVar4);
  uVar7 = (unsigned __int64)*(unsigned int *)(iVar3 + 8);
  fn_822ABA88(iVar3,0);
  if (1 < (uVar7 & 0xffffffff)) {
    fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + iVar4),1);
  }
  uVar8 = (unsigned __int64)*(unsigned int *)(piVar6[4] * 4 + iVar4);
  fn_822ABA88(uVar8,0);
  if (1 < (uVar7 & 0xffffffff)) {
    fn_822ABA88(uVar8,1);
  }
  uVar10 = 0xffffffffU - ((int)*(unsigned int *)(param_1 + 0x844) >> 0x1f) & *(unsigned int *)(param_1 + 0x844);
  if (2 < (int)uVar10) {
    uVar10 = 3;
  }
  if ((*(int *)(param_1 + 0xa0) == 0) ||
     (uVar12 = 1, *(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    uVar12 = 0;
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    uVar7 = (unsigned __int64)*(unsigned char *)(iVar4 + 4);
    iVar4 = fn_82397F30(param_1);
    if (iVar4 == 0) {
      if ((uVar7 & 0xff) == 0) {
        uVar5 = 0xffffffff821b4b9c;
      }
      else {
        uVar5 = 0xffffffff821b4b8c;
      }
    }
    else if ((uVar7 & 0xff) == 0) {
      uVar5 = 0xffffffff821b4b7c;
    }
    else {
      uVar5 = 0xffffffff821b4b6c;
    }
  }
  else if (*(int *)(param_1 + 0x178) == 1) {
    uVar5 = 0xffffffff821b4bac;
  }
  else {
    uVar5 = 0xffffffff821b4bb4;
  }
  fn_8225FE40(uRam831c996c,uVar5,uVar12,uVar10,iVar2 != 0,uVar1,bVar13,uVar11);
  *(unsigned int *)(param_1 + 0x2a4) = 1;
  return;
}

