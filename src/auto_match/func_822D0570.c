typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_822AA770();
extern int fn_822CDCF8();
extern int fn_822CEEC8();
extern int fn_822D0858();
extern int fn_82372F88();
extern int fn_82374520();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917C0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329EA20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorConditionalSelect();


void fn_822D0570(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  __int64 lVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_00010470;
  float in_register_00010474;
  float in_register_00010478;
  float in_vr71;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  int iStack_70;
  int iStack_6c;
  unsigned char auStack_60 [8];
  unsigned int uStack_58;
  float afStack_50 [2];
  unsigned int uStack_48;
  
  uVar4 = ZEXT48(&stack0x00000000);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x204) == 0) {
    lVar5 = fn_82372F88();
    iVar8 = (int)(lVar5 + 1) - ((int)lVar5 + (unsigned int)(lVar5 + 1 == 0));
  }
  else {
    iVar8 = *(int *)(*(int *)(param_1 + 0x10) + 0x658);
  }
  if (iVar8 == 0) {
    if ((param_2 != 0) && (iVar8 = *(int *)(param_1 + 0x14), *(int *)(iVar8 + 0x2a0) != 0)) {
      *(unsigned int *)(iVar8 + 0x2a0) = 0;
      *(unsigned int *)(iVar8 + 0x2a4) = (unsigned int)(*(int *)(iVar8 + 0x2a4) == 0);
    }
    fn_822CDCF8(*(unsigned int *)(param_1 + 0x14),uVar4 - 0x60,uVar4 - 0x40);
    iVar8 = (int)in_r0;
    if (*(int *)(*(int *)(param_1 + 0x14) + 0x2b4) == 0) {
      if ((param_4 != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 0x204) == 0)) {
        puVar1 = (unsigned int *)((unsigned int)(auStack_60 + iVar8) & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (unsigned int *)((int)afStack_50 + iVar8 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        fn_82374520(uVar4 - 0x70);
        if (iStack_70 == 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          if ((*(int *)(*(int *)(param_1 + 0x14) + 0x2c) != *(int *)(iVar8 + 0x1e4)) &&
             (iVar6 = fn_822AA770(*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x1c)),
             iVar6 == 0)) {
            pfVar7 = (float *)(iVar8 + 0x26c);
            lVar5 = 5;
            fVar12 = ltcg_pool_0_0f;
            do {
              pfVar7 = pfVar7 + 1;
              fVar12 = *pfVar7 + fVar12;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            afStack_50[0] = fVar12 * lbl_821917C0 + afStack_50[0];
          }
        }
        else {
          iVar8 = *(int *)(iStack_70 + 0x2134);
          if (((iVar8 == 0) || (*(int *)(iVar8 + 0x24) == 0)) ||
             (*(int *)(iVar8 + 0x2c) == *(int *)(*(int *)(param_1 + 0x14) + 0x2c))) {
            if ((*(int *)(iStack_70 + 0x20ec) != 0x18) &&
               (*(int *)(param_1 + 0x14) == *(int *)(iStack_70 + 0x20e4))) {
              puVar1 = (unsigned int *)((unsigned int)(&lbl_8329EA20 + (int)in_r0) & 0xfffffff0);
              uVar9 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              vectorConditionalSelect(in_vs32,in_vs45,in_vs44);
              puVar2 = (unsigned int *)((int)afStack_50 + (int)in_r0 & 0xfffffff0);
              *puVar2 = *puVar1;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              in_vr13 = in_vr77;
              in_register_000100d8 = in_register_000104d8;
              in_register_000100d4 = in_register_000104d4;
              in_register_000100d0 = in_register_000104d0;
            }
          }
          else {
            iVar8 = *(int *)(iStack_70 + 0x2148);
            if (((iVar8 == 7) || (iVar8 == 6)) || (iVar8 == 5)) {
              pfVar7 = (float *)(*(int *)(param_1 + 0x10) + 0x26c);
              lVar5 = 5;
              fVar12 = ltcg_pool_0_0f;
              do {
                pfVar7 = pfVar7 + 1;
                fVar12 = *pfVar7 + fVar12;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
              afStack_50[0] = fVar12 * lbl_821917C0 * lbl_821917B0 + afStack_50[0];
            }
          }
        }
        puVar1 = (unsigned int *)((int)afStack_50 + (int)in_r0 & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        if (iStack_6c != 0) {
          fn_822315A0();
        }
      }
    }
    else {
      puVar1 = (unsigned int *)(*(int *)(param_1 + 0x14) + 0x2c0U & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)((unsigned int)(auStack_60 + iVar8) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    if ((*(int *)(iVar8 + 0x34c) != 0) || (*(int *)(iVar8 + 0x350) != 0)) {
      fn_822CEEC8(iVar8);
      loadVectorLeftIndexed128(in_r0,uVar4 - 0x70);
      pfVar7 = (float *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      fVar12 = pfVar7[1];
      fVar13 = pfVar7[2];
      fVar14 = pfVar7[3];
      pfVar3 = (float *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *pfVar3 = in_register_00010470 * in_register_000100d0 + *pfVar7;
      pfVar3[1] = in_register_00010474 * in_register_000100d4 + fVar12;
      pfVar3[2] = in_register_00010478 * in_register_000100d8 + fVar13;
      pfVar3[3] = in_vr71 * in_vr13 + fVar14;
    }
    if (*(int *)(iVar8 + 0x2d0) != 0) {
      puVar1 = (unsigned int *)(iVar8 + 0x80U & 0xfffffff0);
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (unsigned int *)((int)afStack_50 + (int)in_r0 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      uStack_58 = uStack_48;
    }
    fn_822D0858(param_1,param_3);
  }
  return;
}

