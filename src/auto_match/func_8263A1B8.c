typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826374C0();


void fn_8263A1B8(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned short uVar4;
  int iVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned char bVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  
  iVar1 = (int)((param_2 + 0xc52 & 0xffffffff) << 2);
  *(int *)(iVar1 + param_1) = param_3;
  if (param_3 != 0) {
    lVar11 = 0;
    if ((param_2 & 0xffffffff) != 0) {
      lVar11 = param_2 + 1;
    }
    *(unsigned int *)((int)((lVar11 + 0xa21U & 0xffffffff) << 2) + param_1) =
         *(unsigned int *)(param_3 + 0x1c);
    iVar3 = ((int)(lVar11 + 0x20107U) >> 0x10) * 8;
    iVar5 = (int)((param_2 + 0xbeb & 0xffffffff) << 2);
    *(unsigned __int64 *)(iVar3 + param_1) =
         0x8000000000000000U >> (lVar11 + 0x20107U & 0x7f) | *(unsigned __int64 *)(iVar3 + param_1);
    iVar1 = *(int *)(iVar1 + param_1);
    uVar8 = *(unsigned int *)(iVar5 + param_1);
    *(unsigned int *)(iVar5 + param_1) = uVar8;
    if (iVar1 != 0) {
      uVar7 = -(unsigned __int64)(param_2 != 0) & param_2 + 1;
      iVar1 = (int)((uVar7 + 0xa21 & 0xffffffff) << 2);
      uVar2 = *(unsigned int *)(iVar1 + param_1);
      uVar12 = (unsigned __int64)(uVar2 >> 0x10) & 0xf;
      if (((((uVar12 == 2) || (uVar12 == 3)) || (uVar12 == 10)) || (uVar12 == 0xc)) &&
         (((unsigned __int64)(uVar2 >> 0x13) & 1) != (unsigned __int64)uVar8)) {
        uVar9 = (unsigned __int64)uVar8 - 1;
        uVar7 = uVar7 + 0x20107;
        iVar3 = ((int)uVar7 >> 0x10) * 8;
        *(unsigned int *)(iVar1 + param_1) =
             uVar2 & 0xfff0ffff |
             ((unsigned int)((~uVar9 & 0xffffffff) << 0x10) & ((int)uVar12 + 3) * 0x20000 |
             (unsigned int)(((uVar12 >> 1) - 3 & uVar9 & 0xffffffff) << 0x10)) & 0xf0000;
        *(unsigned __int64 *)(iVar3 + param_1) =
             0x8000000000000000U >> (uVar7 & 0x7f) | *(unsigned __int64 *)(iVar3 + param_1);
      }
    }
  }
  if ((param_2 & 0xffffffff) != 0) {
    if ((param_2 & 0xffffffff) == 1) {
      uVar8 = *(unsigned int *)(param_1 + 0x2f08);
      *(unsigned int *)(param_1 + 0x2f08) = uVar8;
      uVar8 = (-(unsigned int)(*(int *)(param_1 + 0x314c) != 0) & uVar8 & 0xf) << 4 |
              *(unsigned int *)(param_1 + 0x28dc) & 0xffffff0f;
    }
    else if ((param_2 & 0xffffffff) == 2) {
      uVar8 = *(unsigned int *)(param_1 + 0x2f0c);
      *(unsigned int *)(param_1 + 0x2f0c) = uVar8;
      uVar8 = (-(unsigned int)(*(int *)(param_1 + 0x3150) != 0) & uVar8 & 0xf) << 8 |
              *(unsigned int *)(param_1 + 0x28dc) & 0xfffff0ff;
    }
    else {
      if ((param_2 & 0xffffffff) != 3) {
        return;
      }
      uVar8 = *(unsigned int *)(param_1 + 0x2f10);
      *(unsigned int *)(param_1 + 0x2f10) = uVar8;
      uVar8 = (-(unsigned int)(*(int *)(param_1 + 0x3154) != 0) & uVar8 & 0xf) << 0xc |
              *(unsigned int *)(param_1 + 0x28dc) & 0xffff0fff;
    }
    *(unsigned int *)(param_1 + 0x28dc) = uVar8;
    goto LAB_8263a4e8;
  }
  bVar10 = *(unsigned char *)(param_1 + 0x2abf) & 0xf7;
  *(unsigned char *)(param_1 + 0x2abf) = bVar10;
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x3158);
    if (param_3 != 0) goto LAB_8263a34c;
  }
  else {
    uVar4 = *(unsigned short *)(param_3 + 0x1c) & 0xf;
    if (((uVar4 == 5) || (uVar4 == 7)) || (uVar4 == 0xf)) {
      *(unsigned char *)(param_1 + 0x2abf) = bVar10 | 8;
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x100000;
    }
LAB_8263a34c:
    fn_826374C0(param_1,param_3);
  }
  if (((*(int *)(param_1 + 0x325c) == 0) &&
      (bVar10 = *(unsigned char *)(param_1 + 0x2abc), (bVar10 & 8) == 0)) &&
     (((bVar10 & 4) == 0 && (*(char *)(param_1 + 0x304b) == '\0')))) {
    if ((bVar10 & 0x10) == 0) {
      if ((((((bVar10 & 0x20) == 0) ||
            ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
             (*(int *)(param_1 + 0x3148) != 0)))) ||
           ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
            (*(int *)(param_1 + 0x314c) != 0)))) ||
          ((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
           (*(int *)(param_1 + 0x3150) != 0)))) ||
         (((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
           (*(int *)(param_1 + 0x3154) != 0)) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = true;
    }
    bVar10 = 1;
    if (!bVar6) goto LAB_8263a42c;
  }
  else {
LAB_8263a42c:
    bVar10 = 0;
  }
  uVar8 = *(unsigned int *)(param_1 + 0x2f04);
  *(unsigned char *)(param_1 + 0x2abc) = bVar10 | *(unsigned char *)(param_1 + 0x2abc) & 0xfe;
  *(unsigned int *)(param_1 + 0x2f04) = uVar8;
  *(unsigned int *)(param_1 + 0x28dc) =
       -(unsigned int)(*(int *)(param_1 + 0x3148) != 0) & uVar8 & 0xf |
       *(unsigned int *)(param_1 + 0x28dc) & 0xfffffff0;
LAB_8263a4e8:
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x2000000000;
  return;
}

