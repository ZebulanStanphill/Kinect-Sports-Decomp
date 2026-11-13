typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACB0F8();
extern int fn_82B0FD38();


void fn_82AEC7E8(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  char cVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned int *puVar13;
  
  uVar11 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x10) | 0x1000000;
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) & 0xffffe000 | param_3 & 0x1fff;
  if (uVar11 == 0x6e) {
    piVar12 = (int *)(param_2 + 0x2c);
    for (uVar11 = 0; uVar11 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
      uVar1 = *(unsigned int *)(*piVar12 + 0xc);
      puVar13 = (unsigned int *)(uVar1 + 4);
      while (puVar2 = (unsigned int *)*puVar13, puVar2 != (unsigned int *)0x0) {
        uVar6 = puVar2[4];
        if ((((uVar6 != 0) && ((*puVar2 & 0xe000000) != 0)) && (uVar6 != param_2)) &&
           (((*(unsigned char *)(uVar6 + 0x10) & 1) != 0 && (cVar5 = fn_82ACB0F8(param_2), cVar5 != '\0'))))
        {
          uVar6 = 0;
          piVar8 = (int *)(param_2 + 0x2c);
          for (uVar9 = 0; uVar9 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar9 = uVar9 + 1) {
            if (((unsigned int *)*piVar8)[3] == uVar1) {
              uVar7 = *(unsigned int *)*piVar8 >> 4 & 6;
              uVar6 = uVar6 & ~(3 << uVar7) | uVar9 << uVar7;
            }
            piVar8 = piVar8 + 1;
          }
          if ((*puVar2 >> 0x1e & 1) != 0) {
            for (puVar3 = *(unsigned int **)(param_2 + 4);
                (puVar3 != (unsigned int *)0x0 && ((puVar3[4] == 0 || ((*puVar3 & 0xe000000) == 0))));
                puVar3 = (unsigned int *)puVar3[2]) {
            }
            uVar9 = *puVar2;
            *puVar2 = uVar9 & 0xbfffffff;
            *puVar2 = uVar9 & 0xbe001fff | *puVar3 & 0x1ffe000 | 0x40000000;
          }
          puVar10 = (unsigned int *)(puVar2[3] + 4);
          for (puVar3 = (unsigned int *)*puVar10; puVar3 != puVar2; puVar3 = (unsigned int *)puVar3[2]) {
            puVar10 = puVar3 + 2;
          }
          *puVar10 = puVar2[2];
          puVar2[2] = *(unsigned int *)(param_2 + 4);
          *(unsigned int **)(param_2 + 4) = puVar2;
          uVar9 = *puVar2 >> 5;
          uVar7 = uVar9 & 0xff;
          puVar2[3] = param_2;
          *puVar2 = ((((uVar6 >> (uVar7 >> 5 & 6) & 3) << 2 | uVar6 >> (uVar7 >> 3 & 6) & 3) << 2 |
                     uVar6 >> (uVar7 >> 1 & 6) & 3) << 2 | uVar6 >> ((uVar9 & 3) << 1) & 3) << 5 |
                    *puVar2 & 0xffffe01e;
        }
        if ((unsigned int *)*puVar13 == puVar2) {
          puVar13 = puVar2 + 2;
        }
      }
      piVar12 = piVar12 + 1;
    }
    return;
  }
  if ((uVar11 < 0x20) || (bVar4 = true, 0x52 < uVar11)) {
    bVar4 = false;
  }
  if (!bVar4) {
    return;
  }
  if ((*(unsigned int *)(param_2 + 8) & 0x380000) < 0x80001) {
    return;
  }
  piVar12 = *(int **)(*(int *)(param_2 + 0x30) + 0xc);
  if (((unsigned int)piVar12[2] >> 0x17 & 1) == 0) {
    while( true ) {
      fn_82B0FD38(param_1,piVar12);
      if ((piVar12[2] & 0x3f80U) == 0x3700) {
        for (puVar13 = (unsigned int *)*piVar12; puVar13 != (unsigned int *)0x0; puVar13 = (unsigned int *)puVar13[1]) {
          if ((((*puVar13 & 0xe000000) != 0) && ((*(unsigned int *)(puVar13[3] + 8) >> 0x17 & 1) == 0)) &&
             ((*(unsigned int *)(puVar13[3] + 8) >> 0x18 & 1) != 0)) {
            fn_82B0FD38(param_1);
          }
        }
        return;
      }
      puVar13 = (unsigned int *)piVar12[1];
      while( true ) {
        if (puVar13 == (unsigned int *)0x0) {
          return;
        }
        piVar12 = (int *)puVar13[4];
        if (((piVar12 != (int *)0x0) && ((*puVar13 & 0xe000000) != 0)) &&
           (uVar11 = piVar12[2], (uVar11 & 0x3f80) == 0x3700)) break;
        puVar13 = (unsigned int *)puVar13[2];
      }
      if ((uVar11 >> 0x17 & 1) != 0) break;
      if ((uVar11 >> 0x18 & 1) == 0) {
        return;
      }
    }
    return;
  }
  return;
}

