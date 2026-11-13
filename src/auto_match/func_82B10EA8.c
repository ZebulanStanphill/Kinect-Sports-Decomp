typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B10120();
extern int fn_82B84350();
extern int fn_82B85910();


unsigned int fn_82B10EA8(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar5;
  char cVar7;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  bool bVar12;
  int *piVar11;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  
  uVar1 = *param_2;
  uVar8 = param_2[4];
  uVar16 = uVar1 >> 0x19;
  uVar17 = (unsigned __int64)uVar16 & 7;
  uVar18 = param_2[3];
  uVar14 = uVar1 & 0x19;
  iVar2 = *(int *)(uVar8 + 0x1c);
  uVar5 = 0;
  uVar10 = 0;
  if ((uVar16 & 7) != 0) {
    uVar9 = 0;
    do {
      uVar10 = uVar10 + 1;
      uVar5 = 1 << ((uVar1 >> 5 & 0xff) >> (uVar9 & 0x3f) & 3) | uVar5;
      uVar9 = uVar9 + 2;
    } while (uVar10 < (uVar1 >> 0x19 & 7));
    if (uVar5 != 0) {
      bVar12 = true;
      if (uVar5 == (uVar5 & ~(uVar5 - 1))) goto LAB_82b10f3c;
    }
  }
  bVar12 = false;
LAB_82b10f3c:
  if (bVar12) {
    uVar5 = fn_82B10120(param_1,iVar2,uVar18,uVar1 >> 5 & 3,uVar14,param_3);
    puVar13 = (unsigned int *)(param_2[3] + 4);
    for (puVar3 = (unsigned int *)*puVar13; puVar3 != param_2; puVar3 = (unsigned int *)puVar3[2]) {
      puVar13 = puVar3 + 2;
    }
    *puVar13 = param_2[2];
    param_2[2] = *(unsigned int *)(uVar5 + 4);
    *(unsigned int **)(uVar5 + 4) = param_2;
    *param_2 = *param_2 & 0xffffe01f;
    param_2[3] = uVar5;
    if ((*(unsigned int *)(param_1 + 0x28) & 0x80000) != 0) {
      for (puVar3 = *(unsigned int **)(uVar5 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
        uVar18 = puVar3[4];
        if ((uVar18 != 0) && ((*(unsigned int *)(uVar18 + 8) & 0x3f80) == 0x3700)) {
          if ((*puVar3 & 0xe000000) != 0) goto LAB_82b10ff4;
        }
      }
      uVar18 = 0;
LAB_82b10ff4:
      if (uVar18 != 0) {
        cVar7 = fn_82B85910(uVar8,uVar18);
        if (cVar7 != '\0') {
          uVar8 = 0;
          if ((*param_2 & 0xe000000) != 0) {
            do {
              piVar11 = (int *)(uVar18 + 0x2c);
              for (uVar17 = 0;
                  (uVar17 & 0xffffffff) < ((unsigned __int64)(*(unsigned int *)(uVar18 + 8) >> 0x13) & 7);
                  uVar17 = uVar17 + 1) {
                if (*(unsigned int *)(*piVar11 + 0xc) == uVar5) {
                  *param_2 = (unsigned int)((((((uVar17 & 0x3fffffff) << 2 | uVar17 & 0xffffffff) & 0xf) <<
                                      2 | uVar17 & 0x3f) << 2 | uVar17 & 0xff) << 5) |
                             *param_2 & 0xffffe01f;
                  break;
                }
                piVar11 = piVar11 + 1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < (*param_2 >> 0x19 & 7));
          }
          puVar13 = (unsigned int *)(param_2[3] + 4);
          for (puVar3 = (unsigned int *)*puVar13; puVar3 != param_2; puVar3 = (unsigned int *)puVar3[2]) {
            puVar13 = puVar3 + 2;
          }
          *puVar13 = param_2[2];
          param_2[2] = *(unsigned int *)(uVar18 + 4);
          *(unsigned int **)(uVar18 + 4) = param_2;
          param_2[3] = uVar18;
        }
      }
    }
  }
  else {
    uVar5 = fn_82B84350(param_1,iVar2,0,uVar17);
    uVar8 = uVar5 & 0xfffffffe;
    *(unsigned int *)(uVar8 + 0x28) = *(unsigned int *)(iVar2 + 0x1c);
    *(unsigned int *)((*(unsigned int *)(iVar2 + 0x1c) & 0xfffffffe) + 0x24) = uVar8 + 0x28;
    *(unsigned int *)(uVar8 + 0x24) = iVar2 + 0x1cU | 1;
    *(unsigned int *)(iVar2 + 0x1c) = uVar8;
    puVar13 = (unsigned int *)(param_2[3] + 4);
    for (puVar3 = (unsigned int *)*puVar13; puVar3 != param_2; puVar3 = (unsigned int *)puVar3[2]) {
      puVar13 = puVar3 + 2;
    }
    *puVar13 = param_2[2];
    param_2[2] = *(unsigned int *)(uVar5 + 4);
    *(unsigned int **)(uVar5 + 4) = param_2;
    uVar8 = *param_2;
    param_2[3] = uVar5;
    if ((uVar16 & 7) != 0) {
      uVar16 = 0;
      puVar15 = (unsigned int *)(uVar5 + 0x28);
      do {
        uVar4 = fn_82B10120(param_1,iVar2,uVar18,(uVar8 >> 5 & 0xff) >> (uVar16 & 0x3f) & 3,uVar14
                              ,param_3);
        uVar4 = fn_82AD17B0(param_1,uVar4);
        uVar6 = fn_82AD1978(uVar5,uVar4);
        uVar17 = uVar17 - 1;
        puVar15 = puVar15 + 1;
        *puVar15 = uVar6;
        uVar16 = uVar16 + 2;
      } while (uVar17 != 0);
    }
    *param_2 = *param_2 & 0xffffe01f | 0x1c80;
  }
  if ((uVar1 & 0x19) != 0) {
    *param_2 = *param_2 & 0xffffffe0 | *param_2 - uVar14 & 0x1f;
  }
  return uVar5;
}

