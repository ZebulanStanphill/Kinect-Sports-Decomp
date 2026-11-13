typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABE2E0();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82B102D0();
extern int fn_82B17400();
extern int fn_82B25248();
extern int fn_82B84350();
extern int fn_82B8AC10();


void fn_82B28530(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  bool bVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  char cVar9;
  unsigned int uVar8;
  unsigned __int64 uVar10;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned __int64 uVar11;
  unsigned int uVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  int iVar17;
  unsigned int *puVar18;
  int *piVar19;
  unsigned int uVar20;
  
  bVar4 = false;
  puVar16 = (unsigned int *)(param_2 + 4);
  do {
    puVar1 = (unsigned int *)*puVar16;
    if (puVar1 == (unsigned int *)0x0) {
      if (bVar4) {
        fn_82B25248(param_1,param_2,param_7);
        fn_82B25248(param_1,param_4,param_7);
        piVar19 = (int *)(param_2 + 0x28);
        for (uVar20 = 0; uVar20 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
          piVar19 = piVar19 + 1;
          fn_82B25248(param_1,*(unsigned int *)(*piVar19 + 0xc),param_7);
        }
      }
      else {
        cVar9 = fn_82ABE2E0(param_4);
        if (cVar9 != '\0') {
          fn_82B8AC10(param_1,param_4,0,1);
        }
      }
      return;
    }
    uVar20 = puVar1[4];
    uVar6 = param_4;
    if (uVar20 != 0) {
      uVar13 = *puVar1;
      uVar8 = uVar13 >> 0x19 & 7;
      if (uVar8 != 0) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar8 = 0;
          do {
            if (param_3 == ((uVar13 >> 5 & 0xff) >> (uVar8 & 0x3f) & 3)) {
              bVar3 = true;
              goto LAB_82b285c4;
            }
            uVar14 = uVar14 + 1;
            uVar8 = uVar8 + 2;
          } while (uVar14 < (*puVar1 >> 0x19 & 7));
        }
        bVar3 = false;
LAB_82b285c4:
        if (bVar3) {
          if ((param_6 & 0xffffffff) != 0) {
            if ((param_6 & 0x18) == 0) {
              if ((param_6 & 2) == 0) {
LAB_82b28600:
                if ((param_6 & 4) != 0) {
                  bVar3 = false;
                  if ((uVar13 & 1) != 0) goto LAB_82b28618;
                }
                bVar3 = true;
              }
              else {
                if ((uVar13 & 1) == 0) goto LAB_82b28600;
                bVar3 = false;
              }
LAB_82b28618:
              if (bVar3) goto LAB_82b286a0;
            }
            uVar6 = fn_82B84350(param_1,*(unsigned int *)(param_2 + 0x1c),0,1);
            uVar13 = uVar6 & 0xfffffffe;
            puVar12 = (unsigned int *)((param_2 & 0xfffffffe) + 0x24);
            *(unsigned int *)(uVar13 + 0x24) = *puVar12;
            *(unsigned int *)(*puVar12 & 0xfffffffe) = uVar13;
            *(unsigned int *)(uVar13 + 0x28) = param_2 & 0xfffffffe;
            *puVar12 = uVar13 + 0x28;
            uVar5 = fn_82AD1918(param_1,param_4,param_5,param_6);
            uVar7 = fn_82AD1978(uVar6,uVar5);
            *(unsigned int *)(uVar6 + 0x2c) = uVar7;
            param_5 = 0;
            param_6 = 0;
          }
LAB_82b286a0:
          uVar13 = *puVar1 >> 0x19;
          if ((uVar13 & 7) == 1) {
            uVar13 = *(unsigned int *)(uVar20 + 8) >> 7 & 0x7f;
            if (uVar13 == 0x70) {
              if ((*(int *)(uVar20 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
                 ((*(int *)(uVar6 + 0x1c) != *(int *)(param_2 + 0x1c) ||
                  ((*(unsigned int *)(uVar6 + 8) & 0x3f80) == 0x3800)))) goto LAB_82b28a24;
            }
            cVar9 = fn_82B17400(uVar20,uVar6,param_1);
            if (cVar9 == '\0') goto LAB_82b28a24;
            if (uVar13 == 0x70) {
              uVar13 = *(unsigned int *)(param_2 + 0x1c);
              if (*(unsigned int *)(uVar6 + 0x1c) != uVar13) {
                if (uVar13 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)))
                {
                  uVar8 = fn_82B102D0(param_1,uVar13,uVar6,param_5,param_6);
                  puVar15 = (unsigned int *)(puVar1[3] + 4);
                  for (puVar12 = (unsigned int *)*puVar15; puVar12 != puVar1; puVar12 = (unsigned int *)puVar12[2])
                  {
                    puVar15 = puVar12 + 2;
                  }
                  *puVar15 = puVar1[2];
                  puVar1[2] = *(unsigned int *)(uVar8 + 4);
                  *(unsigned int **)(uVar8 + 4) = puVar1;
                  uVar13 = *puVar1 & 0xffffe01f | 0x1c80;
                  puVar1[3] = uVar8;
                  goto LAB_82b28a0c;
                }
                goto LAB_82b28a24;
              }
            }
            puVar15 = (unsigned int *)(puVar1[3] + 4);
            for (puVar12 = (unsigned int *)*puVar15; puVar12 != puVar1; puVar12 = (unsigned int *)puVar12[2]) {
              puVar15 = puVar12 + 2;
            }
            *puVar15 = puVar1[2];
            uVar8 = (unsigned int)((param_5 & 0x1b) << 5) | 0x1c80;
            puVar1[2] = *(unsigned int *)(uVar6 + 4);
            *(unsigned int **)(uVar6 + 4) = puVar1;
            uVar13 = *puVar1;
            puVar1[3] = uVar6;
            *puVar1 = uVar8 | uVar13 & 0xfffffc9f;
            uVar11 = (unsigned __int64)uVar13 & 0x1f;
            uVar10 = param_6;
            if (((param_6 & 4) != 0) && ((uVar13 & 2) != 0)) {
              uVar10 = param_6 - 4;
            }
            if ((uVar10 & uVar11 & 4) != 0) {
              uVar10 = uVar10 - 4;
              uVar11 = uVar11 - 4;
            }
            uVar14 = (unsigned int)uVar11;
            if (((uVar10 & 1) != 0) && ((uVar11 & 2) != 0)) {
              uVar14 = uVar14 - 2;
            }
            uVar13 = uVar8 | uVar13 & 0xfffffc80 | ((unsigned int)uVar10 | uVar14) & 0x1f;
          }
          else {
            uVar11 = 0;
            uVar8 = 0;
            if ((uVar13 & 7) != 0) {
              uVar13 = 0;
              do {
                uVar8 = uVar8 + 1;
                uVar11 = (unsigned int)(1 << ((*puVar1 >> 5 & 0xff) >> (uVar13 & 0x3f) & 3)) | uVar11;
                uVar13 = uVar13 + 2;
              } while (uVar8 < (*puVar1 >> 0x19 & 7));
            }
            uVar8 = fn_82B84350(param_1,*(unsigned int *)(uVar20 + 0x1c),0,
                                      ((0x8da691691448U >> (uVar11 & 0x7f)) >> (uVar11 & 0x7f)) >>
                                      (uVar11 & 0x7f) & 7);
            uVar13 = uVar8 & 0xfffffffe;
            puVar12 = (unsigned int *)((uVar20 & 0xfffffffe) + 0x24);
            *(unsigned int *)(uVar13 + 0x24) = *puVar12;
            *(unsigned int *)(*puVar12 & 0xfffffffe) = uVar13;
            *(unsigned int *)(uVar13 + 0x28) = uVar20 & 0xfffffffe;
            *puVar12 = uVar13 + 0x28;
            fn_82B25248(param_1,uVar8,param_7);
            uVar13 = 0;
            iVar17 = 0;
            if (uVar11 != 0) {
              puVar18 = (unsigned int *)(uVar8 + 0x2c);
              do {
                uVar10 = uVar11 & ~(uVar11 - 1);
                uVar11 = uVar11 - uVar10;
                uVar10 = 0x1f - LZCOUNT((int)uVar10);
                if ((unsigned int)uVar10 == param_3) {
                  uVar5 = fn_82AD1918(param_1,uVar6,param_5,param_6);
                }
                else {
                  uVar5 = fn_82AD18C0(param_1,param_2,uVar10);
                }
                uVar7 = fn_82AD1978(uVar8,uVar5);
                uVar2 = (unsigned int)((uVar10 & 0xffffffff) << 1);
                *puVar18 = uVar7;
                uVar14 = iVar17 << (uVar2 & 0x3e);
                iVar17 = iVar17 + 1;
                uVar13 = uVar13 & ~(3 << (uVar2 & 0x3e)) | uVar14;
                puVar18 = puVar18 + 1;
              } while ((uVar11 & 0xffffffff) != 0);
            }
            puVar15 = (unsigned int *)(puVar1[3] + 4);
            for (puVar12 = (unsigned int *)*puVar15; puVar12 != puVar1; puVar12 = (unsigned int *)puVar12[2]) {
              puVar15 = puVar12 + 2;
            }
            *puVar15 = puVar1[2];
            puVar1[2] = *(unsigned int *)(uVar8 + 4);
            *(unsigned int **)(uVar8 + 4) = puVar1;
            uVar14 = *puVar1;
            puVar1[3] = uVar8;
            uVar13 = ((((uVar13 >> (uVar14 >> 10 & 6) & 3) << 2 | uVar13 >> (uVar14 >> 8 & 6) & 3)
                       << 2 | uVar13 >> (uVar14 >> 6 & 6) & 3) << 2 |
                     uVar13 >> (uVar14 >> 4 & 6) & 3) << 5 | uVar14 & 0xffffe01f;
          }
LAB_82b28a0c:
          *puVar1 = uVar13;
          fn_82B25248(param_1,uVar20,param_7);
          bVar4 = true;
        }
      }
    }
LAB_82b28a24:
    param_4 = uVar6;
    if ((unsigned int *)*puVar16 == puVar1) {
      puVar16 = puVar1 + 2;
    }
  } while( true );
}

