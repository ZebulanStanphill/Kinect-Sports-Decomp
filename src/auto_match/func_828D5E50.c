#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_50;
extern int fn_828D4E48();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;


void fn_828D5E50(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 *puVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 auStack_50 [10];
  
  uStack00000010 = ((((unsigned __int64)(uStack00000010)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_1)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  iVar1 = (((unsigned __int64)(uStack00000010) >> 32) & 0xFFFFFFFF);
  uVar12 = param_1 & 0xffffffff;
  lVar13 = (param_2 & 0xffffffff) - uVar12;
  lVar4 = (param_3 & 0xffffffff) - uVar12;
  iVar14 = (int)lVar13;
  lVar5 = lVar13;
  lVar9 = lVar4;
  lVar10 = lVar4;
  if (iVar14 != 0) {
    do {
      lVar10 = lVar5;
      lVar5 = lVar9 - (__int64)((int)lVar9 / (int)lVar10) * (__int64)(int)lVar10;
      lVar9 = lVar10;
    } while (lVar5 != 0);
  }
  if (((int)lVar10 < (int)lVar4) &&
     (uStack00000010 = param_1, uStack00000018 = param_2, uStack00000020 = param_3, 0 < (int)lVar10)
     ) {
    do {
      uVar11 = uVar12 + lVar10;
      uStack_68 = ((((unsigned __int64)(uStack_68)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(param_1 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      uVar2 = (((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF);
      uStack_68 = CONCAT44((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)uVar11);
      if ((uVar11 + lVar13 & 0xffffffff) == (param_3 & 0xffffffff)) {
        puVar8 = &stack0x00000010;
      }
      else {
        puVar8 = &uStack_60;
        uStack_70 = CONCAT44((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF),(int)(uVar11 + lVar13));
        uStack_60 = uStack_70;
      }
      uVar16 = *puVar8 & 0xffffffff;
      uVar3 = *puVar8;
      do {
        uVar15 = uVar3;
        uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(uVar15 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        uVar3 = uVar16;
        if (*(unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8) <= uVar16) {
          uVar3 = uVar16 - *(unsigned int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
        }
        uVar6 = uStack_68 & 0xffffffff;
        if (*(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar6) {
          uVar6 = uVar6 - *(unsigned int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
        }
        fn_828D4E48(*(unsigned int *)
                       (*(int *)((((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar6 & 0xffffffff) << 2)),
                      *(unsigned int *)
                       (*(int *)((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4) + (int)((uVar3 & 0xffffffff) << 2)));
        iVar7 = (int)param_3 - (int)uVar16;
        if (iVar14 < iVar7) {
          puVar8 = &uStack_58;
          uStack_70 = CONCAT44((((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF),(int)uVar16 + iVar14);
          uStack_58 = uStack_70;
        }
        else {
          puVar8 = auStack_50;
          uStack_70 = CONCAT44(uVar2,(iVar1 - iVar7) + iVar14);
          auStack_50[0] = uStack_70;
        }
        uVar16 = *puVar8 & 0xffffffff;
        uVar3 = *puVar8;
        uStack_68 = uVar15;
      } while (uVar16 != (uVar11 & 0xffffffff));
      lVar10 = lVar10 + -1;
    } while (0 < lVar10);
  }
  return;
}

