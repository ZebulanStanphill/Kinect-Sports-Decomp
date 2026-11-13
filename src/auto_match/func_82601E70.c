typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82529D38();
extern int fn_8255ABF8();
extern int fn_8255DEA0();
extern int fn_8255E320();
extern int fn_82603068();
extern int fn_82603170();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82601E70(double param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  float *pfVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  float *pfVar7;
  unsigned __int64 in_r0;
  int iVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  float fVar10;
  unsigned int uVar11;
  float fVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  float fVar15;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar8 = param_2 + 0x60;
  iVar1 = *(int *)(param_2 + 0x18c);
  pfVar4 = (float *)((int)in_r0 + iVar8 & 0xfffffff0);
  fVar16 = *pfVar4;
  fVar17 = pfVar4[1];
  fVar18 = pfVar4[2];
  fVar19 = pfVar4[3];
  if (iVar1 == 0) {
    fn_8255ABF8(param_2 + 0xa0);
    puVar5 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
    uVar9 = *puVar5;
    uVar11 = puVar5[1];
    uVar13 = puVar5[2];
    uVar14 = puVar5[3];
    vectorAddFloatingPoint(in_vs32,in_vs33);
  }
  else {
    uVar2 = *(unsigned int *)(param_2 + 400);
    if (uVar2 == 0) {
      puVar5 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
      uVar9 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      puVar6 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar11;
      puVar6[3] = uVar13;
      fn_82529D38(iVar1,param_2 + 0x94);
      if (*(int *)(param_2 + 0x1b0) == 0) {
        fn_82603068(*(unsigned int *)(param_2 + 0x18c),param_2 + 0x1c0,iVar8,
                          *(unsigned int *)(param_2 + 0x194),param_2 + 0x198);
      }
      else if (*(int *)(param_2 + 0x1b0) == 5) {
        fn_82603068(*(unsigned int *)(param_2 + 0x18c),param_2 + 0x1c0,iVar8,
                          *(unsigned int *)(param_2 + 0x194),param_2 + 0x198);
        *(unsigned int *)(param_2 + 0x1c4) = *(unsigned int *)(param_2 + 0x1c0);
        *(unsigned int *)(param_2 + 0x1c8) = *(unsigned int *)(param_2 + 0x1c0);
      }
    }
    else if (uVar2 == 1) {
      puVar5 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
      uVar9 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      puVar6 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar11;
      puVar6[3] = uVar13;
      fn_82529D38(iVar1,param_2 + 0x94);
      fn_82603170(*(unsigned int *)(param_2 + 0x18c),iVar8,param_2 + 0x94,
                        *(unsigned short *)(param_2 + 0x19c),param_2 + 0x1a0);
    }
    else {
      if (2 < uVar2) goto LAB_82601ff0;
      puVar5 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
      uVar9 = puVar5[1];
      uVar11 = puVar5[2];
      uVar13 = puVar5[3];
      puVar6 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar9;
      puVar6[2] = uVar11;
      puVar6[3] = uVar13;
      fn_82529D38(iVar1,param_2 + 0x94);
      iVar1 = *(int *)(param_2 + 0x1a4);
      iVar3 = *(int *)(param_2 + 0x18c);
      if (iVar1 == -1) {
        puVar5 = (unsigned int *)(iVar3 + 0x50U & 0xfffffff0);
        uVar9 = puVar5[1];
        uVar11 = puVar5[2];
        uVar13 = puVar5[3];
        puVar6 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
        *puVar6 = *puVar5;
        puVar6[1] = uVar9;
        puVar6[2] = uVar11;
        puVar6[3] = uVar13;
      }
      else {
        fn_8255DEA0(iVar3,iVar1,iVar8);
        fn_8255E320(iVar3,iVar1,param_2 + 0x94);
      }
    }
    puVar5 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
    uVar9 = *puVar5;
    uVar11 = puVar5[1];
    uVar13 = puVar5[2];
    uVar14 = puVar5[3];
    pfVar4 = (float *)(param_2 + 0xd0U & 0xfffffff0);
    in_register_000100d0 = *pfVar4;
    in_register_000100d4 = pfVar4[1];
    in_register_000100d8 = pfVar4[2];
    in_vr13 = pfVar4[3];
    vectorAddFloatingPoint(in_vs32,in_vs45);
  }
  puVar5 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
  *puVar5 = uVar9;
  puVar5[1] = uVar11;
  puVar5[2] = uVar13;
  puVar5[3] = uVar14;
LAB_82601ff0:
  if ((param_1 == (double)ltcg_pool_0_0f) || (*(unsigned int *)(param_2 + 0x1c) < 2)) {
    puVar5 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
  }
  else {
    pfVar4 = (float *)((int)in_r0 + iVar8 & 0xfffffff0);
    fVar10 = pfVar4[1];
    fVar12 = pfVar4[2];
    fVar15 = pfVar4[3];
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x60);
    pfVar7 = (float *)(param_2 + 0x80U & 0xfffffff0);
    *pfVar7 = (*pfVar4 - fVar16) * in_register_000100d0;
    pfVar7[1] = (fVar10 - fVar17) * in_register_000100d4;
    pfVar7[2] = (fVar12 - fVar18) * in_register_000100d8;
    pfVar7[3] = (fVar15 - fVar19) * in_vr13;
  }
  return;
}

