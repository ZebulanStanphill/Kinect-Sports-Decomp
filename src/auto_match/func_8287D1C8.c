#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern unsigned int iStack00000014;
extern unsigned int stack0x00000010;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_8287D1C8(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned __int64 *puVar10;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  int iVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  int iVar18;
  unsigned __int64 uVar19;
  int iStack00000014;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 auStack_50 [10];
  
  iStack00000014 = (int)param_1;
  uVar16 = param_1 & 0xffffffff;
  lVar17 = param_2 - uVar16;
  lVar7 = param_3 - uVar16;
  iVar18 = (int)lVar17;
  lVar8 = lVar17;
  lVar13 = lVar7;
  lVar14 = lVar7;
  if (iVar18 != 0) {
    do {
      lVar14 = lVar8;
      lVar8 = lVar13 - (__int64)((int)lVar13 / (int)lVar14) * (__int64)(int)lVar14;
      lVar13 = lVar14;
    } while (lVar8 != 0);
  }
  if (((int)lVar14 < (int)lVar7) && (0 < (int)lVar14)) {
    do {
      uVar15 = uVar16 + lVar14;
      uStack_68 = ((((unsigned __int64)(uStack_68)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(param_1 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      uVar5 = (((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF);
      uStack_68 = CONCAT44((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)uVar15);
      if ((uVar15 + lVar17 & 0xffffffff) == (unsigned __int64)param_3) {
        puVar10 = (unsigned __int64 *)&stack0x00000010;
      }
      else {
        puVar10 = &uStack_60;
        uStack_70 = CONCAT44((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)(uVar15 + lVar17));
        uStack_60 = uStack_70;
      }
      uVar6 = *puVar10 & 0xffffffff;
      uVar9 = *puVar10;
      do {
        uVar19 = uVar9;
        uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(uVar19 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        uVar9 = uVar6 >> 2;
        if (*(unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8) <= uVar9) {
          uVar9 = uVar9 - *(unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
        }
        uVar11 = (((unsigned __int64)(uStack_68) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar11) {
          uVar11 = uVar11 - *(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar3 = ((((unsigned __int64)(uStack_68) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar4 = (int)((uVar6 & 3) << 2);
        iVar1 = *(int *)(*(int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar9 & 0xffffffff) << 2));
        iVar12 = *(int *)(*(int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + uVar11 * 4);
        uVar2 = *(unsigned int *)(iVar12 + iVar3);
        *(unsigned int *)(iVar12 + iVar3) = *(unsigned int *)(iVar1 + iVar4);
        iVar12 = param_3 - (int)uVar6;
        *(unsigned int *)(iVar1 + iVar4) = uVar2;
        if (iVar18 < iVar12) {
          puVar10 = &uStack_58;
          uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar6 + iVar18);
          uStack_58 = uStack_70;
        }
        else {
          puVar10 = auStack_50;
          uStack_70 = CONCAT44(uVar5,(iStack00000014 - iVar12) + iVar18);
          auStack_50[0] = uStack_70;
        }
        uVar6 = *puVar10 & 0xffffffff;
        uVar9 = *puVar10;
        uStack_68 = uVar19;
      } while (uVar6 != (uVar15 & 0xffffffff));
      lVar14 = lVar14 + -1;
    } while (0 < lVar14);
  }
  return;
}

