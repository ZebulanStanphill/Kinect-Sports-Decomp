typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_10c;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82ABE5F8();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82B80CD0();
extern int fn_82B80EF8();
extern int fn_82B82D28();
extern int fn_82B86A88();
extern int fn_82B86C90();
extern int fn_82B8E778();
extern unsigned int uStack00000014;
extern unsigned int uStack_110;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B8EB40(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  bool bVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned __int64 *puVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 *puVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned __int64 extraout_f1;
  unsigned __int64 extraout_f1_00;
  unsigned __int64 uVar24;
  unsigned int uStack00000014;
  unsigned int *puStack0000002c;
  unsigned int *puStack00000034;
  unsigned int uStack_110;
  unsigned int auStack_10c [9];
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned __int64 auStack_e0 [4];
  unsigned __int64 auStack_c0 [24];
  
  auStack_10c[2] = *param_2 >> 0x19 & 7;
  uStack00000014 = param_1;
  puStack0000002c = param_4;
  puStack00000034 = param_5;
  fn_82B8E778(param_2,param_3,param_4,param_5,0);
  uVar1 = *(unsigned int *)(*param_3 + 8);
  while ((uVar1 & 0x3f80) == 0x3700) {
    uVar1 = *param_4;
    uVar2 = *param_3;
    auStack_10c[4] = *param_5;
    uVar17 = (unsigned __int64)auStack_10c[4];
    fn_82B82D28(*(unsigned int *)(((uVar1 & 3) + 0xb) * 4 + uVar2),0,&uStack_110,auStack_10c + 6,
                  auStack_10c + 1,0,0,0);
    uVar19 = 1;
    uVar16 = (unsigned __int64)auStack_10c[1];
    uVar15 = auStack_10c[6] | 0xe4;
    uVar22 = uStack_110;
    if (1 < auStack_10c[2]) {
      uVar18 = 2;
      puVar13 = auStack_e0;
      do {
        puVar13 = puVar13 + 1;
        fn_82B82D28(*(unsigned int *)(((uVar1 >> (uVar18 & 0x3f) & 3) + 0xb) * 4 + uVar2),0,
                      auStack_10c + 8,auStack_10c + 7,&uStack_e8,0,0,0);
        uVar23 = auStack_10c[8];
        uVar8 = auStack_10c[7];
        uVar14 = (unsigned __int64)uStack_e8;
        uVar15 = uVar15 & ~(3 << (uVar18 & 0x3f)) | auStack_10c[7] << (uVar18 & 0x3f);
        if (uVar22 == auStack_10c[8]) {
LAB_82b8ed88:
          if (uVar16 != uVar14) goto LAB_82b8ed90;
        }
        else {
          if ((*(unsigned int *)(uVar22 + 8) & 0x3f80) != 16000) {
            uVar9 = fn_82B86C90(uVar22,auStack_e0,&uStack_e4);
            uVar22 = 0;
            uVar20 = 0;
            if ((uVar19 & 0xffffffff) != 0) {
              puVar21 = auStack_e0 + 3;
              uVar17 = uVar9;
              do {
                uVar4 = (unsigned __int64)(uVar15 >> (uVar22 & 0x3f));
                if (((unsigned int)(1 << (int)(uVar4 & 3)) & uVar9) == 0) goto LAB_82b8f080;
                iVar11 = (int)((uVar4 & 3) << 1);
                uVar10 = ((2 << (int)((uVar4 & 3) << 1) + 1) - 1U & uStack_e4 & -1 << iVar11) >>
                         iVar11;
                uVar17 = fn_82B80CD0(*(unsigned __int64 *)((int)auStack_e0 + (int)((uVar4 & 3) << 3)),
                                       uVar17,uVar10,uVar16);
                uVar7 = uVar22 >> 3 & 0x1ffffffc;
                puVar21 = puVar21 + 1;
                *puVar21 = extraout_f1;
                uVar5 = uVar22 & 0x1f;
                uVar20 = uVar20 + 1;
                uVar22 = uVar22 + 2;
                *(unsigned int *)((int)auStack_10c + uVar7 + 0xc) =
                     uVar10 << uVar5 | *(unsigned int *)((int)auStack_10c + uVar7 + 0xc);
              } while ((uVar20 & 0xffffffff) < (uVar19 & 0xffffffff));
              uVar17 = (unsigned __int64)auStack_10c[4];
            }
            uStack_110 = fn_82B86A88(uStack00000014,uVar19,auStack_c0,0);
            uVar15 = 0xe4;
            uVar16 = 0;
            param_4 = puStack0000002c;
            param_5 = puStack00000034;
            uVar22 = uStack_110;
          }
          if (uVar22 == uVar23) goto LAB_82b8ed88;
LAB_82b8ed90:
          uVar9 = fn_82B86C90(uVar23,auStack_c0,auStack_10c + 5);
          if ((uVar9 & (unsigned int)(1 << (uVar8 & 0x3f))) == 0) goto LAB_82b8f080;
          if ((uVar19 & 0xffffffff) != 0) {
            uVar23 = 0;
            puVar21 = auStack_e0;
            uVar17 = uVar19;
            do {
              uVar10 = uVar15 >> (uVar23 & 0x3f) & 3;
              uVar9 = fn_82B80EF8(uVar22,uVar10,uVar16);
              iVar11 = *(int *)(uVar22 & 0xfffff000);
              *puVar21 = extraout_f1_00;
              if (((~(unsigned __int64)*(unsigned int *)(*(int *)(iVar11 + 0x94) + 0x28) & 0xffffffff) >> 0xe & 1)
                  == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = (*(unsigned int *)(uVar22 + 0x14) >> 2 & 0xff) >> (uVar10 << 1) & 3;
              }
              uVar7 = uVar23 >> 3 & 0x1ffffffc;
              uVar5 = uVar23 & 0x1f;
              uVar17 = uVar17 - 1;
              puVar21 = puVar21 + 1;
              uVar23 = uVar23 + 2;
              *(unsigned int *)((int)auStack_10c + uVar7) =
                   uVar10 << uVar5 | *(unsigned int *)((int)auStack_10c + uVar7);
            } while (uVar17 != 0);
            uVar17 = (unsigned __int64)auStack_10c[4];
          }
          iVar11 = (uVar8 & 0xf) << 1;
          uVar24 = fn_82B80CD0(auStack_c0[uVar8],uVar9,
                                 ((2 << (uVar8 * 2 + 1 & 0x1f)) - 1U &
                                  *(unsigned int *)((int)auStack_10c + (uVar8 >> 2 & 0x1ffffffc) + 0x14) &
                                 -1 << iVar11) >> iVar11,uVar14);
          *puVar13 = uVar24;
          iVar11 = (uVar8 & 0xf) << 1;
          uVar22 = uVar18 >> 3 & 0x1ffffffc;
          *(unsigned int *)((int)auStack_10c + uVar22) =
               (((2 << (uVar8 * 2 + 1 & 0x1f)) - 1U &
                 *(unsigned int *)((int)auStack_10c + (uVar8 >> 2 & 0x1ffffffc) + 0x14) & -1 << iVar11) >>
               iVar11) << (uVar18 & 0x1f) | *(unsigned int *)((int)auStack_10c + uVar22);
          uStack_110 = fn_82B86A88(uStack00000014,uVar19 + 1,auStack_e0,0);
          uVar15 = 0xe4;
          uVar16 = 0;
          param_4 = puStack0000002c;
          param_5 = puStack00000034;
          uVar22 = uStack_110;
        }
        uVar19 = uVar19 + 1;
        uVar18 = uVar18 + 2;
      } while ((uVar19 & 0xffffffff) < (unsigned __int64)auStack_10c[2]);
    }
    if ((((uVar16 & 0x18) == 0) || ((uVar17 & 0x18) == 0)) &&
       (((uVar16 & 2) == 0 || ((uVar17 & 1) == 0)))) {
      if (((uVar16 & 4) == 0) || (bVar6 = false, (uVar17 & 1) == 0)) {
        bVar6 = true;
      }
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) break;
    if (((uVar16 & 4) != 0) && ((uVar17 & 2) != 0)) {
      uVar16 = uVar16 - 4;
    }
    if ((uVar16 & uVar17 & 4) != 0) {
      uVar16 = uVar16 - 4;
      uVar17 = uVar17 - 4;
    }
    if (((uVar16 & 1) != 0) && ((uVar17 & 2) != 0)) {
      uVar17 = uVar17 - 2;
    }
    *param_3 = uVar22;
    *param_4 = uVar15;
    auStack_10c[1] = (unsigned int)(uVar16 | uVar17);
    *param_5 = auStack_10c[1];
    if (param_2[4] == 0) {
      puVar12 = (unsigned int *)(param_2[3] + 4);
      for (puVar3 = *(unsigned int **)(param_2[3] + 4); puVar3 != param_2; puVar3 = (unsigned int *)puVar3[2]) {
        puVar12 = puVar3 + 2;
      }
      *puVar12 = puVar3[2];
      fn_82ABE5F8(uStack00000014,param_2,0x14,0x1a);
    }
    param_2 = (unsigned int *)fn_82AD17B0(uStack00000014,uVar22);
    *param_2 = (auStack_10c[2] & 7) << 0x19 | *param_2 & 0xf1ffffff;
    fn_82AD1270(param_2,uVar16 | uVar17);
    *param_2 = (uVar15 & 0xff) << 5 | *param_2 & 0xffffe01f;
    fn_82B8E778(param_2,param_3,puStack0000002c,puStack00000034,0);
    param_4 = puStack0000002c;
    param_5 = puStack00000034;
    uVar1 = *(unsigned int *)(*param_3 + 8);
  }
LAB_82b8f080:
  if (param_2[4] == 0) {
    puVar12 = (unsigned int *)(param_2[3] + 4);
    for (puVar3 = *(unsigned int **)(param_2[3] + 4); puVar3 != param_2; puVar3 = (unsigned int *)puVar3[2]) {
      puVar12 = puVar3 + 2;
    }
    *puVar12 = puVar3[2];
    fn_82ABE5F8(uStack00000014,param_2,0x14,0x1a);
  }
  return;
}

