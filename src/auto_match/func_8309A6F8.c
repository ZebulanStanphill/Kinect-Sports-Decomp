typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_680;
extern unsigned int iStack_6c4;
extern unsigned int iStack_6d0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_670;
extern unsigned int uStack_6c8;
extern unsigned int uStack_6dc;
extern unsigned int uStack_6e0;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalSquareRootEstimateFloatingPoint();
extern V16 vectorSplatImmediateSignedWord128();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x8309a910) */
/* WARNING: Removing unreachable block (ram,0x8309a92c) */

void fn_8309A6F8(int param_1,int *param_2,int param_3,__int64 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float *pfVar7;
  unsigned __int64 in_r0;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  __int64 lVar11;
  unsigned char in_vs32 [16];
  unsigned char auVar12 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs38 [16];
  unsigned char auVar13 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar14 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  unsigned int uStack_6e0;
  unsigned int uStack_6dc;
  int iStack_6d0;
  unsigned int uStack_6c8;
  int iStack_6c4;
  unsigned char auStack_680 [16];
  unsigned int uStack_670;
  unsigned int *puStack_668;
  
  uVar8 = ZEXT48(&stack0x00000000);
  uStack_6dc = *(unsigned int *)(param_1 + 0x2c);
  iStack_6d0 = *param_2;
  uStack_6e0 = *(unsigned int *)(param_1 + 0x28);
  iStack_6c4 = param_2[3];
  puStack_668 = &uStack_6e0;
  if (0 < (int)param_4) {
    vectorSplatImmediateSignedWord128(0);
    param_3 = param_3 + 0x20;
    do {
      pfVar7 = (float *)(param_3 - 0x10U & 0xfffffff0);
      fVar15 = *pfVar7;
      fVar16 = pfVar7[1];
      fVar17 = pfVar7[2];
      fVar18 = pfVar7[3];
      piVar1 = *(int **)(param_3 + -0x20);
      piVar2 = *(int **)(param_3 + -0x1c);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar14, &_vt0, 16); }
      iVar3 = *piVar1;
      iVar4 = *piVar2;
      pfVar7 = (float *)((unsigned int)(auStack_680 + (int)in_r0) & 0xfffffff0);
      *pfVar7 = in_register_000100b0;
      pfVar7[1] = in_register_000100b4;
      pfVar7[2] = in_register_000100b8;
      pfVar7[3] = in_vr11;{ V16 _vt1 = vectorReciprocalSquareRootEstimateFloatingPoint(in_vs38); memcpy(auVar12, &_vt1, 16); }{ V16 _vt2 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,in_vs42,in_vs45); memcpy(auVar13, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar12); memcpy(auVar12, &_vt3, 16); }
      in_register_000100b0 = fVar15 * fVar15;
      in_register_000100b4 = fVar16 * fVar16;
      in_register_000100b8 = fVar17 * fVar17;
      in_vr11 = fVar18 * fVar18;{ V16 _vt4 = vectorNegativeMultiplySubtractFloatingPoint(in_vs41,auVar14,in_vs45); memcpy(auVar13, &_vt4, 16); }{ V16 _vt5 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar12); memcpy(in_vs32, &_vt5, 16); }{ V16 _vt6 = vectorConditionalSelect(in_vs32,in_vs44,in_vs40); memcpy(in_vs45, &_vt6, 16); }
      uVar6 = storeVectorElementWordIndexed(in_vs37,0,uVar8 - 0x730);
      *(unsigned int *)(uVar8 - 0x730) = uVar6;
      uStack_6c8 = *(unsigned int *)(param_1 + 0x20);
      uStack_670 = *(unsigned int *)(param_1 + 0x24);
      (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(iVar3 + 0xc) + 0xd) * 0x20 + *(int *)(iVar4 + 0xc) +
                                  *param_2) * 0x14 + *param_2 + 0x9ac))
                (piVar1,piVar2,uVar8 - 0x6d0,uVar8 - 0x700,
                 -(unsigned __int64)(*(int *)(param_3 + 0x1c) != 0) & uVar8 - 0x720);
      *(unsigned int *)(param_3 + 0x18) = 0;
      *(unsigned int *)(param_3 + 0x24) = 0;
      if (*(int *)(param_3 + 0x1c) != 0) {
        uVar5 = *(unsigned int *)(param_3 + 0x24);
        if (0 < (int)uVar5) {
          lVar9 = (unsigned __int64)uVar5 + ((unsigned __int64)uVar5 & 0x7fffffff) * 2;
          puVar10 = (unsigned int *)(*(int *)(param_3 + 0x1c) + -4);
          lVar11 = uVar8 - 0x364;
          do {
            iVar3 = (int)lVar11;
            puVar10[1] = *(unsigned int *)(iVar3 + 4);
            puVar10[2] = *(unsigned int *)(iVar3 + 8);
            puVar10[3] = *(unsigned int *)(iVar3 + 0xc);
            lVar11 = lVar11 + 0x10;
            puVar10 = puVar10 + 4;
            *puVar10 = *(unsigned int *)lVar11;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      param_4 = param_4 + -1;
      param_3 = param_3 + 0x50;
    } while (param_4 != 0);
  }
  return;
}

