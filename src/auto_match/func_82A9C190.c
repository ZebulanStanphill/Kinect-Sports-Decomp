extern unsigned int lbl_82196582;


void fn_82A9C190(int param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  int *piVar5;
  unsigned char *pbVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  
  *(unsigned int *)(param_1 + 0xa0) = 0x4e4a0000;
  if (*(int *)(param_1 + 0x90) < 0) {
    uVar3 = 0;
    *(unsigned int *)(param_1 + 0xa4) = 0;
  }
  else {
    pbVar6 = *(unsigned char **)(param_1 + 0x38);
    uVar3 = 1;
    pbVar4 = pbVar6 + *(int *)(param_1 + 0x3c) * 0x28;
    for (; pbVar6 < pbVar4; pbVar6 = pbVar6 + 0x28) {
      if (pbVar6 != (unsigned char *)0x0) {
        bVar1 = *pbVar6;
        pbVar9 = pbVar6;
        while (bVar1 != 0) {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
          bVar1 = *pbVar9;
        }
      }
      pbVar9 = pbVar6 + 0x20;
      if (pbVar6 != (unsigned char *)0xffffffe0) {
        bVar1 = *pbVar9;
        while (bVar1 != 0) {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
          bVar1 = *pbVar9;
        }
      }
    }
    piVar7 = *(int **)(param_1 + 0x20);
    piVar5 = piVar7 + *(int *)(param_1 + 0x24) * 2;
    if (piVar7 < piVar5) {
      do {
        pbVar6 = &lbl_82196582;
        if (*piVar7 != -1) {
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0x2c) + *piVar7);
        }
        if (pbVar6 != (unsigned char *)0x0) {
          bVar1 = *pbVar6;
          while (bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
            bVar1 = *pbVar6;
          }
        }
        pbVar6 = &lbl_82196582;
        if (piVar7[1] != -1) {
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0x2c) + piVar7[1]);
        }
        if (pbVar6 != (unsigned char *)0x0) {
          bVar1 = *pbVar6;
          while (bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
            bVar1 = *pbVar6;
          }
        }
        piVar7 = piVar7 + 2;
      } while (piVar7 < piVar5);
    }
    uVar10 = *(unsigned int *)(param_1 + 4);
    uVar8 = *(int *)(param_1 + 8) * 0x114 + uVar10;
    for (; uVar10 < uVar8; uVar10 = uVar10 + 0x114) {
      pbVar6 = *(unsigned char **)(uVar10 + 0x110);
      if (pbVar6 != (unsigned char *)0x0) {
        bVar1 = *pbVar6;
        while (bVar1 != 0) {
          if ((((bVar1 != 0x20) && (bVar1 != 10)) && (bVar1 != 0xd)) && (bVar1 != 9)) {
            uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
          }
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
        }
      }
    }
    if (param_2 != (unsigned char *)0x0) {
      bVar1 = *param_2;
      while (bVar1 != 0) {
        param_2 = param_2 + 1;
        uVar3 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (unsigned __int64)bVar1 ^ uVar3 >> 0x2f;
        bVar1 = *param_2;
      }
      uVar2 = uVar3 * 0xb319f4f3 + (uVar3 >> 0x13) + (param_3 & 0xff);
      uVar3 = ((param_3 & 0xffffffff) >> 8 & 0xff) + (uVar2 ^ uVar3 >> 0x2f) * 0xb319f4f3 +
              (uVar2 >> 0x13);
      uVar2 = ((param_3 & 0xffffffff) >> 0x10 & 0xff) + (uVar3 ^ uVar2 >> 0x2f) * 0xb319f4f3 +
              (uVar3 >> 0x13);
      uVar3 = ((param_3 & 0xffffffff) >> 0x18) + (uVar2 ^ uVar3 >> 0x2f) * 0xb319f4f3 +
              (uVar2 >> 0x13) ^ uVar2 >> 0x2f;
    }
    *(int *)(param_1 + 0xa4) = (int)(uVar3 >> 0x20);
  }
  *(int *)(param_1 + 0xa8) = (int)uVar3;
  return;
}

