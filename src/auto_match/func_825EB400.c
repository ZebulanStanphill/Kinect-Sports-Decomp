typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern unsigned int *auStack_2c;
extern int fn_82F65FE0();
extern unsigned int stack0x00000000;
extern unsigned int uStack_30;
extern unsigned __int64 storeVectorElementHalfWordIndexed();
extern V16 loadVectorForShiftLeft();
extern V16 vectorPackD3D128();
extern V16 vectorPermute();
extern V16 vectorSplatHalfWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825EB400(int param_1)

{
  unsigned int uVar1;
  unsigned short uVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  __int64 lVar8;
  unsigned char in_vs32 [16];
  unsigned char auVar9 [16];
  unsigned char in_vs33 [16];
  unsigned char auVar10 [16];
  float fVar11;
  float fVar12;
  unsigned short uStack_30;
  unsigned char auStack_2c [12];
  unsigned char auStack_20 [16];
  
  piVar6 = (int *)(param_1 + 0x10);
  uVar1 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
  uVar4 = (unsigned __int64)uVar1;
  if (0 < (int)uVar1) {
    iVar7 = 0;
    do {
      lVar8 = ZEXT48(&stack0x00000000) - 0x30;{ V16 _vt0 = loadVectorForShiftLeft(in_r0,ZEXT48(&stack0x00000000) - 0x2c); memcpy(auVar10, &_vt0, 16); }
      piVar5 = (int *)(*(int *)((*piVar6 + 3) * 4 + *(int *)(param_1 + 8)) + iVar7);
      iVar7 = iVar7 + 0x18;
      uVar1 = *piVar5 + 0x10U & 0xfffffff0;
      fVar11 = *(float *)(uVar1 + 4);
      fVar12 = *(float *)(uVar1 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,in_vs32); memcpy(auVar9, &_vt1, 16); }
      fVar11 = fVar11 * fVar11 + 0.0 + fVar12 * fVar12;
      pfVar3 = (float *)((unsigned int)(auStack_20 + (int)in_r0) & 0xfffffff0);
      *pfVar3 = fVar11;
      pfVar3[1] = fVar11;
      pfVar3[2] = fVar11;
      pfVar3[3] = fVar11;{ V16 _vt2 = vectorPermute(auVar9,auVar9,auVar10); memcpy(auVar9, &_vt2, 16); }
      vectorPackD3D128(*(unsigned char (*) [16])((unsigned int)(auStack_2c + (int)in_r0) & 0xfffffff0),5,2,2);{ V16 _vt3 = vectorSplatHalfWord(auVar9,0); memcpy(in_vs32, &_vt3, 16); }
      uVar2 = storeVectorElementHalfWordIndexed(in_vs32,0,lVar8);
      *(unsigned short *)lVar8 = uVar2;
      *(unsigned short *)(piVar5 + 1) = uStack_30;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  iVar7 = *(int *)(param_1 + 8);
  if (*(int *)((*piVar6 + 1) * 4 + iVar7) != 0) {
    fn_82F65FE0(*(unsigned int *)((*piVar6 + 3) * 4 + iVar7),
                      *(unsigned int *)((*piVar6 + 1) * 4 + iVar7),0x18,0xffffffff825eb510);
  }
  return;
}

