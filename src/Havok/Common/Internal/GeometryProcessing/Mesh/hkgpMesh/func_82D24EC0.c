#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
extern unsigned int *auStack_b0;
extern int fn_82D1ECE8();
extern int fn_82D2D320();
extern int fn_82D2D400();
extern unsigned int iStack00000024;
extern unsigned int lbl_8323B1A0;
extern unsigned int lbl_8323B6BC;
extern unsigned int lbl_8323B6C0;
extern unsigned int lbl_8323B6C4;
extern unsigned int uStack00000020;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_82D24EC0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3,int param_4,char param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int in_r0;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uStack00000020;
  int iStack00000024;
  unsigned char auStack_b0 [48];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  uStack_70 = 0xffffffff;
  uStack_6c = 0xffffffff;
  _uStack00000020 = param_3;
  iVar9 = fn_82D2D320(param_2 + 8,auStack_b0);
  iVar8 = iStack00000024;
  uVar16 = _uStack00000020 & 0xffffffff;
  uVar7 = uStack00000020;
  iVar10 = (int)((uVar16 + 5 & 0xffffffff) << 2);
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + in_r0) & 0xfffffff0);
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  puVar3 = (unsigned int *)(iVar9 + 0x30U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar17 = puVar2[1];
  uVar18 = puVar2[2];
  uVar19 = puVar2[3];
  puVar3 = (unsigned int *)(iVar9 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar17;
  puVar3[2] = uVar18;
  puVar3[3] = uVar19;
  uVar15 = *(unsigned int *)(iVar10 + uStack00000020);
  if ((uVar15 & 0xfffffffc) == 0) {
    iVar10 = fn_82D2D400(param_2 + 0x20,uStack00000020);
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    *(int *)(iVar10 + 8) = iVar9;
    iVar6 = (int)((uVar16 + 2 & 0xffffffff) << 2);
    *(unsigned int *)(iVar10 + 0xc) = *(unsigned int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar7);
    *(unsigned int *)(iVar10 + 0x10) = *(unsigned int *)(iVar6 + uVar7);
    *(int *)(iVar6 + uVar7) = iVar9;
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    uVar15 = *(unsigned int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar7);
    uVar13 = uVar15 & 0xfffffffc;
    uVar15 = uVar15 & 3;
    *(unsigned int *)(iVar10 + 0x18) = uVar15 + uVar13;
    if (uVar13 != 0) {
      *(int *)((uVar15 + 5) * 4 + uVar13) = iVar10 + 1;
    }
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    *(unsigned int *)(iVar10 + 0x14) = (int)lVar14 + uVar7;
    if (uVar7 != 0) {
      *(int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar7) = iVar10;
    }
    uVar15 = lbl_8323B6C4 & 1;
    if ((lbl_8323B6C4 & 1) == 0) {
      lbl_8323B6C4 = lbl_8323B6C4 | 1;
      lbl_8323B6C0 = 0;
      lbl_8323B6BC = uVar15;
    }
    *(unsigned int *)(iVar10 + 0x1c) = lbl_8323B6C0 + lbl_8323B6BC;
    if (lbl_8323B6BC != 0) {
      *(int *)((lbl_8323B6C0 + 5) * 4 + lbl_8323B6BC) = iVar10 + 2;
    }
    if (param_5 == '\0') goto LAB_82d25298;
    fn_82D1ECE8(param_2);
    uVar13 = uVar7;
  }
  else {
    uVar4 = (unsigned __int64)uVar15 & 3;
    uVar13 = uVar15 & 0xfffffffc;
    iVar11 = fn_82D2D400(param_2 + 0x20,uStack00000020);
    iVar12 = fn_82D2D400(param_2 + 0x20,uVar13);
    iVar6 = (int)uVar4;
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    *(int *)(iVar11 + 8) = iVar9;
    *(unsigned int *)(iVar11 + 0xc) = *(unsigned int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar7);
    *(unsigned int *)(iVar11 + 0x10) =
         *(unsigned int *)(((-(unsigned int)(uVar4 != 2) & iVar6 + 1U) + 2) * 4 + uVar13);
    lVar14 = 2;
    if ((uVar15 & 3) != 0) {
      lVar14 = uVar4 - 1;
    }
    *(int *)(iVar12 + 8) = iVar9;
    *(unsigned int *)(iVar12 + 0xc) = *(unsigned int *)((int)((lVar14 + 2U & 0xffffffff) << 2) + uVar13)
    ;
    *(unsigned int *)(iVar12 + 0x10) =
         *(unsigned int *)
          ((int)(((-(unsigned __int64)(uVar16 != 2) & uVar16 + 1) + 2 & 0xffffffff) << 2) + uVar7);
    *(int *)((int)((uVar16 + 2 & 0xffffffff) << 2) + uVar7) = iVar9;
    *(int *)((iVar6 + 2) * 4 + uVar13) = iVar9;
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    uVar1 = *(unsigned int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar7);
    uVar5 = uVar1 & 0xfffffffc;
    uVar1 = uVar1 & 3;
    *(unsigned int *)(iVar11 + 0x18) = uVar1 + uVar5;
    if (uVar5 != 0) {
      *(int *)((uVar1 + 5) * 4 + uVar5) = iVar11 + 1;
    }
    lVar14 = 2;
    if ((uVar15 & 3) != 0) {
      lVar14 = uVar4 - 1;
    }
    uVar1 = *(unsigned int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar13);
    *(unsigned int *)(iVar12 + 0x18) = (uVar1 & 3) + (uVar1 & 0xfffffffc);
    if ((uVar1 & 0xfffffffc) != 0) {
      *(int *)(((uVar1 & 3) + 5) * 4 + (uVar1 & 0xfffffffc)) = iVar12 + 1;
    }
    lVar14 = 2;
    if (uVar16 != 0) {
      lVar14 = uVar16 - 1;
    }
    *(unsigned int *)(iVar11 + 0x14) = (int)lVar14 + uVar7;
    if (uVar7 != 0) {
      *(int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar7) = iVar11;
    }
    lVar14 = 2;
    if ((uVar15 & 3) != 0) {
      lVar14 = uVar4 - 1;
    }
    *(unsigned int *)(iVar12 + 0x14) = (int)lVar14 + uVar13;
    if ((uVar15 & 0xfffffffc) != 0) {
      *(int *)((int)((lVar14 + 5U & 0xffffffff) << 2) + uVar13) = iVar12;
    }
    *(unsigned int *)(iVar11 + 0x1c) = iVar6 + uVar13;
    if ((uVar15 & 0xfffffffc) != 0) {
      *(int *)((iVar6 + 5) * 4 + uVar13) = iVar11 + 2;
    }
    *(unsigned int *)(iVar12 + 0x1c) = iVar8 + uVar7;
    if (uVar7 != 0) {
      *(int *)(iVar10 + uVar7) = iVar12 + 2;
    }
    if (param_5 == '\0') goto LAB_82d25298;
    fn_82D1ECE8(param_2,iVar11);
    fn_82D1ECE8(param_2,iVar12);
    fn_82D1ECE8(param_2,uVar7);
  }
  fn_82D1ECE8(param_2,uVar13);
LAB_82d25298:
  uVar15 = 2;
  if (uVar16 != 0) {
    uVar15 = iVar8 - 1;
  }
  *param_1 = uVar7;
  param_1[1] = uVar15;
  return param_1;
}

