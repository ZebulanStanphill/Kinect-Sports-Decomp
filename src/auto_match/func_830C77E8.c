typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern int fn_830C6D68();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


unsigned __int64 fn_830C77E8(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned short uVar9;
  unsigned short uVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  bool bVar13;
  unsigned int uVar14;
  __int64 lVar15;
  unsigned int *puVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uStack_70;
  short sStack_6c;
  short sStack_6a;
  short sStack_68;
  short sStack_66;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  uVar19 = (unsigned __int64)*(unsigned short *)(param_1 + 0x32);
  uVar1 = *param_6;
  uVar18 = (unsigned __int64)uVar1;
  iVar2 = *(int *)(param_1 + 0x15c);
  iVar6 = (int)(unsigned int)*(unsigned short *)(param_1 + 0x32) >> 1;
  if (param_4 != 0) {
    bVar13 = false;
    if (*(int *)(*(int *)(param_1 + 0x518) + param_4 * 4) == 0) goto LAB_830c7838;
  }
  bVar13 = true;
LAB_830c7838:
  uVar14 = 0;
  if (param_5 != 0) {
    uVar14 = fn_830C6D68(param_1,*(unsigned int *)(param_1 + 0x150));
  }
  uStack_60 = 0;
  lVar15 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  if (param_3 != 0) {
    uVar17 = uVar18 - 1;
    if ((*(unsigned int *)(param_2 + -0x18) & 0x20000) != 0) {
      if ((*(unsigned int *)(param_2 + -0x18) & 0x700) < 0x200) {
        uStack_70 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
      }
      else {
        uVar3 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        uVar4 = *(unsigned int *)((int)((uVar17 + uVar19 & 0xffffffff) << 2) + iVar2);
        sStack_6a = (short)uVar4;
        sStack_6c = (short)((unsigned int)uVar4 >> 0x10);
        sStack_68 = (short)((unsigned int)uVar3 >> 0x10);
        sStack_66 = (short)uVar3;
        uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                             (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
      }
      lVar15 = 1;
      uStack_60 = uStack_70;
    }
  }
  if (!bVar13) {
    uVar17 = uVar18 - uVar19;
    puVar16 = (unsigned int *)(param_2 + iVar6 * -0x18);
    if ((*puVar16 & 0x20000) != 0) {
      if ((*puVar16 & 0x700) < 0x200) {
        uStack_70 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
      }
      else {
        uVar3 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        uVar4 = *(unsigned int *)((int)((uVar17 - uVar19 & 0xffffffff) << 2) + iVar2);
        sStack_66 = (short)uVar4;
        sStack_6a = (short)uVar3;
        sStack_6c = (short)((unsigned int)uVar3 >> 0x10);
        sStack_68 = (short)((unsigned int)uVar4 >> 0x10);
        uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                             (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
      }
      lVar5 = lVar15 << 2;
      lVar15 = lVar15 + 1;
      *(unsigned int *)((int)&uStack_60 + (int)lVar5) = uStack_70;
    }
    if (iVar6 != 1) {
      if (param_3 == iVar6 + -1) {
        uVar17 = uVar17 - 1;
        puVar16 = puVar16 + -6;
      }
      else {
        uVar17 = uVar17 + 2;
        puVar16 = puVar16 + 6;
      }
      if ((*puVar16 & 0x20000) != 0) {
        if ((*puVar16 & 0x700) < 0x200) {
          uStack_70 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
        }
        else {
          uVar3 = *(unsigned int *)((int)((uVar17 & 0xffffffff) << 2) + iVar2);
          uVar4 = *(unsigned int *)((int)((uVar17 - uVar19 & 0xffffffff) << 2) + iVar2);
          sStack_66 = (short)uVar4;
          sStack_6a = (short)uVar3;
          sStack_6c = (short)((unsigned int)uVar3 >> 0x10);
          sStack_68 = (short)((unsigned int)uVar4 >> 0x10);
          uStack_70 = CONCAT22((short)((int)sStack_6c + (int)sStack_68 + 1 >> 1),
                               (short)((int)sStack_6a + (int)sStack_66 + 1 >> 1));
        }
        lVar5 = lVar15 << 2;
        lVar15 = lVar15 + 1;
        *(unsigned int *)((int)&uStack_60 + (int)lVar5) = uStack_70;
      }
    }
  }
  if ((unsigned int)lVar15 < 2) {
    uStack_60 = -(unsigned int)(lVar15 == 1) & uStack_60;
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((unsigned short)uStack_60)) & ((unsigned __int64)0xFFFF)) << 16));
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFF) << 0))) | ((((unsigned __int64)((unsigned short)(uStack_60 >> 0x10))) & ((unsigned __int64)0xFFFF)) << 0));
  }
  else {
    uVar10 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_5c) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_60) >> 16) & 0xFFFF)) >> 0x10);
    uVar9 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_5c) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_58) >> 16) & 0xFFFF)) >> 0x10) ^
            uVar10;
    uVar10 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_58) >> 16) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_60) >> 16) & 0xFFFF)) >> 0x10) ^
             uVar10;
    uVar12 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_5c) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_60) >> 0) & 0xFFFF)) >> 0x10);
    uVar11 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_5c) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar12;
    uVar12 = (unsigned short)((unsigned int)((int)(short)(((unsigned __int64)(uStack_58) >> 0) & 0xFFFF) - (int)(short)(((unsigned __int64)(uStack_60) >> 0) & 0xFFFF)) >> 0x10) ^
             uVar12;
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((((unsigned __int64)(uStack_58) >> 16) & 0xFFFF) & ~((short)(uVar9 | uVar10) >> 0xf) |
         (short)uVar10 >> 0xf & (((unsigned __int64)(uStack_60) >> 16) & 0xFFFF) | (short)uVar9 >> 0xf & (((unsigned __int64)(uStack_5c) >> 16) & 0xFFFF))) & ((unsigned __int64)0xFFFF)) << 16));
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFF) << 0))) | ((((unsigned __int64)((((unsigned __int64)(uStack_58) >> 0) & 0xFFFF) & ~((short)(uVar11 | uVar12) >> 0xf) |
         (short)uVar12 >> 0xf & (((unsigned __int64)(uStack_60) >> 0) & 0xFFFF) | (short)uVar11 >> 0xf & (((unsigned __int64)(uStack_5c) >> 0) & 0xFFFF))) & ((unsigned __int64)0xFFFF)) << 0));
  }
  uStack_70 = CONCAT22(((short)((unsigned int)uVar14 >> 0x10) + (((unsigned __int64)(uStack_70) >> 0) & 0xFFFF) + *(short *)(param_1 + 0x40)
                       & *(unsigned short *)(param_1 + 0x44)) - *(short *)(param_1 + 0x40),
                       ((((unsigned __int64)(uStack_70) >> 16) & 0xFFFF) + *(short *)(param_1 + 0x3e) + (short)uVar14 &
                       *(unsigned short *)(param_1 + 0x42)) - *(short *)(param_1 + 0x3e));
  puVar7 = (unsigned int *)((int)((uVar18 + uVar19 & 0xffffffff) << 2) + iVar2);
  puVar8 = (unsigned int *)(uVar1 * 4 + iVar2);
  puVar7[1] = uStack_70;
  *puVar7 = uStack_70;
  puVar8[1] = uStack_70;
  *puVar8 = uStack_70;
  return 0;
}

