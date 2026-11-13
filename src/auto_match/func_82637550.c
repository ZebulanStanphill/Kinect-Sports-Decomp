typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82645110();


void fn_82637550(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned int *puVar12;
  
  uVar4 = *(unsigned int *)(param_1 + 0x30);
  if (*(unsigned int *)(param_1 + 0x38) < uVar4) {
    uVar4 = fn_82645110(param_1);
  }
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
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar10 = 0;
    *(unsigned int *)(uVar4 + 4) = 0xc0006100;
    puVar5 = (unsigned int *)(uVar4 + 8);
    *puVar5 = 0;
    if (*(int *)(param_1 + 0x327c) != 0) {
      uVar4 = 0;
      puVar12 = (unsigned int *)(param_1 + 0x3284);
      piVar11 = (int *)(param_1 + 0x3374);
      do {
        iVar1 = piVar11[-1];
        iVar2 = *piVar11;
        uVar6 = param_2;
        if ((int)param_2 <= (int)puVar12[-1]) {
          uVar6 = puVar12[-1];
        }
        uVar7 = param_3;
        if ((int)param_3 <= (int)*puVar12) {
          uVar7 = (unsigned __int64)*puVar12;
        }
        uVar8 = puVar12[1];
        if ((int)param_4 < (int)puVar12[1]) {
          uVar8 = param_4;
        }
        uVar9 = (unsigned __int64)puVar12[2];
        if ((int)param_5 < (int)puVar12[2]) {
          uVar9 = param_5;
        }
        if (((int)uVar8 <= (int)uVar6) || ((int)uVar9 <= (int)uVar7)) {
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
        }
        puVar5[1] = 0xc0006000;
        puVar5[2] = 3 << (uVar4 & 0x3f);
        puVar5[3] = 0xc0032d01;
        puVar5[4] = 0x40080;
        puVar5[5] = iVar2 * -0x10000 & 0x7fff0000U | -iVar1 & 0x7fffU;
        puVar5[6] = (unsigned int)((uVar7 & 0xffffffff) << 0x10) & 0x3fff0000 | uVar6 & 0x3fff;
        puVar5 = puVar5 + 7;
        *puVar5 = (unsigned int)((uVar9 & 0xffffffff) << 0x10) & 0x3fff0000 | uVar8 & 0x3fff;
        *(unsigned int **)(param_1 + 0x30) = puVar5;
        if (*(unsigned int **)(param_1 + 0x38) < puVar5) {
          puVar5 = (unsigned int *)fn_82645110(param_1);
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 2;
        puVar12 = puVar12 + 4;
        uVar4 = uVar4 + 2;
      } while (uVar10 < *(unsigned int *)(param_1 + 0x327c));
    }
    if (((*(unsigned char *)(param_1 + 0x2abf) & 0x20) != 0) && ((*(unsigned char *)(param_1 + 0x2abc) & 0x40) != 0))
    {
      puVar5[1] = 0xc0006000;
      puVar5[2] = 1;
      puVar5[3] = 0xc0022d01;
      puVar5[4] = 0x40081;
      puVar5[5] = (unsigned int)((param_3 & 0xffffffff) << 0x10) & 0x3fff0000 | param_2 & 0x3fff;
      puVar5 = puVar5 + 6;
      *puVar5 = (unsigned int)((param_5 & 0xffffffff) << 0x10) & 0x3fff0000 | param_4 & 0x3fff;
    }
    puVar5[1] = 0xc0006000;
    puVar5[2] = *(unsigned int *)(param_1 + 0x3254);
    puVar5[3] = 0xc0006100;
    puVar5 = puVar5 + 4;
    *puVar5 = *(unsigned int *)(param_1 + 0x3258);
  }
  else {
    *(unsigned int *)(uVar4 + 4) = 0x22080;
    *(unsigned int *)(uVar4 + 8) = 0;
    *(unsigned int *)(uVar4 + 0xc) = (unsigned int)((param_3 & 0xffffffff) << 0x10) & 0x3fff0000 | param_2 & 0x3fff;
    puVar5 = (unsigned int *)(uVar4 + 0x10);
    *puVar5 = (unsigned int)((param_5 & 0xffffffff) << 0x10) & 0x3fff0000 | param_4 & 0x3fff;
  }
  *(unsigned int **)(param_1 + 0x30) = puVar5;
  return;
}

