typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_1050;
extern unsigned int *auStack_1850;
extern unsigned int *auStack_2050;
extern unsigned int *auStack_20d0;
extern unsigned int *auStack_850;
extern unsigned int fStack_20f0;
extern int fn_82250A18();
extern int fn_82293E20();
extern int fn_8229AAF8();
extern int fn_82358FD8();
extern int fn_8235F3E8();
extern int fn_8235FA10();
extern int fn_8235FD70();
extern int fn_823B6A20();
extern int fn_823B6A78();
extern int fn_823B6E70();
extern int fn_823B7080();
extern int fn_82417F58();
extern int fn_8241AFD0();
extern int fn_8241B4E0();
extern int fn_8241C3A0();
extern int fn_8241C4E0();
extern int fn_8241C5D0();
extern int fn_8241F138();
extern int fn_8241F578();
extern int fn_82422090();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82536070();
extern int fn_82536590();
extern int fn_82552B50();
extern int fn_8288B760();
extern unsigned int iStack_20e8;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821939EC;
extern unsigned int lbl_821939F4;
extern unsigned int lbl_821939FC;
extern unsigned int lbl_82193A04;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_20e0;
extern unsigned int uStack_20e4;
extern unsigned int uStack_20ec;


void fn_8241B7C0(double param_1,int *param_2)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  int iVar10;
  char cVar12;
  int iVar11;
  unsigned __int64 uVar9;
  unsigned __int64 uVar13;
  char *pcVar14;
  unsigned int uVar15;
  __int64 lVar16;
  unsigned int uVar17;
  char *pcVar18;
  unsigned int *puVar19;
  double dVar20;
  double dVar21;
  float fStack_20f0;
  unsigned int uStack_20ec;
  int iStack_20e8;
  unsigned int uStack_20e4;
  unsigned int uStack_20e0;
  unsigned char auStack_20d0 [128];
  unsigned char auStack_2050 [2048];
  unsigned char auStack_1850 [2048];
  unsigned char auStack_1050 [2048];
  unsigned char auStack_850 [2128];
  
  fVar8 = ltcg_pool_0_0f;
  iVar10 = param_2[0x9f];
  if (iVar10 == 1) {
    fVar2 = (float)((double)(float)param_2[0x9a] - param_1);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = ltcg_pool_0_0f;
    }
    param_2[0x9a] = (int)fVar2;
    if (((param_2[0x99] == 0) && (fVar2 != fVar8)) && (param_2[0x97] != 0)) {
      return;
    }
  }
  else {
    if (iVar10 == 2) {
      dVar20 = (double)ltcg_pool_0_0f;
      fStack_20f0 = ltcg_pool_0_0f;
      if (param_2[0x9b] == 0) {
        fn_8241C3A0(param_2,auStack_20d0);
        uStack_20ec = 8;
        iVar10 = param_2[6] * 0x1ac + param_2[2];
        uVar5 = *(unsigned int *)(iVar10 + 0x14);
        (**(int (***)())(*(int *)param_2[1] + 0x28))
                  ((int *)param_2[1],iVar10,auStack_20d0,0,&uStack_20ec,param_2 + 0x9e,
                   param_2 + 0xa1,&fStack_20f0);
        uVar17 = uStack_20ec;
        if ((param_2[0xa1] != 0) &&
           (uVar15 = param_2[6] + 1, uVar1 = (param_2[3] - param_2[2]) / 0x1ac,
           iVar10 = uVar15 - (uVar15 / uVar1) * uVar1, param_2[0xa8] = iVar10, iVar10 != param_2[6])
           ) {
          param_2[0xa7] = 1;
        }
        uVar9 = (unsigned __int64)uStack_20ec;
        param_2[0xa2] = param_2[0x9e];
        if (param_2[0xa5] == 0) {
          fn_8241AFD0(param_2,uVar9,*(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 0x14),0);
          uVar9 = (unsigned __int64)uStack_20ec;
          param_2[0xa5] = uVar17;
        }
        param_2[0xa4] = uVar17;
        if (param_2[0xa5] != (int)uVar9) {
          fn_8241AFD0(param_2,uVar9,uVar5,1);
          uVar9 = (unsigned __int64)uStack_20ec;
        }
        param_2[0xa3] = (int)uVar9;
        iVar10 = fn_82417F58(param_2);
        if (((iVar10 == 0) || (iVar10 = fn_82417F58(param_2), *(int *)(iVar10 + 0x24) == 0)) ||
           ((int)uVar9 != 9)) {
          fn_8241C5D0(param_2,uVar9);
        }
        else {
          iVar10 = *param_2;
          if (param_2 == *(int **)(iVar10 + 0x2b20)) {
            if (*(int *)(iVar10 + 0xc1c) != 0) {
              fn_82536590(iVar10 + 0x148c,0);
            }
            *(unsigned int *)(iVar10 + 0x2b28) = lbl_8218EC10;
          }
        }
        if ((param_2[0xa3] == 0xc) && (iVar10 = fn_82417F58(param_2), iVar10 != 0)) {
          fn_82417F58(param_2);
          iVar10 = *param_2;
          if (param_2 == *(int **)(iVar10 + 0x2b20)) {
            iVar11 = *(int *)(iVar10 + 0xd4);
            dVar21 = (double)*(float *)(iVar10 + 0x65c);
            fn_82358FD8(*(unsigned int *)(iVar11 + 0x1c),auStack_2050,0x400,
                              lbl_821939F4);
            fn_82358FD8(*(unsigned int *)(iVar11 + 0x1c),auStack_1050,0x400,
                              lbl_821939FC);
            goto LAB_8241c22c;
          }
          goto LAB_8241c240;
        }
      }
      else {
        if (param_2[0xa5] == 0) {
          iVar10 = *param_2;
          if (((*(unsigned int *)(iVar10 + 0x7c0) <= *(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 0x14)) &&
              (param_2 == *(int **)(iVar10 + 0x2b20))) &&
             ((*(int *)(iVar10 + 0x2b80) == 0 && (*(int *)(iVar10 + 0x2b84) == 0)))) {
            if ((*(int *)(iVar10 + 0xc0c) != 0) && (*(int *)(iVar10 + 0xcb8) != 0)) {
              pcVar14 = (char *)(iVar10 + 0xffc);
              pcVar18 = pcVar14;
              do {
                cVar12 = *pcVar18;
                pcVar18 = pcVar18 + 1;
              } while (cVar12 != '\0');
              if ((int)pcVar18 - (int)pcVar14 == 1) {
                if (*(int *)(iVar10 + 0x2b98) == 3) {
                  pcVar14 = (char *)(iVar10 + 0xf7c);
                }
                else if (*(int *)(iVar10 + 0x2b98) == 4) {
                  pcVar14 = (char *)(iVar10 + 0xfbc);
                }
                else {
                  pcVar14 = (char *)(iVar10 + 0xf3c);
                }
              }
              fn_82526C70(auStack_20d0,0x80,0xffffffff821b26d0,iVar10 + 0xebc,pcVar14);
              fn_82536070(iVar10 + 0xe3c,auStack_20d0);
              fn_82536590(iVar10 + 0xd6c,0);
            }
            *(unsigned int *)(iVar10 + 0x2b80) = 1;
          }
          param_2[0xa5] = 1;
        }
        param_2[0xa4] = 1;
        if (((param_2[0xa5] != 1) && (iVar10 = *param_2, *(int *)(iVar10 + 0x7c0) == 0)) &&
           (param_2 == *(int **)(iVar10 + 0x2b20))) {
          fn_8235FA10(iVar10,iVar10 + 0xffc,1);
        }
        param_2[0xa3] = 1;
        fn_82417F58(param_2);
        iVar10 = *param_2;
        if (param_2 == *(int **)(iVar10 + 0x2b20)) {
          iVar11 = *(int *)(iVar10 + 0xd4);
          dVar21 = (double)*(float *)(iVar10 + 0x65c);
          fn_82358FD8(*(unsigned int *)(iVar11 + 0x1c),auStack_850,0x400,
                            lbl_821939EC);
          fn_82358FD8(*(unsigned int *)(iVar11 + 0x1c),auStack_1850,0x400,
                            lbl_82193A04);
LAB_8241c22c:
          fn_82293E20(dVar20,dVar21,iVar11);
        }
LAB_8241c240:
        fStack_20f0 = *(float *)(*param_2 + 0x65c) + lbl_821CA460;
      }
      iVar10 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar10 = fn_82250A18();
      }
      if ((*(char *)(iVar10 + 4) != '\0') && (param_2[0xa7] != 1)) {
        param_2[0xa7] = 7;
      }
      iVar10 = *param_2;
      if ((param_2 == *(int **)(iVar10 + 0x2b20)) && (iVar11 = fn_82417F58(param_2), iVar11 != 0))
      {
        iVar11 = fn_82417F58(param_2);
        if (*(int *)(iVar11 + 0x24) != 0) {
          if (param_2[0xa6] == 0) {
            if (*(int *)(iVar10 + 0x94) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(iVar10 + 0x94) + 0x50);
            }
            if ((iVar10 != 0) && (param_2[0x96] != 0)) goto LAB_8241c314;
          }
          if ((param_2[0x9b] == 0) && (param_2[0x9c] == 0)) goto LAB_8241c320;
        }
LAB_8241c314:
        dVar20 = (double)fStack_20f0;
      }
LAB_8241c320:
      param_2[0xa0] = (int)(float)dVar20;
      uVar17 = 3;
      goto LAB_8241c38c;
    }
    if (iVar10 == 3) {
      dVar20 = (double)(float)((double)(float)param_2[0xa0] - param_1);
      dVar21 = (double)ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar20 < dVar21) << 2) | (unsigned int)(NAN(dVar20) || NAN(dVar21)) << 2)
                    ) < 0.0) {
        dVar20 = dVar21;
      }
      param_2[0xa0] = (int)(float)dVar20;
      if (dVar20 != dVar21) {
        return;
      }
      bVar7 = false;
      if (param_2[0x9b] == 0) {
        if (param_2[0x96] != 0) {
          iVar10 = *param_2;
          param_2[0x8c] = *(int *)(iVar10 + 0x61c);
          iVar11 = fn_82417F58(param_2);
          if (((iVar11 != 0) && (iVar11 = fn_82417F58(param_2), *(int *)(iVar11 + 0x24) != 0)) &&
             (param_2[0xa3] == 9)) {
            iVar11 = *(int *)(param_2[6] * 0x1ac + param_2[2] + 0x14);
            if (iVar11 != 0) {
              param_2[0x94] = lbl_821917C0;
              param_2[0x93] = 9;
              uVar5 = lbl_8218EC10;
              iVar3 = param_2[3];
              iVar4 = param_2[2];
              if (param_2 == *(int **)(iVar10 + 0x2b20)) {
                *(int *)(iVar10 + 0x2b2c) = iVar11;
                *(unsigned int *)(iVar10 + 0x2b24) = uVar5;
                *(unsigned int *)(iVar10 + 0x2b30) = -(unsigned int)(1 < (unsigned int)((iVar3 - iVar4) / 0x1ac)) & 1;
              }
            }
          }
        }
        if (param_2[0xa6] == 0) {
          if (*(int *)(*param_2 + 0x94) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(*(int *)(*param_2 + 0x94) + 0x50);
          }
          if (((iVar10 != 0) && (iVar10 = fn_82417F58(param_2), iVar10 != 0)) &&
             ((iVar10 = fn_82417F58(param_2), *(int *)(iVar10 + 0x24) != 0 &&
              (fn_8241C4E0(param_2,&iStack_20e8), iStack_20e8 != 0)))) {
            if ((param_2[0x92] == 0) && (param_2[0xa3] != 9)) {
              lVar16 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
              lbl_83265A28 = (int)lVar16;
              if (lVar16 < 1) {
                uVar13 = 0xffffffff821b8348;
              }
              else {
                uVar13 = 0xffffffff821b8334;
              }
              if (param_2 == *(int **)(*param_2 + 0x2b20)) {
                fn_82508078(*(unsigned int *)(*param_2 + 0xa4),uVar13,0);
              }
            }
            iVar10 = *param_2;
            if (param_2 == *(int **)(iVar10 + 0x2b20)) {
              iVar11 = *(int *)(iVar10 + 0x94);
              *(int *)(iVar10 + 0x2b44) = iStack_20e8;
              *(unsigned int *)(iVar10 + 0x2b48) = uStack_20e4;
              *(unsigned int *)(iVar10 + 0x2b4c) = uStack_20e0;
              if (iVar11 != 0) {
                *(unsigned int *)(iVar11 + 0x3c) = 1;
                *(unsigned int *)(iVar11 + 0x48) = 0;
              }
              *(unsigned int *)(*(int *)(iVar10 + 0x194) + 0x200) = 0;
              *(unsigned int *)(iVar10 + 0x198) = 1;
              *(unsigned int *)(iVar10 + 0x2b40) = 1;
              fn_8241F138(*(unsigned int *)(iVar10 + 0x2b20));
            }
            bVar7 = true;
          }
        }
        param_2[0xa6] = 0;
        if ((param_2 != *(int **)(*param_2 + 0x2b20)) || (uVar13 = 1, bVar7)) {
          uVar13 = 0;
        }
        fn_82422090(param_2 + 0x62,uVar13);
        iVar10 = *(int *)(param_2[6] * 0x1ac + param_2[2] + 0x14);
        if ((iVar10 != 0) && (*(int *)(iVar10 * 0x68 + *param_2 + 0x1640) != 0)) {
          param_2[0x70] = *(int *)(*param_2 + 0x634);
        }
      }
      iVar10 = 3;
      if (param_2[0x6d] != 4) {
        param_2[0x6d] = 3;
      }
      iVar11 = fn_82417F58(param_2);
      if ((((iVar11 != 0) && (iVar11 = fn_82417F58(param_2), *(int *)(iVar11 + 0x24) == 0)) &&
          (*(int *)(*param_2 + 0xc34) != 0)) && (param_2[0xa1] == 0)) {
        param_2[0x21] = iVar10;
        param_2[0x6d] = 0;
      }
      (**(int (***)())(*(int *)param_2[1] + 0x2c))();
      fn_8241F578(param_2,0);
      bVar6 = false;
      iVar10 = *param_2;
      if (((((*(int *)(iVar10 + 0xc30) == 0) || (bVar7)) ||
           ((param_2 != *(int **)(iVar10 + 0x2b20) ||
            ((iVar11 = fn_82417F58(), iVar11 == 0 ||
             (iVar11 = fn_82417F58(param_2), *(int *)(iVar11 + 0x24) == 0)))))) ||
          (param_2[0xc] == 0)) || (*(int *)(param_2[0xc] + 0x3c) != 0)) {
        puVar19 = (unsigned int *)param_2[8];
        if (puVar19 != (unsigned int *)param_2[9]) {
          do {
            fn_8241B4E0(param_2,*puVar19,!bVar7);
            puVar19 = puVar19 + 1;
          } while (puVar19 != (unsigned int *)param_2[9]);
        }
        iVar10 = *param_2;
        if (param_2 == *(int **)(iVar10 + 0x2b20)) {
          fn_82552B50(iVar10 + 0x2b68,1);
          fn_82552B50(iVar10 + 0x2b5c,1);
          fn_82552B50(iVar10 + 0x2b74,1);
          *(unsigned int *)(iVar10 + 0x2b88) = 0;
          *(unsigned int *)(iVar10 + 0x2b80) = 0;
          *(unsigned int *)(iVar10 + 0x2b84) = 0;
          *(unsigned int *)(iVar10 + 0x2b8c) = 0;
          *(unsigned int *)(iVar10 + 0x2b90) = 0;
          *(unsigned int *)(iVar10 + 0x2b94) = 0;
        }
        bVar6 = true;
      }
      else if (param_2 == *(int **)(iVar10 + 0x2b20)) {
        *(unsigned int *)(iVar10 + 0x2cac) = 1;
        *(unsigned int *)(iVar10 + 0x2cb0) = *(unsigned int *)(iVar10 + 0x6d0);
        *(float *)(iVar10 + 0x2cb4) = (float)dVar21;
      }
      if (param_2 == *(int **)(*param_2 + 0x2b20)) {
        fn_8229AAF8(*(unsigned int *)(*param_2 + 0xd4));
      }
      iVar10 = *param_2;
      if (param_2 == *(int **)(iVar10 + 0x2b20)) {
        fn_8235F3E8(iVar10,*(unsigned int *)(iVar10 + 0x640));
      }
      fn_8235FD70(*param_2,param_2,1);
      param_2[0x9a] = (int)(float)dVar21;
      param_2[0x99] = 0;
      param_2[0x90] = 0;
      param_2[0x91] = 0;
      param_2[0x92] = 0;
      if (param_2[0xa2] != 0) {
        param_2[0xa3] = 0;
      }
      param_2[0xb6] = (int)(float)dVar21;
      param_2[0x9b] = 0;
      param_2[0x9c] = 0;
      param_2[0x9d] = 0;
      if (param_2 == *(int **)(*param_2 + 0x2b20)) {
        param_2[0xba] = lbl_8218E8E8;
      }
      uVar17 = -(unsigned int)!bVar6 & 4;
      goto LAB_8241c38c;
    }
    if (iVar10 == 4) {
      iVar10 = *(int *)(*param_2 + 0x2cac);
      if (((iVar10 != 3) && (iVar10 != 4)) && (iVar10 != 0)) {
        return;
      }
      for (puVar19 = (unsigned int *)param_2[8]; puVar19 != (unsigned int *)param_2[9];
          puVar19 = puVar19 + 1) {
        fn_8241B4E0(param_2,*puVar19,0);
      }
      iVar10 = *param_2;
      if (param_2 == *(int **)(iVar10 + 0x2b20)) {
        fn_82552B50(iVar10 + 0x2b68,1);
        fn_82552B50(iVar10 + 0x2b5c,1);
        fn_82552B50(iVar10 + 0x2b74,1);
        *(unsigned int *)(iVar10 + 0x2b88) = 0;
        *(unsigned int *)(iVar10 + 0x2b80) = 0;
        *(unsigned int *)(iVar10 + 0x2b84) = 0;
        *(unsigned int *)(iVar10 + 0x2b8c) = 0;
        *(unsigned int *)(iVar10 + 0x2b90) = 0;
        *(unsigned int *)(iVar10 + 0x2b94) = 0;
      }
      if (param_2 == *(int **)(*param_2 + 0x2b20)) {
        *(unsigned int *)(*(int *)(*param_2 + 0x194) + 0x2a4) = 1;
      }
      param_2[0x9f] = 0;
      return;
    }
    if (iVar10 != 5) {
      return;
    }
    iVar10 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar10 = fn_82250A18();
    }
    if ((*(char *)(iVar10 + 4) == '\0') || (param_2 != *(int **)(*param_2 + 0x2b20))) {
      uVar9 = 1;
    }
    else {
      iVar10 = *(int *)(*param_2 + 0x8c);
      if ((*(unsigned int *)(iVar10 + 0xc) == 0) ||
         (cVar12 = fn_8288B760((unsigned __int64)*(unsigned int *)(iVar10 + 0xc) - 0x68), cVar12 == '\0')) {
        uVar9 = (unsigned __int64)(unsigned int)param_2[0x6c];
      }
      else {
        iVar11 = fn_823B6A20(iVar10);
        if (iVar11 != 0) {
          fn_823B6E70(iVar10);
          iVar11 = fn_82417F58(param_2);
          if ((iVar11 != 0) && (*(int *)(iVar11 + 0x24) != 0)) {
            *(unsigned int *)(*(int *)(iVar11 + 0x24) + 0x15c) = 1;
          }
        }
        uVar9 = fn_823B6A78(iVar10);
        if (uVar9 == 0) {
          return;
        }
        if (((*(unsigned int *)(iVar10 + 0xc) != 0) &&
            (cVar12 = fn_8288B760((unsigned __int64)*(unsigned int *)(iVar10 + 0xc) - 0x68), cVar12 != '\0')) &&
           (iVar11 = fn_823B6A78(iVar10), iVar11 != 0)) {
          fn_823B7080(iVar10);
        }
      }
    }
    if ((int)uVar9 == 0) {
      return;
    }
  }
  uVar17 = 2;
LAB_8241c38c:
  param_2[0x9f] = uVar17;
  return;
}

