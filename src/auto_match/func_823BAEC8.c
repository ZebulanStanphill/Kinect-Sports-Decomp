#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_58;
extern int fn_823BADB0();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_823BAEC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  __int64 lVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 auStack_58 [11];
  
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar2 = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar1 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uVar14 = param_1 & 0xffffffff;
  lVar9 = (param_2 & 0xffffffff) - uVar14;
  lVar6 = (param_3 & 0xffffffff) - uVar14;
  iVar10 = (int)lVar9;
  lVar5 = lVar9;
  lVar12 = lVar6;
  lVar13 = lVar6;
  if (iVar10 != 0) {
    do {
      lVar13 = lVar5;
      lVar5 = lVar12 - (__int64)((int)lVar12 / (int)lVar13) * (__int64)(int)lVar13;
      lVar12 = lVar13;
    } while (lVar5 != 0);
  }
  if (((int)lVar13 < (int)lVar6) &&
     (uStack00000010 = param_1, uStack00000018 = param_2, uStack00000020 = param_3, 0 < (int)lVar13)
     ) {
    do {
      uVar11 = uVar14 + lVar13;
      uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(param_1 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      uVar3 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
      uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar11);
      uVar4 = uStack_70;
      if ((uVar11 + lVar9 & 0xffffffff) == (param_3 & 0xffffffff)) {
        puVar8 = &stack0x00000010;
      }
      else {
        puVar8 = &uStack_68;
        uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)(uVar11 + lVar9));
        uStack_68 = uStack_70;
      }
      uVar16 = *puVar8 & 0xffffffff;
      uVar15 = *puVar8;
      do {
        fn_823BADB0(uVar4,uVar15);
        iVar7 = iVar2 - (int)uVar16;
        if (iVar10 < iVar7) {
          puVar8 = &uStack_60;
          uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)(uVar15 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
          uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar16 + iVar10);
          uStack_60 = uStack_70;
        }
        else {
          puVar8 = auStack_58;
          uStack_70 = CONCAT44(uVar3,(iVar1 - iVar7) + iVar10);
          auStack_58[0] = uStack_70;
        }
        uVar16 = *puVar8 & 0xffffffff;
        uVar4 = uVar15;
        uVar15 = *puVar8;
      } while (uVar16 != (uVar11 & 0xffffffff));
      lVar13 = lVar13 + -1;
    } while (0 < lVar13);
  }
  return;
}

