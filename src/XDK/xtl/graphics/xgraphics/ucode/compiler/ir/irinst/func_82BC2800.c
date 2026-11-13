extern unsigned int lbl_820E3B00;
extern unsigned int lbl_820E3B08;
extern unsigned int lbl_820E3B10;
extern unsigned int lbl_820E3B14;
extern unsigned int lbl_8316FF50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BC2800(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  int iVar8;
  int iVar9;
  unsigned int *puVar10;
  
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x50) = 0x30;
  *(unsigned int *)(param_1 + 0x80) = lbl_820E3B08;
  lVar7 = 1;
  *(unsigned int *)(param_1 + 0x3b0) = lbl_820E3B00;
  uVar2 = lbl_820E3B14;
  uVar1 = lbl_820E3B10;
  *(unsigned char *)(param_1 + 0x98) = 0;
  *(unsigned char *)(param_1 + 0x9e) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  do {
    iVar9 = (int)((lVar7 + 0x20U & 0xffffffff) << 2);
    *(unsigned int *)((int)((lVar7 + 0xeU & 0xffffffff) << 2) + param_1) = 0xffffffff;
    *(unsigned int *)((int)((lVar7 + 0x14U & 0xffffffff) << 2) + param_1) = 0x30;
    *(unsigned int *)(iVar9 + param_1) = lbl_820E3B00;
    iVar8 = (int)lVar7;
    if ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_1 + 0x18) * 0x34) >> 2 & 1) != 0) {
      if (iVar8 == 1) {
        *(unsigned int *)(param_1 + 0x84) = uVar2;
      }
      else {
        *(unsigned int *)(iVar9 + param_1) = uVar1;
      }
    }
    uVar4 = lVar7 + 7;
    *(unsigned char *)(param_1 + 0x98 + iVar8) = 0;
    uVar3 = lVar7 + 0x32;
    *(unsigned char *)(param_1 + 0x9e + iVar8) = 0;
    lVar7 = lVar7 + 1;
    *(unsigned int *)((int)((uVar4 & 0xffffffff) << 2) + param_1) = 0;
    *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_1) = 0;
  } while ((int)lVar7 < 6);
  iVar9 = 0x5b;
  *(unsigned char *)(param_1 + 0xa4) = 0;
  do {
    *(unsigned int *)(param_1 + 0x8d + iVar9) = 0;
    iVar8 = 0;
    lVar7 = 4;
    do {
      iVar5 = iVar9 + iVar8;
      iVar8 = iVar8 + 1;
      *(unsigned int *)(iVar5 * 4 + param_1) = 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar9 = iVar9 + 4;
  } while (iVar9 < 0xdb);
  puVar6 = (unsigned int *)(param_1 + 0x39c);
  puVar10 = (unsigned int *)(param_1 + 0x37c);
  lVar7 = 4;
  do {
    puVar10[1] = 0;
    puVar10 = puVar10 + 2;
    *puVar10 = 0;
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

