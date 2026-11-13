typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_88;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82E127F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_84;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D0CA60(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  float fVar10;
  unsigned __int64 in_r0;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  __int64 lVar15;
  int iVar16;
  int iVar17;
  __int64 lVar18;
  unsigned int *puVar19;
  int *piVar20;
  double dVar21;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int *puStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned char auStack_88 [4];
  unsigned int uStack_84;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  iVar16 = (int)in_r0;
  iVar11 = *(int *)(*(int *)(param_1 + 8) + 0x1a8);
  if (iVar11 == 2) {
    uVar1 = param_3[1];
    puStack_98 = (unsigned int *)0x0;
    uStack_94 = 0;
    uStack_90 = 0x80000000;
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x28);
    iVar11 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar15 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar13 = (int)lVar15;
    if ((int)(param_3[2] & 0x3fffffff) < iVar13) {
      lVar18 = ((unsigned __int64)param_3[2] & 0x3fffffff) << 1;
      if (iVar13 < (int)lVar18) {
        lVar15 = lVar18;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),param_3,lVar15,0x10);
    }
    iVar11 = uVar3 * 0x10 + *param_3;
    param_3[1] = param_3[1] + uVar2;
    lVar18 = ((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x28) - 2 & 0x7fffffff) * 2;
    iVar13 = fn_82CE5410();
    uVar2 = param_3[4];
    lVar15 = (unsigned __int64)uVar2 + lVar18;
    iVar14 = (int)lVar15;
    if ((int)(param_3[5] & 0x3fffffff) < iVar14) {
      lVar9 = ((unsigned __int64)param_3[5] & 0x3fffffff) << 1;
      if (iVar14 < (int)lVar9) {
        lVar15 = lVar9;
      }
      fn_82CE6310(*(unsigned int *)(iVar13 + 0x10),param_3 + 3,lVar15,0x10);
    }
    puVar19 = (unsigned int *)(uVar2 * 0x10 + param_3[3]);
    param_3[4] = (int)lVar18 + param_3[4];
    iVar13 = *(int *)(*(int *)(param_1 + 8) + 0x28);
    iVar14 = fn_82CE5410();
    if ((int)(uStack_90 & 0x3fffffff) < iVar13) {
      iVar17 = (uStack_90 & 0x3fffffff) << 1;
      if (iVar17 <= iVar13) {
        iVar17 = iVar13;
      }
      fn_82CE6310(*(unsigned int *)(iVar14 + 0x10),&puStack_98,iVar17,4);
    }
    fVar10 = lbl_821AAD20;
    for (puVar5 = *(unsigned int **)(*(int *)(param_1 + 8) + 0x24); puVar5 != (unsigned int *)0x0;
        puVar5 = (unsigned int *)*puVar5) {
      puStack_98[uStack_94] = uStack_94 + uVar1;
      uStack_94 = uStack_94 + 1;
      if (param_2 != 0) {
        fStack_64 = fVar10;
        fStack_6c = (float)(__int64)(int)puVar5[9];
        fStack_68 = (float)(__int64)(int)puVar5[10];
        fStack_70 = (float)(__int64)(int)puVar5[8];
        puVar6 = (unsigned int *)((int)&fStack_70 + iVar16 & 0xfffffff0);
        uVar12 = puVar6[1];
        uVar22 = puVar6[2];
        uVar23 = puVar6[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs44,in_vs45); memcpy(in_vs32, &_vt0, 16); }
        puVar7 = (unsigned int *)(iVar16 + iVar11 & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar12;
        puVar7[2] = uVar22;
        puVar7[3] = uVar23;
      }
      else {
        puVar6 = (unsigned int *)((unsigned int)(puVar5 + 4) & 0xfffffff0);
        uVar12 = puVar6[1];
        uVar22 = puVar6[2];
        uVar23 = puVar6[3];
        puVar7 = (unsigned int *)(iVar16 + iVar11 & 0xfffffff0);
        *puVar7 = *puVar6;
        puVar7[1] = uVar12;
        puVar7[2] = uVar22;
        puVar7[3] = uVar23;
      }
      iVar11 = iVar11 + 0x10;
    }
    if (1 < (int)(uStack_94 - 1)) {
      lVar15 = (unsigned __int64)uStack_94 - 2;
      iVar11 = 4;
      do {
        *puVar19 = *puStack_98;
        puVar19[1] = *(unsigned int *)((int)puStack_98 + iVar11);
        puVar19[2] = *(unsigned int *)((int)puStack_98 + iVar11 + 4);
        puVar19[4] = *puStack_98;
        puVar19[5] = *(unsigned int *)((int)puStack_98 + iVar11 + 4);
        puVar5 = (unsigned int *)((int)puStack_98 + iVar11);
        iVar11 = iVar11 + 4;
        puVar19[6] = *puVar5;
        puVar19 = puVar19 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    iVar11 = fn_82CE5410();
    uStack_94 = 0;
    if ((uStack_90 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar11 + 0x10) + 0x10))
                (*(int **)(iVar11 + 0x10),puStack_98,uStack_90 & 0x3fffffff,4);
    }
  }
  else if (iVar11 == 3) {
    uVar1 = param_3[1];
    fn_82E127F8(auStack_88);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x28);
    iVar11 = fn_82CE5410();
    uVar3 = param_3[1];
    lVar15 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar16 = (int)lVar15;
    if ((int)(param_3[2] & 0x3fffffff) < iVar16) {
      lVar18 = ((unsigned __int64)param_3[2] & 0x3fffffff) << 1;
      if (iVar16 < (int)lVar18) {
        lVar15 = lVar18;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),param_3,lVar15,0x10);
    }
    lVar18 = ((unsigned __int64)uVar3 & 0xfffffff) * 0x10 + (unsigned __int64)*param_3;
    param_3[1] = param_3[1] + uVar2;
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x40);
    iVar11 = fn_82CE5410();
    uVar3 = param_3[4];
    lVar15 = (unsigned __int64)uVar3 + (unsigned __int64)uVar2;
    iVar16 = (int)lVar15;
    if ((int)(param_3[5] & 0x3fffffff) < iVar16) {
      lVar9 = ((unsigned __int64)param_3[5] & 0x3fffffff) << 1;
      if (iVar16 < (int)lVar9) {
        lVar15 = lVar9;
      }
      fn_82CE6310(*(unsigned int *)(iVar11 + 0x10),param_3 + 3,lVar15,0x10);
    }
    uVar4 = param_3[3];
    param_3[4] = param_3[4] + uVar2;
    uVar12 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x28);
    iVar11 = fn_82CE5410();
    lVar15 = fn_82CEAB00(auStack_88,*(unsigned int *)(iVar11 + 0x10),uVar12);
    piVar20 = *(int **)(*(int *)(param_1 + 8) + 0x24);
    if (piVar20 != (int *)0x0) {
      dVar21 = (double)lbl_821AAD20;
      do {
        uVar8 = (unsigned __int64)uStack_84;
        iVar11 = fn_82CE5410(lVar15);
        lVar15 = fn_82CEA160(auStack_88,*(unsigned int *)(iVar11 + 0x10),piVar20,
                                   (uVar8 & 0x7fffffff) + (unsigned __int64)uVar1);
        iVar11 = (int)in_r0;
        if (param_2 != 0) {
          fStack_64 = (float)dVar21;
          fStack_6c = (float)(__int64)piVar20[9];
          fStack_68 = (float)(__int64)piVar20[10];
          fStack_70 = (float)(__int64)piVar20[8];
          puVar19 = (unsigned int *)((int)&fStack_70 + iVar11 & 0xfffffff0);
          uVar12 = puVar19[1];
          uVar22 = puVar19[2];
          uVar23 = puVar19[3];{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs44,in_vs45); memcpy(in_vs32, &_vt1, 16); }
          puVar5 = (unsigned int *)(iVar11 + (int)lVar18 & 0xfffffff0);
          *puVar5 = *puVar19;
          puVar5[1] = uVar12;
          puVar5[2] = uVar22;
          puVar5[3] = uVar23;
          lVar15 = lVar18;
        }
        else {
          puVar19 = (unsigned int *)((unsigned int)(piVar20 + 4) & 0xfffffff0);
          uVar12 = puVar19[1];
          uVar22 = puVar19[2];
          uVar23 = puVar19[3];
          puVar5 = (unsigned int *)(iVar11 + (int)lVar18 & 0xfffffff0);
          *puVar5 = *puVar19;
          puVar5[1] = uVar12;
          puVar5[2] = uVar22;
          puVar5[3] = uVar23;
        }
        piVar20 = (int *)*piVar20;
        lVar18 = lVar18 + 0x10;
      } while (piVar20 != (int *)0x0);
    }
    piVar20 = *(int **)(*(int *)(param_1 + 8) + 0x3c);
    if (piVar20 != (int *)0x0) {
      puVar19 = (unsigned int *)(uVar3 * 0x10 + uVar4 + -4);
      do {
        uVar12 = fn_82CEA280(auStack_88,piVar20[2],0xffffffffffffffff);
        puVar19[1] = uVar12;
        uVar12 = fn_82CEA280(auStack_88,piVar20[3],0xffffffffffffffff);
        puVar19[2] = uVar12;
        lVar15 = fn_82CEA280(auStack_88,piVar20[4],0xffffffffffffffff);
        puVar19[3] = (int)lVar15;
        puVar19 = puVar19 + 4;
        *puVar19 = 0xffffffff;
        piVar20 = (int *)*piVar20;
      } while (piVar20 != (int *)0x0);
    }
    iVar11 = fn_82CE5410(lVar15);
    fn_82CEA4B8(auStack_88,*(unsigned int *)(iVar11 + 0x10));
    fn_82BA02A8(auStack_88);
  }
  return;
}

