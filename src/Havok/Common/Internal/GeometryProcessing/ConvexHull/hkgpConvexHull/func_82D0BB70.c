typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_260;
extern unsigned int *auStack_270;
extern unsigned int fStack_278;
extern unsigned int fStack_27c;
extern unsigned int fStack_280;
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDCF0();
extern int fn_82CEE578();
extern int fn_82D0B8E8();
extern unsigned int lbl_82132D10;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorLogicalAnd();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


int fn_82D0BB70(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned char in_vs32 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar8 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  unsigned char auStack_270 [16];
  unsigned int auStack_260 [152];
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar5 = *(int *)(param_2 + 8);
  if (*(char *)(iVar5 + 0x1b4) == '\0') {
    fn_82CEE578(uVar3 - 0x280,uVar3 - 0x220,0x200);
    uVar9 = *(unsigned int *)(iVar5 + 0x1b0);
    uVar4 = fn_82CEDB38(uVar3 - 0x280,0xffffffff82134558);
    uVar4 = fn_82CEDCF0(uVar4,uVar9);
    fn_82CEDB38(uVar4,0xffffffff821c24f0);
    iVar5 = (**(int (***)())(*lbl_8323B464 + 0xc))
                      (lbl_8323B464,3,0x79f9d887,uVar3 - 0x220,0xffffffff8213450c,0x14c);
    if (iVar5 != 0) {
      trapWord(0x1f,in_r0,0x16);
    }
    fn_82CED958(uVar3 - 0x280);
  }
  iVar5 = (int)in_r0;
  fn_82D0B8E8(param_2,uVar3 - 0x260,uVar3 - 0x270);
  vectorRotateLeftImmediateMaskInsert128
            (*(unsigned char (*) [16])((unsigned int)(auStack_270 + iVar5) & 0xfffffff0),
             *(unsigned char (*) [16])((unsigned int)(&lbl_82132D10 + iVar5) & 0xfffffff0),1,0);{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs32); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar7,in_vs32,in_vs43); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(auVar8,auVar7,auVar7); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorLogicalAnd(auVar7,in_vs42); memcpy(auVar7, &_vt3, 16); }
  puVar1 = (unsigned int *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  if (fStack_27c <= fStack_280) {
    iVar6 = 2;
    if (fStack_278 <= fStack_280) {
      iVar6 = 0;
    }
  }
  else if (fStack_278 <= fStack_27c) {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  uVar9 = auStack_260[iVar6 * 4 + 1];
  uVar10 = auStack_260[iVar6 * 4 + 2];
  uVar11 = auStack_260[iVar6 * 4 + 3];
  puVar1 = (unsigned int *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  *puVar1 = auStack_260[iVar6 * 4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;{ V16 _vt4 = vectorSubtractFloatingPoint(auVar7,in_vs32); memcpy(auVar7, &_vt4, 16); }
  uVar9 = storeVectorElementWordIndexed(auVar7,0,uVar3 - 0x290);
  *(unsigned int *)(uVar3 - 0x290) = uVar9;
  puVar1 = (unsigned int *)((int)&fStack_280 + iVar5 & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (unsigned int *)(iVar5 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  return param_1;
}

