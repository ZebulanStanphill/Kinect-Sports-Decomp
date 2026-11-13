extern unsigned int *auStack_a0;
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;


void fn_82ADEED8(unsigned int *param_1,int param_2,int param_3,unsigned int param_4,__int64 param_5,
                  unsigned int param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned int uStack0000002c;
  unsigned int auStack_a0 [40];
  
  uVar7 = (unsigned int)param_5;
  uStack0000002c = param_4;
  uVar2 = param_8 & 0xf;
  *param_1 = 0;
  auStack_a0[1] = 0;
  auStack_a0[0] = 0;
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar9 = *(unsigned int *)(param_2 + 0xc0);
    uVar15 = 0;
    uVar16 = ((0x8da691691448U >> uVar2) >> uVar2) >> uVar2 & 7;
    lVar14 = 0;
    do {
      uVar12 = uVar16;
      if ((uVar9 >> 0x1e & 1) != 0) {
        uVar8 = 0;
        if (uVar13 < (uVar9 & 7)) {
          uVar12 = (param_8 & 0xffffffff) >> 2;
          uVar8 = uVar12 & 0x3c;
          uVar8 = ((2L << ((uVar12 & 0x3ffffffc) + 3 & 0x3f)) - 1U &
                   *(unsigned __int64 *)
                    ((int)((((param_8 & 0xffffffff) >> 8) + lVar14 + 5 & 0xffffffff) << 3) + param_2
                    ) & -1L << uVar8) >> uVar8 & 0xffffffff & uVar2;
        }
        if (param_3 != 0) {
          uVar10 = 0;
          uVar12 = (unsigned __int64)*(unsigned int *)(param_3 + 0xc0) & 7;
          if ((*(unsigned int *)(param_3 + 0xc0) & 7) != 0) {
            uVar6 = 0;
            do {
              if (((1 << ((unsigned int)uVar10 & 0x3f) & param_6) == 0) &&
                 (uVar13 == ((2 << (uVar6 + 3 & 0x1f)) - 1U &
                             *(unsigned int *)((int)&stack0x0000002c + (uVar6 >> 3 & 0x1ffffffc)) &
                            -1 << (uVar6 & 0x1f)) >> (uVar6 & 0x1f))) break;
              uVar10 = uVar10 + 1;
              uVar6 = uVar6 + 4;
            } while ((uVar10 & 0xffffffff) < uVar12);
          }
          if ((uVar10 & 0xffffffff) < uVar12) {
            uVar12 = (param_8 & 0xffffffff) >> 2;
            uVar3 = uVar12 & 0x3c;
            uVar8 = (*(unsigned __int64 *)
                      ((int)((((param_8 & 0xffffffff) >> 8) + (uVar10 + 1) * 5 & 0xffffffff) << 3) +
                      param_3) & (2L << ((uVar12 & 0x3ffffffc) + 3 & 0x3f)) - 1U & -1L << uVar3) >>
                    uVar3 & 0xffffffff & uVar2 | uVar8;
          }
        }
        uVar6 = uVar15 >> 3 & 0x1ffffffc;
        uVar12 = uVar16 - (((0x8da691691448U >> uVar8) >> uVar8) >> uVar8 & 7);
        *(unsigned int *)((int)auStack_a0 + uVar6 + 4) =
             (int)uVar8 << (uVar15 & 0x1f) | *(unsigned int *)((int)auStack_a0 + uVar6 + 4);
        if (uVar12 == 0) {
          return;
        }
      }
      uVar11 = uVar15 >> 3 & 0x1ffffffc;
      uVar6 = uVar15 & 0x1f;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 5;
      uVar15 = uVar15 + 4;
      *(unsigned int *)((int)auStack_a0 + uVar11) =
           (int)uVar12 << uVar6 | *(unsigned int *)((int)auStack_a0 + uVar11);
    } while (uVar13 < uVar7);
  }
  uVar13 = 0;
  uVar16 = uVar2;
  if (uVar7 != 0) {
    do {
      uVar9 = 0;
      uVar15 = 4;
      uVar6 = 0;
      uVar11 = 0;
      do {
        uVar1 = ((2 << (uVar11 + 3 & 0x1f)) - 1U &
                 *(unsigned int *)((int)auStack_a0 + (uVar11 >> 3 & 0x1ffffffc)) & -1 << (uVar11 & 0x1f)) >>
                (uVar11 & 0x1f);
        if (uVar1 == 0) {
          return;
        }
        if (uVar1 < uVar15) {
          uVar9 = uVar6;
          uVar15 = uVar1;
        }
        uVar6 = uVar6 + 1;
        uVar11 = uVar11 + 4;
      } while (uVar6 < uVar7);
      uVar15 = uVar9 >> 1 & 0x1ffffffc;
      iVar5 = (uVar9 & 7) << 2;
      uVar6 = 0;
      uVar12 = uVar16 & ~(unsigned __int64)
                         (((2 << (uVar9 * 4 + 3 & 0x1f)) - 1U &
                           *(unsigned int *)((int)auStack_a0 + uVar15 + 4) & -1 << iVar5) >> iVar5);
      uVar12 = uVar12 & ~(uVar12 - 1);
      uVar16 = uVar16 - uVar12;
      lVar14 = param_5;
      do {
        uVar1 = uVar6 & 0x1f;
        uVar4 = uVar6 >> 3 & 0x1ffffffc;
        uVar11 = *(unsigned int *)((int)auStack_a0 + uVar4 + 4);
        if ((((2 << (uVar6 + 3 & 0x1f)) - 1U & -1 << uVar1 & uVar11) >> uVar1 & uVar12) == 0) {
          *(int *)((int)auStack_a0 + uVar4) = *(int *)((int)auStack_a0 + uVar4) - (1 << uVar1);
          *(unsigned int *)((int)auStack_a0 + uVar4 + 4) = (int)uVar12 << uVar1 | uVar11;
        }
        uVar6 = uVar6 + 4;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      uVar11 = uVar9 >> 2 & 0x1ffffffc;
      uVar6 = *(unsigned int *)((int)auStack_a0 + uVar15);
      uVar13 = uVar13 + 1;
      *(unsigned int *)(uVar11 + (int)param_1) =
           0x1f - (int)LZCOUNT((int)uVar12) << ((uVar9 & 0xf) << 1) |
           *(unsigned int *)(uVar11 + (int)param_1);
      *(unsigned int *)((int)auStack_a0 + uVar15) = 8 << iVar5 | uVar6;
    } while (uVar13 < uVar7);
  }
  uVar7 = *param_1;
  *param_1 = uVar7 | 0x100;
  *param_1 = (unsigned int)((uVar2 - uVar16 & 0xffffffff) << 10) | uVar7 | 0x100;
  return;
}

