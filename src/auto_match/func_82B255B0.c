extern int fn_82AD1978();
extern int fn_82ADCF98();
extern int fn_82B25248();
extern int fn_82B82378();
extern int fn_82B84350();


unsigned int fn_82B255B0(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned int uVar15;
  __int64 lVar16;
  int iVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  
  puVar12 = (unsigned int *)(param_2 + 4);
  uVar13 = 0;
  for (puVar10 = *(unsigned int **)(param_2 + 4); puVar10 != (unsigned int *)0x0; puVar10 = (unsigned int *)puVar10[2]) {
    if (puVar10[4] != 0) {
      uVar5 = 0;
      uVar8 = 0;
      uVar15 = *puVar10 >> 0x19 & 7;
      if (uVar15 != 0) {
        uVar9 = 0;
        do {
          uVar8 = uVar8 + 1;
          uVar18 = uVar9 & 0x3f;
          uVar9 = uVar9 + 2;
          uVar5 = 1 << ((*puVar10 >> 5 & 0xff) >> uVar18 & 3) | uVar5;
        } while (uVar8 < uVar15);
      }
      uVar13 = uVar5 | uVar13;
    }
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x4000) != 0) {
    uVar5 = 1;
    uVar15 = *(unsigned int *)(param_2 + 8) >> 0x13;
    uVar19 = (unsigned __int64)uVar15 & 7;
    if ((uVar15 & 7) != 0) {
      uVar22 = uVar19;
      piVar14 = (int *)(param_2 + 0x2c);
      do {
        if ((uVar5 & uVar13) == 0) {
          uVar8 = 0;
          uVar15 = ((unsigned int *)*piVar14)[3];
          if ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3880) {
            uVar8 = *(unsigned int *)(uVar15 + 8) >> 1 & 0xf;
          }
          else {
            for (puVar10 = *(unsigned int **)(uVar15 + 4); puVar10 != (unsigned int *)0x0;
                puVar10 = (unsigned int *)puVar10[2]) {
              if ((puVar10[4] != 0) && (puVar10[4] != param_2)) {
                uVar18 = 0;
                uVar20 = 0;
                uVar9 = *puVar10 >> 0x19 & 7;
                if (uVar9 != 0) {
                  uVar21 = 0;
                  do {
                    uVar20 = uVar20 + 1;
                    uVar3 = uVar21 & 0x3f;
                    uVar21 = uVar21 + 2;
                    uVar18 = 1 << ((*puVar10 >> 5 & 0xff) >> uVar3 & 3) | uVar18;
                  } while (uVar20 < uVar9);
                }
                uVar8 = uVar18 | uVar8;
              }
            }
          }
          if ((1 << (*(unsigned int *)*piVar14 >> 5 & 3) & uVar8) != 0) {
            uVar8 = 0;
            piVar7 = (int *)(param_2 + 0x2c);
            for (uVar9 = 0; uVar9 < uVar19; uVar9 = uVar9 + 1) {
              if ((((unsigned int *)*piVar7)[3] == uVar15) && ((1 << (uVar9 & 0x3f) & uVar13) != 0)) {
                uVar8 = 1 << (*(unsigned int *)*piVar7 >> 5 & 3) | uVar8;
              }
              piVar7 = piVar7 + 1;
            }
            if (uVar8 != 0) {
              uVar13 = uVar5 | uVar13;
            }
          }
        }
        piVar14 = piVar14 + 1;
        uVar5 = uVar5 << 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (uVar13 == (1 << (*(unsigned int *)(param_2 + 8) >> 0x13 & 7)) - 1U) {
    uVar5 = 0;
  }
  else {
    uVar6 = *(unsigned int *)(param_2 + 0x1c);
    uVar4 = fn_82ADCF98(uVar13);
    uVar5 = fn_82B84350(param_1,uVar6,0,uVar4);
    uVar15 = uVar5 & 0xfffffffe;
    puVar10 = (unsigned int *)((param_2 & 0xfffffffe) + 0x24);
    *(unsigned int *)(uVar15 + 0x24) = *puVar10;
    *(unsigned int *)(*puVar10 & 0xfffffffe) = uVar15;
    *(unsigned int *)(uVar15 + 0x28) = param_2 & 0xfffffffe;
    *puVar10 = uVar15 + 0x28;
    if ((param_3 & 0xffffffff) != 0) {
      fn_82B25248(param_1,uVar5,param_3);
    }
    piVar14 = (int *)0x0;
    if (((~(unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0xffffffff) >> 0xe & 1) != 0) {
      for (piVar14 = *(int **)(param_2 + 0x10); (piVar14 != (int *)0x0 && (*piVar14 != 1));
          piVar14 = (int *)piVar14[1]) {
      }
    }
    uVar15 = 0;
    lVar16 = 0;
    uVar8 = 0;
    uVar9 = 1;
    if ((*(unsigned int *)(param_2 + 8) & 0x380000) != 0) {
      uVar18 = 0;
      uVar21 = 0;
      uVar20 = 0;
      piVar7 = piVar14;
      do {
        if ((uVar9 & uVar13) != 0) {
          uVar6 = fn_82AD1978(uVar5,*(unsigned int *)(uVar20 + param_2 + 0x2c));
          *(unsigned int *)(uVar5 + 0x2c + uVar21) = uVar6;
          uVar3 = 0xf << (uVar21 & 0x3f);
          uVar2 = (*(unsigned short *)(param_2 + 0xe) >> (uVar20 & 0x3f) & 0xf) << (uVar21 & 0x3f);
          if ((uVar3 & *(unsigned int *)(uVar5 + 0xc) & 0xffff) != uVar2) {
            *(unsigned short *)(uVar5 + 0xe) =
                 (unsigned short)*(unsigned int *)(uVar5 + 0xc) & ~(unsigned short)uVar3 | (unsigned short)uVar2;
          }
          if (piVar14 != (int *)0x0) {
            fn_82B82378(*(unsigned __int64 *)(piVar7 + 2),*(unsigned __int64 *)(piVar7 + 10),uVar5,lVar16)
            ;
          }
          iVar17 = (int)lVar16;
          lVar16 = lVar16 + 1;
          uVar15 = uVar15 & ~(3 << (uVar18 & 0x3f)) | iVar17 << (uVar18 & 0x3f);
          uVar21 = uVar21 + 4;
        }
        uVar8 = uVar8 + 1;
        uVar20 = uVar20 + 4;
        uVar18 = uVar18 + 2;
        uVar9 = uVar9 << 1;
        piVar7 = piVar7 + 2;
      } while (uVar8 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7));
    }
    while (puVar10 = (unsigned int *)*puVar12, puVar10 != (unsigned int *)0x0) {
      if (puVar10[4] != 0) {
        uVar8 = *puVar10;
        puVar11 = (unsigned int *)(puVar10[3] + 4);
        *puVar10 = ((((uVar15 >> (uVar8 >> 10 & 6) & 3) << 2 | uVar15 >> (uVar8 >> 8 & 6) & 3) << 2
                    | uVar15 >> (uVar8 >> 6 & 6) & 3) << 2 | uVar15 >> (uVar8 >> 4 & 6) & 3) << 5 |
                   uVar8 & 0xffffe01f;
        for (puVar1 = (unsigned int *)*puVar11; puVar1 != puVar10; puVar1 = (unsigned int *)puVar1[2]) {
          puVar11 = puVar1 + 2;
        }
        *puVar11 = puVar10[2];
        puVar10[2] = *(unsigned int *)(uVar5 + 4);
        *(unsigned int **)(uVar5 + 4) = puVar10;
        puVar10[3] = uVar5;
        if ((param_3 & 0xffffffff) != 0) {
          fn_82B25248(param_1,puVar10[4],param_3);
        }
      }
      if ((unsigned int *)*puVar12 == puVar10) {
        puVar12 = puVar10 + 2;
      }
    }
    if ((param_3 & 0xffffffff) != 0) {
      uVar8 = 0;
      uVar15 = 1;
      if ((*(unsigned int *)(param_2 + 8) & 0x380000) != 0) {
        piVar14 = (int *)(param_2 + 0x2c);
        do {
          if ((uVar15 & uVar13) == 0) {
            fn_82B25248(param_1,*(unsigned int *)(*piVar14 + 0xc),param_3);
          }
          uVar8 = uVar8 + 1;
          piVar14 = piVar14 + 1;
          uVar15 = uVar15 << 1;
        } while (uVar8 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7));
      }
    }
    if ((*(unsigned int *)(param_1 + 0x28) & 0x4000) != 0) {
      *(unsigned int *)(uVar5 + 8) =
           ((1 << (*(unsigned int *)(uVar5 + 8) >> 0xe & 7)) + -1) * 2 & 0x1eU | 0x1000000 |
           *(unsigned int *)(uVar5 + 8) & 0xffffffe1;
    }
  }
  return uVar5;
}

