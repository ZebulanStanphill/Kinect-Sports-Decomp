extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_160;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8253B050();
extern int fn_825443D8();
extern int fn_82544528();
extern int fn_82544F40();
extern int fn_825473C0();
extern int fn_825C8CA8();
extern int fn_82631C78();
extern int fn_82639EA8();
extern int fn_82639F28();
extern int fn_8263FB38();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329618C;
extern unsigned int lbl_83296890;
extern unsigned int lbl_832968D0;
extern unsigned int lbl_83296BE0;
extern unsigned int lbl_83296C20;
extern unsigned int lbl_83296C80;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_140;


void fn_82577848(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int in_r0;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned __int64 *puVar10;
  unsigned __int64 *puVar11;
  int *piVar12;
  int *piVar13;
  __int64 lVar14;
  __int64 lVar15;
  double dVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned char auStack_160 [32];
  unsigned __int64 uStack_140;
  unsigned __int64 uStack_138;
  unsigned __int64 uStack_130;
  unsigned __int64 uStack_128;
  unsigned __int64 uStack_120;
  unsigned __int64 uStack_118;
  unsigned __int64 auStack_110 [2];
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [12];
  int aiStack_c4 [9];
  unsigned char auStack_a0 [160];
  
  iVar6 = lbl_8320A898;
  if (((-1 < param_2) && (*(int *)((param_2 + 0xb) * 4 + param_1) == 0)) &&
     (lVar14 = 0, 0 < *(int *)(param_1 + 8))) {
    bVar1 = *(unsigned char *)(lbl_8320A898 + 0x2903);
    bVar2 = *(unsigned char *)(lbl_8320A898 + 0x2901);
    *(unsigned int *)(lbl_8320A898 + 0x2934) = *(unsigned int *)(lbl_8320A898 + 0x2934) & 0xfffe3fff | 0x8000;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x800;
    *(unsigned int *)(iVar6 + 0x2934) = *(unsigned int *)(iVar6 + 0x2934) | 0x700;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x800;
    *(unsigned int *)(iVar6 + 0x2f18) = 1;
    *(unsigned int *)(iVar6 + 0x2934) =
         *(unsigned int *)(iVar6 + 0x2934) & 0xfffffffe | -(unsigned int)(*(int *)(iVar6 + 0x3158) != 0) & 1;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x20800;
    *(unsigned char *)(iVar6 + 0x2903) = bVar1 | 0x40;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x10000000;
    *(unsigned char *)(iVar6 + 0x2901) = bVar2 & 0x3b | 0x40;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x10000000;
    fn_82631C78(iVar6,0,0x24,0x5c);
    fn_82639F28(iVar6,auStack_160);
    uVar7 = fn_825443D8(param_2);
    uVar8 = fn_82544528();
    fn_82639EA8(iVar6,auStack_160);
    if (lbl_8329618C == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(lbl_8329618C + 4);
    }
    if (((iVar9 == 0) || (*(int *)(iVar9 + 0x1a8) == 0)) ||
       (*(float *)(*(int *)(iVar9 + 0x1a8) + 0x1f0) <= ltcg_pool_0_0f)) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    piVar12 = (int *)(param_1 + 0xc);
    lVar15 = 8;
    piVar13 = piVar12;
    do {
      if ((*piVar13 != 0) && (ltcg_pool_0_0f < *(float *)(*(int *)(*piVar13 + 0x54) + 0x194))) {
        iVar9 = 0;
      }
      piVar13 = piVar13 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fn_825473C0(param_2,auStack_160,uVar8);
    dVar16 = (double)lbl_821CA460;
    if (iVar9 == 0) {
      fn_8263FB38(dVar16,iVar6,0,auStack_160,uVar7,0,0,0,0);
    }
    fn_8263FB38(dVar16,iVar6,0x14,auStack_160,uVar8,0,0,0,0);
    puVar10 = &lbl_83296890;
    iVar3 = (&lbl_83296C80)[param_2 * 0x2c];
    if (iVar3 != 0) {
      puVar10 = &lbl_83296C20 + param_2 * 0x16;
    }
    puVar4 = (unsigned int *)(in_r0 + (int)puVar10 & 0xfffffff0);
    uVar17 = puVar4[1];
    uVar18 = puVar4[2];
    uVar19 = puVar4[3];
    puVar5 = (unsigned int *)((int)&uStack_140 + in_r0 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar17;
    puVar5[2] = uVar18;
    puVar5[3] = uVar19;
    uVar17 = *(unsigned int *)((int)puVar10 + 0x14);
    uVar18 = *(unsigned int *)(puVar10 + 3);
    uVar19 = *(unsigned int *)((int)puVar10 + 0x1c);
    puVar4 = (unsigned int *)((int)&uStack_130 + in_r0 & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar10 + 2);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(unsigned int *)((int)puVar10 + 0x24);
    uVar18 = *(unsigned int *)(puVar10 + 5);
    uVar19 = *(unsigned int *)((int)puVar10 + 0x2c);
    puVar4 = (unsigned int *)((int)&uStack_120 + in_r0 & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar10 + 4);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(unsigned int *)((int)puVar10 + 0x34);
    uVar18 = *(unsigned int *)(puVar10 + 7);
    uVar19 = *(unsigned int *)((int)puVar10 + 0x3c);
    puVar11 = (unsigned __int64 *)(&lbl_83296BE0 + param_2 * 0x2c);
    puVar4 = (unsigned int *)((int)auStack_110 + in_r0 & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar10 + 6);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    if (iVar3 == 0) {
      puVar11 = &lbl_832968D0;
    }
    puVar4 = (unsigned int *)(in_r0 + (int)puVar11 & 0xfffffff0);
    uVar17 = puVar4[1];
    uVar18 = puVar4[2];
    uVar19 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_100 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar17;
    puVar5[2] = uVar18;
    puVar5[3] = uVar19;
    piVar13 = aiStack_c4;
    uVar17 = *(unsigned int *)((int)puVar11 + 0x14);
    uVar18 = *(unsigned int *)(puVar11 + 3);
    uVar19 = *(unsigned int *)((int)puVar11 + 0x1c);
    puVar4 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar11 + 2);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(unsigned int *)((int)puVar11 + 0x24);
    uVar18 = *(unsigned int *)(puVar11 + 5);
    uVar19 = *(unsigned int *)((int)puVar11 + 0x2c);
    lVar15 = 8;
    puVar4 = (unsigned int *)((unsigned int)(auStack_e0 + in_r0) & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar11 + 4);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    uVar17 = *(unsigned int *)((int)puVar11 + 0x34);
    uVar18 = *(unsigned int *)(puVar11 + 7);
    uVar19 = *(unsigned int *)((int)puVar11 + 0x3c);
    puVar4 = (unsigned int *)((unsigned int)(auStack_d0 + in_r0) & 0xfffffff0);
    *puVar4 = *(unsigned int *)(puVar11 + 6);
    puVar4[1] = uVar17;
    puVar4[2] = uVar18;
    puVar4[3] = uVar19;
    do {
      if (*piVar12 != 0) {
        piVar13 = piVar13 + 1;
        *piVar13 = *piVar12;
        lVar14 = lVar14 + 1;
      }
      piVar12 = piVar12 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    if (0 < (int)lVar14) {
      fn_8253B050(auStack_a0,uStack_140,uStack_138,uStack_130,uStack_128,uStack_120,uStack_118,
                   auStack_110[0]);
      fn_82639F28(iVar6,auStack_160);
      *(unsigned int *)(iVar6 + 0x29c0) = *(unsigned int *)(iVar6 + 0x29c0) | 1;
      *(unsigned __int64 *)(iVar6 + 0x20) = *(unsigned __int64 *)(iVar6 + 0x20) | 0x800000000;
      if (0 < (int)lVar14) {
        piVar13 = aiStack_c4;
        do {
          piVar13 = piVar13 + 1;
          fn_825C8CA8(*piVar13,iVar6,&uStack_140,auStack_100,iVar9);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      *(unsigned int *)(iVar6 + 0x29c0) = *(unsigned int *)(iVar6 + 0x29c0) & 0xfffffffe;
      *(unsigned __int64 *)(iVar6 + 0x20) = *(unsigned __int64 *)(iVar6 + 0x20) | 0x800000000;
      fn_82544F40();
    }
    *(unsigned char *)(iVar6 + 0x2903) = bVar1 & 0xbf;
    *(unsigned __int64 *)(iVar6 + 0x10) = *(unsigned __int64 *)(iVar6 + 0x10) | 0x10000000;
  }
  return;
}

