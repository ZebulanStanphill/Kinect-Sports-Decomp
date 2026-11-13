#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F68CC0();


unsigned __int64 fn_82B63F30(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int uVar13;
  
  iVar7 = *param_1;
  if ((((*(unsigned int *)(iVar7 + 0x48) | *(unsigned int *)(iVar7 + 0x44) | *(unsigned int *)(iVar7 + 0x3c) |
        *(unsigned int *)(iVar7 + 0x40)) & 3) != 0) ||
     (iVar3 = param_1[1],
     ((*(unsigned int *)(iVar3 + 0x48) | *(unsigned int *)(iVar3 + 0x44) | *(unsigned int *)(iVar3 + 0x40) |
      *(unsigned int *)(iVar3 + 0x3c)) & 3) != 0)) {
    return 0xffffffff80004005;
  }
  iVar3 = param_1[1];
  uVar4 = (CONCAT44(*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 4)) & 0xfffffffffffffeff) -
          0x1a200052;
  if (uVar4 != 0) {
    if (((uVar4 & 0xffffffff) == 1) || ((uVar4 & 0xffffffff) == 2)) {
      iVar5 = 0x10;
      goto LAB_82b63fd8;
    }
    if (((uVar4 & 0xffffffff) != 0x28) && ((uVar4 & 0xffffffff) != 0x29)) {
      return 0xffffffff80004005;
    }
  }
  iVar5 = 8;
LAB_82b63fd8:
  iVar1 = param_1[1];
  uVar8 = 0;
  uVar2 = *(unsigned int *)(iVar1 + 0x68);
  lVar10 = (__int64)(int)(*(unsigned int *)(iVar1 + 0x40) >> 2) * (__int64)*(int *)(iVar1 + 0x60) +
           (__int64)*(int *)(iVar1 + 100) * (__int64)*(int *)(iVar1 + 0x4c) +
           (__int64)(int)(*(unsigned int *)(iVar1 + 0x3c) >> 2) * (__int64)iVar5 +
           (unsigned __int64)*(unsigned int *)(iVar1 + 0x20);
  lVar9 = (__int64)(int)(*(unsigned int *)(iVar7 + 0x40) >> 2) * (__int64)*(int *)(iVar7 + 0x60) +
          (__int64)*(int *)(iVar7 + 100) * (__int64)*(int *)(iVar7 + 0x4c) +
          (__int64)(int)(*(unsigned int *)(iVar7 + 0x3c) >> 2) * (__int64)iVar5 +
          (unsigned __int64)*(unsigned int *)(iVar7 + 0x20);
  if (*(int *)(iVar3 + 0x70) != 0) {
    uVar6 = *(unsigned int *)(iVar3 + 0x6c);
    do {
      uVar13 = 0;
      lVar11 = lVar9;
      lVar12 = lVar10;
      if (uVar6 != 0) {
        do {
          fn_82F68CC0(lVar12,lVar11,(__int64)(int)(uVar2 >> 2) * (__int64)iVar5);
          iVar3 = param_1[1];
          iVar7 = *param_1;
          uVar13 = uVar13 + 4;
          uVar6 = *(unsigned int *)(iVar3 + 0x6c);
          lVar12 = (unsigned __int64)*(unsigned int *)(iVar3 + 0x60) + lVar12;
          lVar11 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x60) + lVar11;
        } while (uVar13 < uVar6);
      }
      uVar8 = uVar8 + 1;
      lVar10 = (unsigned __int64)*(unsigned int *)(iVar3 + 100) + lVar10;
      lVar9 = (unsigned __int64)*(unsigned int *)(iVar7 + 100) + lVar9;
    } while (uVar8 < *(unsigned int *)(iVar3 + 0x70));
  }
  return 0;
}

