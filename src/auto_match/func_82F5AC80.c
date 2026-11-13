#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_13b0;
extern unsigned int *auStack_1bd0;
extern unsigned int *auStack_20d0;
extern unsigned int *auStack_25a0;
extern unsigned int *auStack_25b0;
extern unsigned int *auStack_25d0;
extern unsigned int *auStack_2710;
extern unsigned int *auStack_2850;
extern unsigned int *auStack_2890;
extern unsigned int *auStack_600;
extern unsigned int *auStack_e20;
extern unsigned int fStack_28c4;
extern unsigned int fStack_28d4;
extern unsigned int fStack_28d8;
extern unsigned int fStack_28dc;
extern unsigned int fStack_28e0;
extern int fn_82A1DD38();
extern int fn_82BA02A8();
extern int fn_82F534D8();
extern int fn_82F53548();
extern int fn_82F59488();
extern int fn_82F5A3A0();
extern int fn_82F5AA88();
extern int fn_82F5E6A8();
extern int fn_82F5E778();
extern int fn_82F5E7C8();
extern int fn_82F5E8C0();
extern int fn_82F600B0();
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832628C3;
extern unsigned int uStack_2898;
extern unsigned int uStack_28a0;
extern unsigned int uStack_28a8;
extern unsigned int uStack_28b0;
extern unsigned int uStack_28b8;
extern unsigned int uStack_28c0;
extern unsigned int uStack_28c8;
extern unsigned int uStack_28d0;


void fn_82F5AC80(unsigned __int64 param_1,__int64 param_2,__int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  int iVar2;
  unsigned int *puVar3;
  float *pfVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 *puVar7;
  __int64 lVar8;
  double dVar9;
  double dVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int in_register_00010010;
  unsigned int uVar15;
  unsigned int in_register_00010014;
  unsigned int uVar16;
  unsigned int in_register_00010018;
  unsigned int uVar17;
  unsigned int in_vr1;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  float fStack_28e0;
  float fStack_28dc;
  float fStack_28d8;
  float fStack_28d4;
  unsigned __int64 uStack_28d0;
  unsigned int uStack_28c8;
  float fStack_28c4;
  unsigned __int64 uStack_28c0;
  unsigned __int64 uStack_28b8;
  unsigned __int64 uStack_28b0;
  unsigned __int64 uStack_28a8;
  unsigned __int64 uStack_28a0;
  unsigned __int64 uStack_2898;
  unsigned char auStack_2890 [64];
  unsigned char auStack_2850 [4];
  float afStack_284c [79];
  unsigned char auStack_2710 [320];
  unsigned int auStack_25d0 [8];
  unsigned char auStack_25b0 [16];
  unsigned int auStack_25a0 [308];
  unsigned __int64 auStack_20d0 [160];
  unsigned char auStack_1bd0 [2080];
  unsigned __int64 auStack_13b0 [178];
  unsigned char auStack_e20 [2080];
  unsigned __int64 auStack_600 [192];
  
  puVar3 = (unsigned int *)(param_4 + -4);
  lVar8 = 0x14;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0x3f800000;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  dVar9 = (double)lbl_821AAD20;
  if (lbl_832628C3 == '\0') {
    lVar8 = 0;
    pfVar4 = afStack_284c;
    dVar10 = (double)lbl_8200DFF4;
    do {
      fn_82F5E6A8(lVar8);
      puVar3 = (unsigned int *)((unsigned int)(pfVar4 + -1) & 0xfffffff0);
      *puVar3 = in_register_00010010;
      puVar3[1] = in_register_00010014;
      puVar3[2] = in_register_00010018;
      puVar3[3] = in_vr1;
      if ((double)*pfVar4 < dVar10) {
        dVar10 = (double)*pfVar4;
      }
      lVar8 = lVar8 + 1;
      pfVar4 = pfVar4 + 4;
    } while ((int)lVar8 < 0x14);
    fn_82F534D8(dVar9,dVar10,dVar9,dVar9);
    fn_82F5E7C8(&uStack_28d0);
    fn_82F5E8C0(auStack_1bd0);
    fn_82F600B0(auStack_1bd0,uStack_28d0,CONCAT44(uStack_28c8,fStack_28c4),uStack_28c0,
                      uStack_28b8,auStack_2850);
    uVar5 = 0;
    do {
      iVar2 = fn_82F59488(auStack_2890,*(unsigned __int64 *)((int)auStack_13b0 + uVar5),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 8),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 0x10),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 0x18),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 0x20),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 0x28),
                           *(unsigned __int64 *)((int)auStack_13b0 + uVar5 + 0x30));
      puVar3 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      *(unsigned int *)((int)auStack_25d0 + uVar5) = *puVar3;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 4) = uVar11;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 8) = uVar12;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 0xc) = uVar13;
      uVar6 = uVar5 + 0x40;
      puVar3 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
      uVar18 = *puVar3;
      uVar19 = puVar3[1];
      uVar20 = puVar3[2];
      uVar21 = puVar3[3];
      puVar3 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      puVar1 = (unsigned int *)(iVar2 + 0x30U & 0xfffffff0);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar13 = puVar1[2];
      uVar14 = puVar1[3];
      puVar1 = (unsigned int *)((unsigned int)(auStack_25b0 + (int)in_r0 + uVar5) & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x10) = uVar18;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x14) = uVar19;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x18) = uVar20;
      *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x1c) = uVar21;
      *(unsigned int *)((int)auStack_25a0 + uVar5) = uVar11;
      *(unsigned int *)((int)auStack_25a0 + uVar5 + 4) = uVar12;
      *(unsigned int *)((int)auStack_25a0 + uVar5 + 8) = uVar13;
      *(unsigned int *)((int)auStack_25a0 + uVar5 + 0xc) = uVar14;
      uVar5 = uVar6;
    } while (uVar6 < 0x500);
    fn_82F5AA88(auStack_25d0,0xffffffff83262b10);
    lbl_832628C3 = '\x01';
    fn_82BA02A8(auStack_1bd0);
  }
  puVar3 = (unsigned int *)((int)param_2 + 0x10U & 0xfffffff0);
  uVar11 = *puVar3;
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  iVar2 = (int)in_r0;
  puVar3 = (unsigned int *)((int)&fStack_28e0 + iVar2 & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  fStack_28d4 = (float)dVar9;
  puVar3 = (unsigned int *)((int)&fStack_28e0 + iVar2 & 0xfffffff0);
  uVar15 = *puVar3;
  uVar16 = puVar3[1];
  uVar17 = puVar3[2];
  uVar18 = puVar3[3];
  puVar3 = (unsigned int *)((int)&uStack_28d0 + iVar2 & 0xfffffff0);
  *puVar3 = uVar11;
  puVar3[1] = uVar12;
  puVar3[2] = uVar13;
  puVar3[3] = uVar14;
  fn_82F53548();
  puVar3 = (unsigned int *)((int)&fStack_28e0 + (int)in_r0 & 0xfffffff0);
  *puVar3 = uVar15;
  puVar3[1] = uVar16;
  puVar3[2] = uVar17;
  puVar3[3] = uVar18;
  fn_82F5E778((double)fStack_28e0,(double)fStack_28dc,(double)fStack_28d8,(double)fStack_28c4,
                    &uStack_28b0);
  fn_82A1DD38(auStack_2710,param_3 * 0x1c0 + param_2 + 0x50,0x140);
  fn_82F5E8C0(auStack_e20);
  fn_82F600B0(auStack_e20,uStack_28b0,uStack_28a8,uStack_28a0,uStack_2898,auStack_2710);
  uVar5 = 0;
  do {
    iVar2 = fn_82F59488(auStack_2890,*(unsigned __int64 *)((int)auStack_600 + uVar5),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 8),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 0x10),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 0x18),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 0x20),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 0x28),
                         *(unsigned __int64 *)((int)auStack_600 + uVar5 + 0x30));
    puVar3 = (unsigned int *)((int)in_r0 + iVar2 & 0xfffffff0);
    uVar11 = puVar3[1];
    uVar12 = puVar3[2];
    uVar13 = puVar3[3];
    puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
    uVar22 = *puVar1;
    uVar23 = puVar1[1];
    uVar24 = puVar1[2];
    uVar25 = puVar1[3];
    puVar1 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    puVar1 = (unsigned int *)(iVar2 + 0x30U & 0xfffffff0);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    *(unsigned int *)((int)auStack_25d0 + uVar5) = *puVar3;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 4) = uVar11;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 8) = uVar12;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 0xc) = uVar13;
    uVar6 = uVar5 + 0x40;
    puVar3 = (unsigned int *)((unsigned int)(auStack_25b0 + (int)in_r0 + uVar5) & 0xfffffff0);
    *puVar3 = uVar18;
    puVar3[1] = uVar19;
    puVar3[2] = uVar20;
    puVar3[3] = uVar21;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x10) = uVar22;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x14) = uVar23;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x18) = uVar24;
    *(unsigned int *)((int)auStack_25d0 + uVar5 + 0x1c) = uVar25;
    *(unsigned int *)((int)auStack_25a0 + uVar5) = uVar14;
    *(unsigned int *)((int)auStack_25a0 + uVar5 + 4) = uVar15;
    *(unsigned int *)((int)auStack_25a0 + uVar5 + 8) = uVar16;
    *(unsigned int *)((int)auStack_25a0 + uVar5 + 0xc) = uVar17;
    uVar5 = uVar6;
  } while (uVar6 < 0x500);
  fn_82F5AA88(auStack_25d0,auStack_20d0);
  pfVar4 = (float *)(param_4 + -4);
  puVar7 = auStack_20d0;
  uVar5 = 0;
  do {
    dVar9 = (double)fn_82F5A3A0(*puVar7,puVar7[1],puVar7[2],puVar7[3],puVar7[4],puVar7[5],
                                      puVar7[6],puVar7[7]);
    uVar5 = uVar5 + 0xc;
    pfVar4 = pfVar4 + 1;
    *pfVar4 = (float)dVar9;
    puVar7 = puVar7 + 8;
  } while (uVar5 < 0xf0);
  fn_82BA02A8(auStack_e20);
  return;
}

