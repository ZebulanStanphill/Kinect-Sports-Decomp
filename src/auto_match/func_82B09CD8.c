typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d8;
extern int fn_82ABE250();
extern int fn_82AF4FF8();
extern int fn_82AF54E0();
extern int fn_82AF6268();
extern int fn_82AF7548();
extern int fn_82AF7598();
extern int fn_82AF85E8();
extern int fn_82AF8668();
extern int fn_82AF8E30();
extern int fn_82AFA478();
extern int fn_82B006B0();
extern int fn_82B09BE0();
extern int fn_82B16698();
extern int fn_82B85910();
extern unsigned int uStack0000003c;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


bool fn_82B09CD8(int param_1,int *param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5,
                  unsigned int param_6,char param_7,unsigned char *param_8)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar7;
  char cVar12;
  unsigned int uVar8;
  unsigned char bVar13;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar6;
  unsigned int *puVar14;
  __int64 lVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int *piVar20;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  int *piVar21;
  int *piVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int *puStack00000034;
  unsigned int uStack0000003c;
  unsigned char *puStack0000004c;
  unsigned int uStack_e0;
  unsigned int auStack_d8 [2];
  unsigned __int64 uStack_d0;
  unsigned __int64 uStack_c0;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [176];
  
  uVar8 = 0;
  uStack_e0 = 0;
  param_2[5] = param_2[5] | 6;
  if (param_7 != '\0') {
    for (puVar14 = (unsigned int *)param_2[1]; uStack_e0 = uVar8, puVar14 != (unsigned int *)0x0;
        puVar14 = (unsigned int *)puVar14[2]) {
      if ((puVar14[4] != 0) && ((*puVar14 & 0xe000000) != 0)) {
        uVar8 = *puVar14 & 0x1f | uVar8;
      }
    }
  }
  puStack00000034 = param_5;
  uStack0000003c = param_6;
  puStack0000004c = param_8;
  puVar7 = (unsigned int *)fn_82ABE250(param_1,0x10,0x25);
  fn_82AF85E8();
  piVar21 = param_2;
  piVar22 = param_2;
  for (iVar11 = *(int *)(param_3 + 4); iVar11 != 0; iVar11 = *(int *)(iVar11 + 8)) {
    piVar1 = *(int **)(iVar11 + 0x10);
    if ((((piVar1 != (int *)0x0) && (param_2 != piVar1)) && (param_2[7] == piVar1[7])) &&
       (((param_2[2] ^ piVar1[2]) & 0x3f80U) == 0)) {
      if (((unsigned int)piVar1[2] >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,piVar1,*(unsigned int *)(param_1 + 0x294));
      }
      cVar12 = fn_82AF6268(param_1,piVar1);
      if (((cVar12 == '\0') &&
          (uVar8 = fn_82AF8E30(param_1,param_2,piVar1,auStack_b0), uVar8 < 5)) &&
         ((piVar1 != piVar21 && (piVar1 != piVar22)))) {
        if (((piVar1[2] & 0x40000000U) == 0) || ((piVar21[2] & 0x40000000U) == 0)) {
          bVar13 = fn_82B85910(piVar1,piVar21);
        }
        else {
          bVar13 = -((piVar21[5] & 0xfffffff8U) < (piVar1[5] & 0xfffffff8U)) & 1;
        }
        piVar20 = piVar21;
        if (bVar13 != 0) {
          do {
            piVar20 = *(int **)(((unsigned int)piVar20 & 0xfffffffe) + 0x28);
            piVar21 = piVar1;
            if ((((unsigned int)piVar20 & 1) != 0) || (piVar20 == (int *)0x0)) break;
            for (iVar2 = *piVar20; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
              if ((*(unsigned int *)(*(int *)(iVar2 + 0xc) + 0x14) & 4) != 0) {
                piVar20[5] = piVar20[5] | 4;
                break;
              }
            }
          } while (piVar20 != piVar1);
        }
        if (((piVar22[2] & 0x40000000U) == 0) || ((piVar1[2] & 0x40000000U) == 0)) {
          bVar13 = fn_82B85910(piVar22,piVar1);
        }
        else {
          bVar13 = -((piVar1[5] & 0xfffffff8U) < (piVar22[5] & 0xfffffff8U)) & 1;
        }
        piVar20 = piVar22;
        if (bVar13 != 0) {
          do {
            uVar8 = *(unsigned int *)(((unsigned int)piVar20 & 0xfffffffe) + 0x24);
            piVar22 = piVar1;
            if ((uVar8 & 1) != 0) break;
            uVar8 = uVar8 & 0xfffffffe;
            piVar20 = (int *)(uVar8 - 0x28);
            if (piVar20 == (int *)0x0) break;
            for (iVar2 = *(int *)(uVar8 - 0x24); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
              if ((*(int *)(iVar2 + 0x10) != 0) &&
                 ((*(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x14) & 2) != 0)) {
                *(unsigned int *)(uVar8 - 0x14) = *(unsigned int *)(uVar8 - 0x14) | 2;
                break;
              }
            }
          } while (piVar20 != piVar1);
        }
        if (((piVar1[5] & 4U) == 0) && ((piVar1[5] & 2U) == 0)) {
          fn_82AF8668(puVar7,piVar1);
        }
      }
    }
  }
  uVar8 = 0;
  uVar25 = 0;
  uVar26 = 0xffffffff;
  uVar24 = 10;
  uVar23 = 0;
  uVar27 = 0;
LAB_82b0a25c:
  do {
    cVar12 = fn_82AF7548(puVar7);
    if (cVar12 != '\0') break;
    uVar9 = fn_82AF7598(puVar7);
    uVar10 = fn_82AF8E30(param_1,param_2,uVar9,&uStack_c0);
    iVar11 = fn_82B09BE0(param_1,param_2,uVar9,auStack_d8,&uStack_c0);
    uVar4 = auStack_d8[0];
    if (iVar11 == 0) {
      if (param_7 != '\0') {
        uVar16 = 0;
        for (puVar14 = *(unsigned int **)(uVar9 + 4); puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[2])
        {
          if ((puVar14[4] != 0) && ((*puVar14 & 0xe000000) != 0)) {
            uVar16 = *puVar14 & 0x1f | uVar16;
          }
        }
        if (((uVar16 ^ uStack_e0) & 0x1e) != 0) {
          *puStack0000004c = 1;
          goto LAB_82b0a25c;
        }
      }
      if (auStack_d8[0] < 10) {
        uVar6 = fn_82AF54E0(param_1,param_2,uVar9);
        if (uVar6 == 0) {
          if ((param_2[2] & 0x3f80U) == 0x100) {
            uVar6 = fn_82AF4FF8(param_1);
          }
          else {
            for (puVar14 = (unsigned int *)param_2[1]; puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[2])
            {
              if (((puVar14[4] != 0) && ((*puVar14 & 0xe000000) != 0)) &&
                 ((*(unsigned int *)(puVar14[4] + 8) & 0x3f80) == 0x100)) {
                for (puVar3 = *(unsigned int **)(uVar9 + 4); puVar3 != (unsigned int *)0x0;
                    puVar3 = (unsigned int *)puVar3[2]) {
                  if (((puVar3[4] != 0) && ((*puVar3 & 0xe000000) != 0)) &&
                     ((*(unsigned int *)(puVar3[4] + 8) & 0x3f80) == 0x100)) {
                    uVar18 = fn_82AF4FF8(param_1);
                    uVar6 = uVar18 | uVar6;
                  }
                }
              }
            }
          }
        }
        uVar18 = (unsigned __int64)uStack0000003c;
        uVar16 = 0xffffffff;
        if (uVar18 != 0) {
          lVar15 = 0;
          puVar14 = puStack00000034;
          do {
            if (*puVar14 == uVar9) {
              uVar16 = puVar14[5];
              if ((uStack_b8 & 0x1f) != 0) {
                uVar19 = 0;
                uVar5 = 0;
                do {
                  uStack_d0 = uVar5;
                  uVar17 = *(int *)((int)(((((2L << (uVar19 + 3 & 0x3f)) - 1U &
                                             *(unsigned __int64 *)
                                              ((int)&uStack_c0 + ((unsigned int)uVar19 >> 3 & 0x1ffffff8)) &
                                            -1L << (uVar19 & 0x3f)) >> (uVar19 & 0x3f) & 3) + lVar15
                                           + 1 & 0xffffffff) << 2) + (int)puStack00000034) - 1;
                  if (uVar17 < uVar16) {
                    uVar16 = uVar17;
                  }
                  uVar19 = uVar19 + 4;
                  uVar5 = uStack_d0 + 1;
                } while ((uStack_d0 + 1 & 0xffffffff) < ((unsigned __int64)uStack_b8 & 0x1f));
              }
            }
            puVar14 = puVar14 + 7;
            lVar15 = lVar15 + 7;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        if (((uVar25 & 0xffffffff) < (uVar6 & 0xffffffff)) ||
           (((uVar6 & 0xffffffff) == (uVar25 & 0xffffffff) &&
            ((uVar16 < uVar26 ||
             ((uVar16 == uVar26 &&
              ((uVar17 = uStack_b8 >> 5 & 7, uVar8 < uVar17 ||
               ((uVar17 == uVar8 && ((uVar27 < uVar10 || ((uVar10 == uVar27 && (uVar4 < uVar24))))))
               )))))))))) {
          uVar8 = uStack_b8 >> 5 & 7;
          uVar25 = uVar6;
          uVar26 = uVar16;
          uVar24 = uVar4;
          uVar23 = uVar9;
          uVar27 = uVar10;
        }
      }
      else {
        fn_82AFA478(param_1,param_2,auStack_d8[0]);
      }
    }
  } while( true );
  *puVar7 = *(unsigned int *)(param_1 + 0x3d8);
  *(unsigned int **)(param_1 + 0x3d8) = puVar7;
  do {
    if ((piVar22 == (int *)0x0) || (piVar22[5] = piVar22[5] & 0xfffffff9, piVar22 == piVar21))
    break;
    piVar22 = *(int **)(((unsigned int)piVar22 & 0xfffffffe) + 0x28);
  } while (((unsigned int)piVar22 & 1) == 0);
  uVar23 = -(unsigned int)(uVar24 <= *(unsigned int *)(param_1 + 0x298)) & uVar23;
  if (uVar23 != 0) {
    fn_82B006B0(param_1,param_2,uVar23,auStack_b0);
  }
  return uVar23 != 0;
}

