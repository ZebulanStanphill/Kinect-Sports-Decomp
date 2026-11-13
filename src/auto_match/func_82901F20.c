typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64
fn_82901F20(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             __int64 param_6,unsigned int param_7,int *param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar5;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  
  lVar9 = (__int64)(int)param_3 * (__int64)(int)param_4;
  if (lVar9 != 0) {
    if ((param_2 == 2) && ((param_5 & 0x400) == 0)) {
      bVar3 = true;
      uVar4 = param_4;
      param_4 = param_3;
    }
    else {
      bVar3 = false;
      uVar4 = param_3;
    }
    uVar2 = (param_4 + 3 & 0xffffffff) >> 2;
    iVar10 = (int)uVar2 * (int)uVar4;
    if (param_7 < *(unsigned int *)(*(int *)(param_1 + 8) + 4)) {
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + param_7 * 4);
    }
    else {
      iVar8 = 0;
    }
    if (iVar8 == 0) {
      return 0xffffffff80004005;
    }
    uVar1 = *(unsigned int *)(iVar8 + 0x10);
    iVar6 = uVar1 + iVar10;
    *(int *)(iVar8 + 0x10) = iVar6;
    if ((*(unsigned int *)(iVar8 + 4) & 0x40) != 0) {
      *(int *)(iVar8 + 8) = iVar6;
    }
    if ((uVar4 & 0xffffffff) != 0) {
      lVar15 = 0;
      lVar14 = 0;
      uVar11 = uVar4;
      lVar12 = param_6;
      do {
        uVar16 = 0;
        if ((param_4 & 0xffffffff) != 0) {
          lVar13 = lVar12;
          uVar17 = param_4;
          do {
            if (bVar3) {
              uVar7 = *(unsigned int *)lVar13;
            }
            else {
              uVar7 = *(unsigned int *)((int)((lVar14 + uVar16 & 0xffffffff) << 2) + (int)param_6);
            }
            if (uVar7 < *(unsigned int *)(*(int *)(param_1 + 8) + 8)) {
              iVar8 = *(int *)(uVar7 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
            }
            else {
              iVar8 = 0;
            }
            if (iVar8 != 0) {
              uVar7 = (unsigned int)uVar16 & 3;
              *(unsigned int *)(iVar8 + 4) = param_7;
              *(unsigned int *)(iVar8 + 0x10) = uVar7;
              lVar5 = ((uVar16 & 0xffffffff) >> 2) + lVar15 + (unsigned __int64)uVar1;
              *(unsigned int *)(iVar8 + 0x68) = in_stack_00000054;
              *(int *)(iVar8 + 0xc) = (int)lVar5;
              *(unsigned int *)(iVar8 + 0x70) =
                   (int)((lVar5 - (unsigned __int64)uVar1 & 0xffffffff) << 2) + *param_8 + uVar7;
            }
            uVar16 = uVar16 + 1;
            lVar13 = (uVar4 & 0x3fffffff) * 4 + lVar13;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + 4;
        lVar14 = lVar14 + param_4;
        lVar15 = lVar15 + uVar2;
      } while (uVar11 != 0);
    }
    *param_8 = iVar10 * 4 + *param_8;
  }
  if (in_stack_0000005c != (unsigned int *)0x0) {
    *in_stack_0000005c = (int)lVar9;
  }
  return 0;
}

