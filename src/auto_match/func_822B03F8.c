typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_822CDCF8();
extern int fn_82372C00();
extern int fn_82374520();
extern int fn_8288B760();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1B84;


void fn_822B03F8(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int iStack_60;
  int iStack_5c;
  unsigned char auStack_50 [8];
  float fStack_48;
  unsigned char auStack_40 [8];
  float fStack_38;
  
  uVar11 = *(unsigned int *)(param_1 + 0x10);
  iVar6 = fn_82372C00(uVar11);
  uVar8 = *(unsigned int *)(iVar6 + 0x28);
  piVar1 = *(int **)(param_1 + 0xc);
  iVar6 = fn_82372C00(uVar11);
  if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x10) != *(int *)(iVar6 + 0x2c)) {
    return;
  }
  iVar6 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),(unsigned __int64)uVar8);
  iVar7 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),1 - (unsigned __int64)uVar8);
  bVar10 = false;
  bVar4 = false;
  if (*(int *)(iVar7 + 0x340) == 0) goto LAB_822b052c;
  fn_822CDCF8(iVar7,auStack_50,auStack_40);
  fn_82374520(&iStack_60,*(unsigned int *)(param_1 + 0x10));
  bVar4 = bVar10;
  if (iStack_60 != 0) {
    puVar2 = (unsigned int *)(iStack_60 + 0x30U & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    fVar5 = lbl_831D1B84;
    bVar10 = fStack_38 <= ltcg_pool_0_0f;
    puVar2 = (unsigned int *)(iStack_60 + 0x20U & 0xfffffff0);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    if (bVar10) {
      if (fStack_48 - fVar5 <= fStack_38) goto LAB_822b0518;
    }
    else if (fStack_38 < fVar5 + fStack_48) {
LAB_822b0518:
      bVar4 = true;
    }
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
LAB_822b052c:
  if (*(int *)(iVar6 + 0x168) == 0) {
    uVar8 = *(unsigned int *)(iVar6 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 != 0) {
    uVar9 = 3;
    if (!bVar4) {
      uVar9 = 1;
    }
    fn_822AF138(*(unsigned int *)(iVar6 + 0x110),uVar9);
  }
  if (*(int *)(iVar7 + 0x168) == 0) {
    uVar8 = *(unsigned int *)(iVar7 + 0x16c);
  }
  else {
    uVar8 = fn_8288B760();
    uVar8 = uVar8 & 0xff;
  }
  if (uVar8 != 0) {
    uVar9 = 1;
    if (!bVar4) {
      uVar9 = 3;
    }
    fn_822AF138(*(unsigned int *)(iVar7 + 0x110),uVar9);
  }
  return;
}

