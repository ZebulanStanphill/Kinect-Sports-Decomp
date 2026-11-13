typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B41560();


unsigned __int64 fn_82B41870(unsigned int param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5,
                       int param_6,int param_7,int param_8)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  int iVar14;
  unsigned __int64 uVar12;
  int iVar15;
  unsigned int *puVar16;
  __int64 lVar13;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  int in_stack_00000054;
  
  iVar14 = (param_1 & 0x7f800000) + 0xc0800000;
  uVar3 = iVar14 >> 0x17;
  if ((int)uVar3 < 0) {
    if ((int)uVar3 < -0x19) {
      uVar12 = 0;
    }
    else {
      uVar2 = iVar14 >> 0x1f;
      uVar12 = (unsigned __int64)
               ((int)(param_1 & 0x7fffff | 0x800000) >> (((uVar3 ^ uVar2) - uVar2) - 1 & 0x3f));
    }
  }
  else {
    uVar12 = (unsigned __int64)((param_1 & 0x7fffff | 0x800000) << (uVar3 + 1 & 0x3f));
  }
  if (in_stack_00000054 == 0) {
    uVar3 = param_1 & 0x7fffffff;
    if (param_4 == 0x17) {
      uVar6 = (unsigned __int64)param_1 & 0x80000000;
      if (uVar3 < 0x4016cbe4) {
        if (0x3fc90fda < uVar3) {
          uVar12 = uVar12 - 0x1921fb5;
          goto LAB_82b41978;
        }
        if (0x3f490fda < uVar3) {
          lVar10 = 0x1921fb5;
          goto LAB_82b41974;
        }
        iVar14 = 0x17;
      }
      else {
        lVar10 = 0x3243f6a;
LAB_82b419c4:
        uVar12 = lVar10 - uVar12;
        iVar14 = 0x17;
      }
    }
    else if (uVar3 < 0x4016cbe4) {
      if (uVar3 < 0x3fc90fdb) {
        uVar6 = 0;
        if (0x3f490fda < uVar3) {
          lVar10 = 0x1921fb5;
          goto LAB_82b419c4;
        }
        uVar12 = uVar12 | 0x1000000;
        iVar14 = 0x18;
      }
      else {
        uVar12 = uVar12 - 0x1921fb5;
        uVar6 = 0xffffffff80000000;
        iVar14 = 0x17;
      }
    }
    else {
      uVar6 = 0xffffffff80000000;
      lVar10 = 0x3243f6a;
LAB_82b41974:
      uVar12 = lVar10 - uVar12;
LAB_82b41978:
      uVar12 = uVar12 | 0x1000000;
      iVar14 = 0x18;
    }
  }
  else {
    uVar6 = 0;
    iVar14 = param_4;
  }
  if ((param_1 & 0x7f800000) == 0 || 0x40490fda < (param_1 & 0x7fffffff)) {
    if (param_4 != 0x17) {
      bVar4 = false;
      bVar5 = true;
      goto LAB_82b41a38;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar5 = false;
LAB_82b41a38:
  uVar9 = uVar12 & ((unsigned __int64)*(unsigned int *)(param_3 + 0x78) ^ 0x1ffffff);
  uVar3 = *(unsigned int *)(param_3 + 0x3c);
  iVar1 = (int)(*(unsigned int *)(param_3 + 0x78) & (unsigned int)uVar12) >> (*(unsigned int *)(param_3 + 0x7c) & 0x3f);
  iVar8 = (int)uVar9;
  if ((int)uVar3 < 0) {
    uVar12 = (unsigned __int64)
             (unsigned int)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f));
  }
  else {
    iVar15 = 0;
    uVar12 = uVar9;
    if (0 < (int)uVar3) {
      do {
        iVar15 = iVar15 + 1;
        uVar12 = uVar12 >> 1 | uVar12 & 1;
      } while (iVar15 < (int)uVar3);
    }
  }
  uVar3 = *(unsigned int *)(param_3 + 0x40);
  if ((int)uVar3 < 0) {
    uVar11 = (unsigned __int64)
             (unsigned int)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f));
  }
  else {
    iVar15 = 0;
    uVar11 = uVar9;
    if (0 < (int)uVar3) {
      do {
        iVar15 = iVar15 + 1;
        uVar11 = uVar11 >> 1 | uVar11 & 1;
      } while (iVar15 < (int)uVar3);
    }
  }
  uVar3 = *(unsigned int *)(param_3 + 0x44);
  if ((int)uVar3 < 0) {
    uVar9 = (unsigned __int64)(unsigned int)(iVar8 << ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f) & 0x3f))
    ;
  }
  else {
    iVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 >> 1 | uVar9 & 1;
      } while (iVar8 < (int)uVar3);
    }
  }
  iVar8 = iVar1 * 4;
  if (in_stack_00000054 == 0) {
    uVar7 = 0;
    uVar18 = 0;
    uVar17 = 0;
  }
  else {
    puVar16 = (unsigned int *)(iVar1 * 0xc + in_stack_00000054);
    uVar7 = (unsigned __int64)*puVar16;
    uVar18 = (unsigned __int64)puVar16[1];
    uVar17 = (unsigned __int64)puVar16[2];
  }
  if (iVar14 == 0x17) {
    uVar7 = -uVar7;
  }
  lVar13 = 0;
  lVar10 = 0;
  if (param_4 == 0x18 || param_4 == 0x17) {
    lVar13 = *(unsigned int *)(iVar8 + param_7) + uVar18;
    lVar10 = *(unsigned int *)(iVar8 + param_8) + uVar17;
    if (iVar14 != 0x17) {
      lVar10 = *(unsigned int *)(iVar8 + param_8) - uVar17;
    }
  }
  lVar10 = fn_82B41560(*(unsigned int *)(iVar8 + param_5),*(unsigned int *)(iVar8 + param_6) + uVar7,lVar13,
                         lVar10,uVar12,uVar11,uVar9,param_3);
  iVar14 = (int)(lVar10 >> 0xc);
  uVar9 = (unsigned __int64)iVar14;
  uVar12 = 0x7f;
  if (uVar9 == 0) {
    uVar12 = 0x67;
  }
  else if ((lVar10 >> 0xc & 0x8000000U) == 0) {
    do {
      uVar11 = (uVar9 & 0xffffffff) << 1;
      uVar9 = uVar11 & 0xfffffffe;
      iVar14 = (int)uVar9;
      uVar12 = uVar12 - 1;
    } while ((uVar11 & 0x8000000) == 0);
  }
  else {
    bVar5 = true;
  }
  if (bVar4) {
    uVar6 = 0;
  }
  else if (bVar5) {
    uVar6 = uVar6 | 0x3f800000;
  }
  else {
    uVar6 = (uVar12 & 0xff) << 0x17 | (__int64)(iVar14 >> 4) & 0x7fffffU | uVar6;
  }
  return uVar6;
}

