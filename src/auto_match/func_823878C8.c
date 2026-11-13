typedef unsigned char bool;
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_822627F8();
extern int fn_822AA7E0();
extern int fn_822ABA88();
extern unsigned int lbl_832975B0;


void fn_823878C8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  bool bVar12;
  bool bVar13;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar11 = 1;
  *(unsigned int *)(param_1 + 8) = 1;
  piVar1 = *(int **)**(int **)(iVar5 + 8);
  piVar6 = (int *)((int *)**(int **)(iVar5 + 8))[1];
  uVar7 = (unsigned __int64)*(unsigned int *)(piVar1[4] * 4 + *piVar1);
  iVar3 = fn_822ABA88(uVar7,0);
  bVar12 = *(int *)(iVar3 + 0x24) != 0;
  if (*(unsigned int *)((int)uVar7 + 8) < 2) {
code_r0x82387944:
    iVar9 = 0;
  }
  else {
    iVar3 = fn_822ABA88(uVar7,1);
    iVar9 = 1;
    if (*(int *)(iVar3 + 0x24) == 0) goto code_r0x82387944;
  }
  uVar7 = (unsigned __int64)*(unsigned int *)(piVar6[4] * 4 + *piVar6);
  iVar3 = fn_822ABA88(uVar7,0);
  bVar13 = *(int *)(iVar3 + 0x24) != 0;
  if (1 < *(unsigned int *)((int)uVar7 + 8)) {
    iVar3 = fn_822ABA88(uVar7,1);
    iVar10 = 1;
    if (*(int *)(iVar3 + 0x24) != 0) goto code_r0x8238799c;
  }
  iVar10 = 0;
code_r0x8238799c:
  if ((bVar12) || (uVar8 = 0, iVar9 != 0)) {
    uVar8 = 1;
  }
  *(unsigned int *)(iVar5 + 0x5ec) = uVar8;
  if ((bVar13) || (uVar8 = 0, iVar10 != 0)) {
    uVar8 = 1;
  }
  *(unsigned int *)(iVar5 + 0x5f0) = uVar8;
  iVar3 = fn_8225F160();
  uVar8 = *(unsigned int *)(iVar3 + 0x14);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    uVar11 = 0;
  }
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x204);
  if (iVar2 == 1) {
    uVar4 = 0xffffffff821b424c;
  }
  else if (iVar2 == 2) {
    uVar4 = 0xffffffff821b4258;
  }
  else {
    uVar7 = fn_822AA7E0(*(unsigned int *)**(unsigned int **)(*(int *)(param_1 + 4) + 8));
    if (*(char *)(iVar3 + 4) == '\0') {
      if (uVar7 < 2) {
        uVar4 = 0xffffffff821b42a8;
      }
      else {
        uVar4 = 0xffffffff821b4290;
      }
    }
    else if (uVar7 < 2) {
      uVar4 = 0xffffffff821b4278;
    }
    else {
      uVar4 = 0xffffffff821b4264;
    }
  }
  fn_822627F8(*(unsigned int *)(iVar5 + 0x5e0),uVar4,uVar11,uVar8,bVar12,iVar9,bVar13,iVar10);
  return;
}

