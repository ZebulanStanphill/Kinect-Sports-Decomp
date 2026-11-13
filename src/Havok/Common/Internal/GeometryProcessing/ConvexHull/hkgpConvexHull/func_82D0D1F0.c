typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_298;
extern unsigned int fStack_2a0;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern int fn_82D0B8E8();
extern int fn_82D0D150();
extern unsigned int lbl_821AAD20;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned int uStack_29c;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D0D1F0(int param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  double dVar10;
  unsigned char in_vs32 [16];
  unsigned char auVar11 [16];
  unsigned char in_vs44 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  float fStack_2a0;
  unsigned int uStack_29c;
  unsigned int auStack_298 [6];
  float afStack_280 [8];
  float afStack_260 [152];
  
  uVar4 = ZEXT48(&stack0x00000000);
  iVar6 = *(int *)(param_1 + 8);
  if (*(char *)(iVar6 + 0x1b4) == '\0') {
    fn_82CEE578(uVar4 - 0x270,uVar4 - 0x220,0x200);
    uVar2 = *(unsigned int *)(iVar6 + 0x1b0);
    uVar5 = fn_82CEDB38(uVar4 - 0x270,0xffffffff82134558);
    uVar5 = fn_82CEDCF0(uVar5,uVar2);
    fn_82CEDB38(uVar5,0xffffffff821c24f0);
    iVar6 = (**(int (***)())(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d887,uVar4 - 0x220,0xffffffff8213450c,0x14c);
    if (iVar6 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(uVar4 - 0x270);
  }
  fn_82D0B8E8(param_1,uVar4 - 0x260,uVar4 - 0x280);
  auStack_298[1] = 1;
  auStack_298[2] = 2;
  auStack_298[0] = 0;
  dVar10 = (double)fn_82D0D150(param_1,uVar4 - 0x260);
  afStack_280[0] = (float)dVar10;
  dVar10 = (double)fn_82D0D150(param_1,uVar4 - 0x250);
  afStack_280[1] = (float)dVar10;
  fn_82D0D150(param_1,uVar4 - 0x240);
  iVar6 = 0;
  do {
    fVar1 = afStack_280[iVar6];
    iVar7 = iVar6;
    if (fVar1 < afStack_280[iVar6 + 1]) {
      afStack_280[iVar6] = afStack_280[iVar6 + 1];
      afStack_280[iVar6 + 1] = fVar1;
      iVar7 = -1;
      uVar2 = auStack_298[iVar6];
      auStack_298[iVar6] = auStack_298[iVar6 + 1];
      auStack_298[iVar6 + 1] = uVar2;
    }
    fVar1 = lbl_821AAD20;
    iVar6 = iVar7 + 1;
  } while (iVar6 < 2);
  lVar9 = 3;
  lVar8 = uVar4 - 0x298;
  do {
    iVar6 = *(int *)lVar8;
    fVar12 = afStack_260[iVar6 * 4];
    fVar13 = afStack_260[iVar6 * 4 + 1];
    fVar14 = afStack_260[iVar6 * 4 + 2];
    fVar15 = afStack_260[iVar6 * 4 + 3];
    pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
    *pfVar3 = fVar12;
    pfVar3[1] = fVar13;
    pfVar3[2] = fVar14;
    pfVar3[3] = fVar15;
    uVar2 = storeVectorElementWordIndexed(in_vs44,0,uVar4 - 0x2a0);
    *(unsigned int *)(uVar4 - 0x2a0) = uVar2;
    if (fStack_2a0 != fVar1) {{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,uVar4 - 0x28c); memcpy(in_vs44, &_vt0, 16); }
      pfVar3 = (float *)((int)in_r0 + param_2 & 0xfffffff0);
      *pfVar3 = fVar12 * in_register_000100b0;
      pfVar3[1] = fVar13 * in_register_000100b4;
      pfVar3[2] = fVar14 * in_register_000100b8;
      pfVar3[3] = fVar15 * in_vr11;
    }
    lVar8 = lVar8 + 4;{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs32,in_vs44); memcpy(auVar11, &_vt1, 16); }
    uVar2 = storeVectorElementWordIndexed(auVar11,0,uVar4 - 0x29c);
    *(unsigned int *)(uVar4 - 0x29c) = uVar2;
    *(unsigned int *)(param_2 + 0xc) = uStack_29c;
    param_2 = param_2 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

