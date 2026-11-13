extern unsigned int *auStack_100;
extern unsigned int *auStack_170;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_82F59668();
extern int fn_82F59768();
extern int fn_82F68CC0();
extern unsigned int lbl_82167C98;
extern unsigned int lbl_831BAFD4;
extern unsigned int lbl_832628F0;
extern unsigned int lbl_83262900;
extern unsigned int lbl_83262910;
extern unsigned int lbl_83262920;
extern unsigned int uRam83262904;
extern unsigned int uRam83262908;
extern unsigned int uRam8326290c;
extern unsigned int uRam83262914;
extern unsigned int uRam83262918;
extern unsigned int uRam8326291c;
extern unsigned int uRam83262924;
extern unsigned int uRam83262928;
extern unsigned int uRam8326292c;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_130;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F5AA88(unsigned __int64 *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 *puVar6;
  int *piVar7;
  __int64 lVar8;
  unsigned __int64 *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned char auStack_170 [64];
  unsigned __int64 uStack_130;
  unsigned __int64 uStack_128;
  unsigned __int64 uStack_120;
  unsigned __int64 uStack_118;
  unsigned __int64 uStack_110;
  unsigned __int64 uStack_108;
  unsigned __int64 auStack_100 [2];
  unsigned char auStack_f0 [64];
  unsigned char auStack_b0 [176];
  
  piVar7 = &lbl_82167C98;
  param_2 = param_2 + 0x20;
  lVar8 = 0x14;
  puVar9 = param_1;
  do {
    uVar24 = uRam8326292c;
    uVar23 = uRam83262928;
    uVar22 = uRam83262924;
    uVar21 = lbl_83262920;
    uVar20 = uRam8326291c;
    uVar19 = uRam83262918;
    uVar18 = uRam83262914;
    uVar17 = lbl_83262910;
    uVar16 = uRam8326290c;
    uVar15 = uRam83262908;
    uVar13 = uRam83262904;
    uVar11 = lbl_83262900;
    iVar5 = *piVar7;
    iVar3 = (int)in_r0;
    if (iVar5 == -1) {
      puVar1 = (unsigned int *)((unsigned int)(&lbl_832628F0 + iVar3) & 0xfffffff0);
      uVar10 = puVar1[1];
      uVar12 = puVar1[2];
      uVar14 = puVar1[3];
      puVar2 = (unsigned int *)((int)&uStack_130 + iVar3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar2[2] = uVar12;
      puVar2[3] = uVar14;
      puVar1 = (unsigned int *)((int)&uStack_120 + iVar3 & 0xfffffff0);
      *puVar1 = uVar11;
      puVar1[1] = uVar13;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      puVar1 = (unsigned int *)((int)&uStack_110 + iVar3 & 0xfffffff0);
      *puVar1 = uVar17;
      puVar1[1] = uVar18;
      puVar1[2] = uVar19;
      puVar1[3] = uVar20;
      puVar1 = (unsigned int *)((int)auStack_100 + iVar3 & 0xfffffff0);
      *puVar1 = uVar21;
      puVar1[1] = uVar22;
      puVar1[2] = uVar23;
      puVar1[3] = uVar24;
    }
    else {
      puVar1 = (unsigned int *)((int)param_1 + iVar3 + iVar5 * 0x40 & 0xfffffff0);
      uVar11 = puVar1[1];
      uVar13 = puVar1[2];
      uVar15 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(param_1 + iVar5 * 8 + 2) & 0xfffffff0);
      uVar24 = *puVar2;
      uVar10 = puVar2[1];
      uVar12 = puVar2[2];
      uVar14 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(param_1 + iVar5 * 8 + 4) & 0xfffffff0);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
      puVar2 = (unsigned int *)((unsigned int)(param_1 + iVar5 * 8 + 6) & 0xfffffff0);
      uVar16 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar2 = (unsigned int *)((int)&uStack_130 + iVar3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar13;
      puVar2[3] = uVar15;
      puVar1 = (unsigned int *)((int)&uStack_120 + iVar3 & 0xfffffff0);
      *puVar1 = uVar24;
      puVar1[1] = uVar10;
      puVar1[2] = uVar12;
      puVar1[3] = uVar14;
      puVar1 = (unsigned int *)((int)&uStack_110 + iVar3 & 0xfffffff0);
      *puVar1 = uVar20;
      puVar1[1] = uVar21;
      puVar1[2] = uVar22;
      puVar1[3] = uVar23;
      puVar1 = (unsigned int *)((int)auStack_100 + iVar3 & 0xfffffff0);
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      puVar1[2] = uVar18;
      puVar1[3] = uVar19;
    }
    if (lbl_831BAFD4 == '\0') {
      puVar6 = (unsigned __int64 *)
               fn_82F59768(auStack_b0,uStack_130,uStack_128,uStack_120,uStack_118,uStack_110,
                                 uStack_108,auStack_100[0]);
      fn_82F68CC0(auStack_170,puVar9,0x40);
      iVar5 = fn_82F59668(auStack_f0,*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5],
                           puVar6[6]);
    }
    else {
      uVar4 = fn_82F59768(auStack_f0,uStack_130,uStack_128,uStack_120,uStack_118,uStack_110,
                                uStack_108,auStack_100[0]);
      fn_82F68CC0(auStack_170,uVar4,0x40);
      iVar5 = fn_82F59668(auStack_b0,*puVar9,puVar9[1],puVar9[2],puVar9[3],puVar9[4],puVar9[5],
                           puVar9[6]);
    }
    puVar1 = (unsigned int *)((int)in_r0 + iVar5 & 0xfffffff0);
    uVar11 = puVar1[1];
    uVar13 = puVar1[2];
    uVar15 = puVar1[3];
    lVar8 = lVar8 + -1;
    puVar2 = (unsigned int *)(param_2 - 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    puVar2[2] = uVar13;
    puVar2[3] = uVar15;
    piVar7 = piVar7 + 1;
    puVar9 = puVar9 + 8;
    puVar1 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
    uVar11 = puVar1[1];
    uVar13 = puVar1[2];
    uVar15 = puVar1[3];
    puVar2 = (unsigned int *)(param_2 - 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    puVar2[2] = uVar13;
    puVar2[3] = uVar15;
    puVar1 = (unsigned int *)(iVar5 + 0x20U & 0xfffffff0);
    uVar11 = puVar1[1];
    uVar13 = puVar1[2];
    uVar15 = puVar1[3];
    puVar2 = (unsigned int *)((int)in_r0 + param_2 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    puVar2[2] = uVar13;
    puVar2[3] = uVar15;
    puVar1 = (unsigned int *)(iVar5 + 0x30U & 0xfffffff0);
    uVar11 = puVar1[1];
    uVar13 = puVar1[2];
    uVar15 = puVar1[3];
    puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar11;
    puVar2[2] = uVar13;
    puVar2[3] = uVar15;
    param_2 = param_2 + 0x40;
  } while (lVar8 != 0);
  return;
}

