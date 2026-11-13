typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82645110();
extern unsigned int uStack_70;


unsigned __int64 fn_826417C8(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uStack_70;
  
  puVar4 = *(unsigned int **)(param_1 + 0x30);
  if (*(unsigned int **)(param_1 + 0x38) < puVar4) {
    puVar4 = (unsigned int *)fn_82645110();
  }
  uVar6 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  if ((param_2 & 0x100) == 0) goto LAB_82641a3c;
  uVar10 = uVar6;
  if ((*(unsigned char *)(param_1 + 0x2abf) & 0x20) == 0) {
LAB_826419fc:
    uVar6 = param_3;
    if ((*(unsigned int *)(param_1 + 0x2efc) & 0xe0000) == 0) {
      uVar6 = param_3 & 0xfffffffe;
    }
    puVar4[1] = 0x2203;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar6;
    if ((uVar6 != param_3) && ((*(unsigned char *)(param_1 + 0x2abc) & 0x40) != 0)) {
      uVar10 = param_3;
    }
  }
  else {
    if ((*(unsigned char *)(param_1 + 0x2abc) & 0x10) == 0) {
      if (((((*(unsigned char *)(param_1 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
            (*(int *)(param_1 + 0x3148) != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_826419fc;
    puVar4[1] = 0xc0006100;
    puVar4 = puVar4 + 2;
    *puVar4 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x327c);
    while (uVar3 = uVar5 - 1, -1 < (__int64)uVar3) {
      uVar6 = *(unsigned int *)(param_1 + 0x2efc) >> 0x11 & 7;
      uVar2 = *(int *)((int)((uVar5 + 0xcf9 & 0xffffffff) << 2) + param_1) << 0x11;
      uVar11 = uVar2 | param_3 & 0x1ffff;
      if ((uVar6 == 0) ||
         ((uStack_70 = uVar11, uVar6 == 2 &&
          (((int)uVar3 != 0 || ((*(unsigned char *)(param_1 + 0x2abf) & 0x10) == 0)))))) {
        uStack_70 = uVar2 | param_3 & 0x1fffe;
      }
      puVar4[1] = 0xc0006000;
      puVar4[2] = 3 << ((unsigned int)((uVar3 & 0xffffffff) << 1) & 0x3e);
      puVar4[3] = 0xc0012d01;
      puVar4[4] = 0x40203;
      puVar4 = puVar4 + 5;
      *puVar4 = uStack_70;
      *(unsigned int **)(param_1 + 0x30) = puVar4;
      param_3 = uVar11;
      uVar5 = uVar3;
      if (*(unsigned int **)(param_1 + 0x38) < puVar4) {
        puVar4 = (unsigned int *)fn_82645110(param_1);
      }
    }
    if ((uStack_70 != param_3) && ((*(unsigned char *)(param_1 + 0x2abc) & 0x40) != 0)) {
      puVar4[1] = 0xc0006000;
      puVar4[2] = 1;
      puVar4[3] = 0xc0012d01;
      puVar4[4] = 0x40203;
      puVar4 = puVar4 + 5;
      *puVar4 = param_3;
    }
    puVar4[1] = 0xc0006000;
    puVar4[2] = *(unsigned int *)(param_1 + 0x3254);
    puVar4[3] = 0xc0006100;
    puVar4 = puVar4 + 4;
    *puVar4 = *(unsigned int *)(param_1 + 0x3258);
  }
  param_2 = param_2 & 0xfffffffffffffeff;
LAB_82641a3c:
  uVar5 = *(unsigned __int64 *)(param_1 + 0x28) & param_2;
  if ((uVar5 & 0x200000000000000) != 0) {
    uVar9 = *(unsigned int *)(param_1 + 0x2880);
    puVar4[1] = 0x2000;
    param_2 = param_2 & 0xfdffffffffffffff;
    puVar4 = puVar4 + 2;
    *puVar4 = uVar9;
    uVar9 = uVar9 & 0xffffc000 | *(unsigned int *)(param_1 + 0x3428) & 0x3fff;
  }
  if ((uVar5 & 0x2000000000) != 0) {
    puVar4[1] = 0x2104;
    uVar8 = 0;
    param_2 = param_2 & 0xffffffdfffffffff;
    puVar4 = puVar4 + 2;
    *puVar4 = *(unsigned int *)(param_1 + 0x28dc);
  }
  if ((uVar8 & uVar9 & uVar10) != 0xffffffff) {
    puVar4[1] = 0xc0006100;
    puVar4[2] = 0;
    puVar4[3] = 0xc0006000;
    puVar7 = puVar4 + 4;
    *puVar7 = 0x15555555;
    if (uVar10 != 0xffffffff) {
      puVar4[5] = 0xc0012d01;
      puVar4[6] = 0x40203;
      puVar7 = puVar4 + 7;
      *puVar7 = uVar10;
    }
    if (uVar9 != 0xffffffff) {
      puVar7[1] = 0xc0012d01;
      puVar7[2] = 0x40000;
      puVar7 = puVar7 + 3;
      *puVar7 = uVar9;
    }
    if (uVar8 != 0xffffffff) {
      puVar7[1] = 0xc0012d01;
      puVar7[2] = 0x40104;
      puVar7 = puVar7 + 3;
      *puVar7 = uVar8;
    }
    puVar7[1] = 0xc0006000;
    puVar7[2] = *(unsigned int *)(param_1 + 0x3254);
    puVar7[3] = 0xc0006100;
    puVar4 = puVar7 + 4;
    *puVar4 = *(unsigned int *)(param_1 + 0x3258);
  }
  *(unsigned int **)(param_1 + 0x30) = puVar4;
  return param_2;
}

