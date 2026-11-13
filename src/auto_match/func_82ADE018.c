typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE9F0();


void fn_82ADE018(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,char param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  bool bVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 *puVar8;
  unsigned int uVar11;
  __int64 lVar9;
  __int64 lVar10;
  int *piVar12;
  unsigned __int64 *puVar14;
  unsigned __int64 uVar13;
  __int64 lVar15;
  
  iVar3 = (int)param_2;
  uVar1 = *(unsigned int *)(iVar3 + 0xc0);
  if ((param_5 & 0xffffffff) == ((unsigned __int64)uVar1 & 7)) {
    *(unsigned int *)(iVar3 + 0xc0) = uVar1 & 0xfffffff8 | uVar1 + 1 & 7;
    if ((param_6 == '\0') &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x2a8) + (int)((param_4 & 0xffffffff) << 2)), iVar2 != 0
       )) {
      *(int *)((int)((param_5 & 0xffffffff) << 2) + iVar3) = iVar2;
    }
    else {
      uVar7 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x2a0) << 3,0);
      *(unsigned int *)((int)((param_5 & 0xffffffff) << 2) + iVar3) = uVar7;
    }
  }
  if (param_6 == '\0') {
    iVar2 = (int)((param_4 & 0xffffffff) << 2);
    if (*(int *)(*(int *)(param_1 + 0x2a8) + iVar2) != 0) {
      iVar6 = (int)param_5 * 4;
      piVar12 = (int *)(iVar6 + iVar3);
      uVar1 = *(unsigned int *)(iVar6 + iVar3);
      uVar11 = *(int *)(param_1 + 0x2a0) * 8 + uVar1;
      if (uVar1 < uVar11) {
        puVar14 = (unsigned __int64 *)(uVar1 - 8);
        puVar8 = (unsigned __int64 *)(*(int *)(*(int *)(param_1 + 0x2a8) + iVar2) + -8);
        lVar9 = (unsigned __int64)((uVar11 - uVar1) - 1 >> 3) + 1;
        do {
          puVar4 = puVar14 + 1;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = *puVar4 | *puVar8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      goto LAB_82ade13c;
    }
  }
  iVar2 = (int)param_5 * 4;
  uVar1 = (unsigned int)((param_3 & 0xffffffff) >> 3) & 0x1ffffff8;
  piVar12 = (int *)(iVar2 + iVar3);
  iVar2 = *(int *)(iVar2 + iVar3);
  *(unsigned __int64 *)(uVar1 + iVar2) = 1L << (param_3 & 0x3f) | *(unsigned __int64 *)(uVar1 + iVar2);
LAB_82ade13c:
  uVar1 = (unsigned int)((param_4 & 0xffffffff) >> 3) & 0x1ffffff8;
  *(unsigned __int64 *)(uVar1 + *piVar12) = 1L << (param_4 & 0x3f) | *(unsigned __int64 *)(uVar1 + *piVar12);
  uVar1 = *(unsigned int *)((int)((param_5 + 4 & 0xffffffff) << 2) + iVar3);
  uVar11 = *(int *)(param_1 + 0x2a0) * 8 + uVar1;
  if (uVar1 < uVar11) {
    puVar14 = (unsigned __int64 *)(uVar1 - 8);
    puVar8 = (unsigned __int64 *)
             (*(int *)(param_1 + 0x2a0) * (int)param_4 * 8 + *(int *)(param_1 + 0x2ac) + -8);
    lVar9 = (unsigned __int64)((uVar11 - uVar1) - 1 >> 3) + 1;
    do {
      puVar4 = puVar14 + 1;
      puVar8 = puVar8 + 1;
      puVar14 = puVar14 + 1;
      *puVar14 = *puVar4 | *puVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  uVar13 = 0;
  do {
    if (*(__int64 *)
         ((int)((param_4 * 5 + uVar13 + 1 & 0xffffffff) << 3) + *(int *)(param_1 + 0x2a4)) != 0) {
      bVar5 = true;
      goto LAB_82ade1ec;
    }
    uVar13 = uVar13 + 1;
  } while ((uVar13 & 0xffffffff) < 4);
  bVar5 = false;
LAB_82ade1ec:
  if (bVar5) {
    *(unsigned int *)(iVar3 + 0xc0) = *(unsigned int *)(iVar3 + 0xc0) | 0x40000000;
    lVar9 = param_4 * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2a4);
    lVar15 = 4;
    lVar10 = (param_5 + 1) * 0x28 + param_2 + -8;
    do {
      lVar9 = lVar9 + 8;
      iVar2 = (int)lVar10;
      lVar10 = lVar10 + 8;
      *(unsigned __int64 *)lVar10 = *(unsigned __int64 *)lVar9 | *(unsigned __int64 *)(iVar2 + 8);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (param_6 == '\0') {
    uVar1 = (unsigned int)((param_4 & 0xffffffff) >> 2) & 0x1ffffff8;
    uVar13 = (param_4 & 0x7fffffff) * 2 + (param_4 & 0x7fffffe0) * -2;
    *(unsigned __int64 *)(uVar1 + *(int *)(param_1 + 0x2b4)) =
         (param_5 & 3) << (uVar13 & 0x7f) |
         *(unsigned __int64 *)(uVar1 + *(int *)(param_1 + 0x2b4)) & ~(3L << (uVar13 & 0x7f));
    *(int *)(*(int *)(param_1 + 0x2b0) + (int)((param_4 & 0xffffffff) << 2)) = iVar3;
  }
  return;
}

