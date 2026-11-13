typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a8;
extern int fn_82B80EE0();


unsigned __int64 fn_82AF8968(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int *piVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar18;
  unsigned __int64 uVar17;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned __int64 uVar21;
  unsigned int uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  unsigned __int64 *puStack0000002c;
  unsigned __int64 auStack_a8 [21];
  
  uVar18 = 0;
  uVar10 = *(unsigned int *)(param_3 + 8) >> 0xe & 7;
  uVar7 = 0;
  uVar12 = *(unsigned int *)(param_2 + 8) >> 0xe;
  uVar11 = uVar12 & 7;
  piVar9 = (int *)(param_3 + 0x2c);
  do {
    if ((*(unsigned int *)(param_2 + 8) >> 0x13 & 7) <= uVar7) {
      puVar1 = *(unsigned int **)(param_2 + 0x2c);
      puVar2 = *(unsigned int **)(param_3 + 0x2c);
      if (((*puVar1 >> 0x19 & 7) == uVar11) && ((*puVar2 >> 0x19 & 7) == uVar10)) {
        uVar7 = 0;
        uVar14 = 0;
        for (puVar3 = *(unsigned int **)(param_2 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
          piVar9 = (int *)puVar3[4];
          if (((piVar9 != (int *)0x0) && ((*puVar3 & 0xe000000) != 0)) &&
             ((piVar9[2] & 0x3f80U) == 0x3800)) {
            if ((*piVar9 == 0) || (bVar23 = true, *(int *)(*piVar9 + 4) == 0)) {
              bVar23 = false;
            }
            if ((bVar23) ||
               (((*(unsigned int *)(piVar9[7] + 0x4c) ^ *(unsigned int *)(*(int *)(param_2 + 0x1c) + 0x4c)) &
                0x7ffff) != 0)) {
              uVar7 = 1 << (*puVar3 >> 5 & 3) | uVar7;
            }
          }
        }
        for (puVar3 = *(unsigned int **)(param_3 + 4); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)puVar3[2]) {
          piVar9 = (int *)puVar3[4];
          if (((piVar9 != (int *)0x0) && ((*puVar3 & 0xe000000) != 0)) &&
             ((piVar9[2] & 0x3f80U) == 0x3800)) {
            if ((*piVar9 == 0) || (bVar23 = true, *(int *)(*piVar9 + 4) == 0)) {
              bVar23 = false;
            }
            if ((bVar23) ||
               (((*(unsigned int *)(piVar9[7] + 0x4c) ^ *(unsigned int *)(*(int *)(param_3 + 0x1c) + 0x4c)) &
                0x7ffff) != 0)) {
              uVar14 = 1 << (*puVar3 >> 5 & 3) | uVar14;
            }
          }
        }
        uVar13 = 0;
        uVar16 = 0;
        auStack_a8[0] = 0;
        puStack0000002c = param_4;
        if ((uVar12 & 7) != 0) {
          iVar15 = 0;
          do {
            if ((1 << (uVar16 & 0x3f) & uVar7) == 0) {
              uVar22 = 0;
              uVar12 = (*puVar1 >> 5 & 0xff) >> (uVar18 & 0x3f) & 3;
              if (param_2 == param_3) {
                uVar22 = uVar16 + 1;
              }
              if (uVar22 < uVar10) {
                uVar21 = ((unsigned __int64)uVar13 & 0x3fffffff) << 2;
                uVar20 = uVar22 << 1;
                do {
                  if ((1 << (uVar22 & 0x3f) & uVar14) == 0) {
                    uVar5 = (*puVar2 >> 5 & 0xff) >> (uVar20 & 0x3f) & 3;
                    bVar23 = uVar5 == uVar12;
                    if ((*(unsigned int *)(puVar1[3] + 8) & 0x3f80) == 16000) {
                      dVar24 = (double)fn_82B80EE0(puVar1[3],uVar12,*puVar1 & 0x1f);
                      dVar25 = (double)fn_82B80EE0(puVar2[3],uVar5,*puVar2 & 0x1f);
                      bVar23 = dVar24 == dVar25;
                      param_4 = puStack0000002c;
                    }
                    if (bVar23) {
                      uVar5 = (unsigned int)((uVar21 & 0xffffffff) >> 3) & 0x1ffffff8;
                      uVar19 = uVar21 & 0x3f;
                      uVar13 = uVar13 + 1;
                      uVar21 = uVar21 + 4;
                      *(unsigned __int64 *)((int)auStack_a8 + uVar5) =
                           (unsigned __int64)(iVar15 + uVar22) << uVar19 |
                           *(unsigned __int64 *)((int)auStack_a8 + uVar5);
                    }
                  }
                  uVar22 = uVar22 + 1;
                  uVar20 = uVar20 + 2;
                } while (uVar22 < uVar10);
              }
            }
            uVar16 = uVar16 + 1;
            uVar18 = uVar18 + 2;
            iVar15 = iVar15 + 4;
          } while (uVar16 < uVar11);
        }
        uVar12 = 1;
        if (0x80000 < (*(unsigned int *)(param_2 + 8) & 0x380000)) {
          piVar9 = (int *)(param_3 + 0x30);
          do {
            puVar2 = *(unsigned int **)((int)piVar9 + (param_2 - param_3));
            uVar7 = 0;
            puVar1 = (unsigned int *)*piVar9;
            if (uVar13 != 0) {
              uVar19 = 0;
              uVar21 = ((unsigned __int64)uVar13 & 0x3fffffff) * 4 - 4;
              do {
                uVar10 = *puVar2;
                uVar6 = uVar19 & 0x3f;
                uVar11 = puVar2[3];
                uVar18 = (unsigned int)((uVar19 & 0xffffffff) >> 3) & 0x1ffffff8;
                uVar17 = (2L << (uVar19 + 3 & 0x3f)) - 1U & -1L << uVar6;
                uVar4 = (*(unsigned __int64 *)((int)auStack_a8 + uVar18) & uVar17) >> uVar6 & 0xffffffff;
                uVar14 = (uVar10 >> 5 & 0xff) >> ((unsigned int)(uVar4 >> 1) & 0x3e) & 3;
                uVar16 = (*puVar1 >> 5 & 0xff) >> ((unsigned int)(uVar4 << 1) & 6) & 3;
                bVar23 = uVar16 == uVar14;
                if ((*(unsigned int *)(uVar11 + 8) & 0x3f80) == 16000) {
                  dVar24 = (double)fn_82B80EE0(uVar11,uVar14,uVar10 & 0x1f);
                  dVar25 = (double)fn_82B80EE0(puVar1[3],uVar16,*puVar1 & 0x1f);
                  bVar23 = dVar24 == dVar25;
                }
                if (bVar23) {
                  uVar7 = uVar7 + 1;
                  uVar19 = uVar19 + 4;
                }
                else {
                  uVar8 = uVar21 + 3;
                  uVar10 = (unsigned int)uVar21;
                  uVar4 = uVar21 & 0x3f;
                  uVar13 = uVar13 - 1;
                  uVar21 = uVar21 - 4;
                  *(unsigned __int64 *)((int)auStack_a8 + uVar18) =
                       *(unsigned __int64 *)((int)auStack_a8 + uVar18) & ~uVar17 |
                       (((2L << (uVar8 & 0x3f)) - 1U &
                         *(unsigned __int64 *)((int)auStack_a8 + (uVar10 >> 3 & 0x1ffffff8)) & -1L << uVar4
                        ) >> uVar4 & 0xffffffff) << uVar6;
                }
                param_4 = puStack0000002c;
              } while (uVar7 < uVar13);
            }
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar12 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7));
        }
        if (uVar13 != 0) {
          *(unsigned int *)(param_4 + 1) = uVar13 & 0x1f | *(unsigned int *)(param_4 + 1) & 0xffffffe0;
          *param_4 = auStack_a8[0];
          return 1;
        }
      }
      return 0;
    }
    iVar15 = *(int *)(*(int *)((param_2 - param_3) + (int)piVar9) + 0xc);
    if (iVar15 != *(int *)(*piVar9 + 0xc)) {
      if ((*(unsigned int *)(iVar15 + 8) & 0x3f80) != 16000) {
        return 0;
      }
      if ((*(unsigned int *)(*(int *)(*piVar9 + 0xc) + 8) & 0x3f80) != 16000) {
        return 0;
      }
    }
    uVar7 = uVar7 + 1;
    piVar9 = piVar9 + 1;
  } while( true );
}

