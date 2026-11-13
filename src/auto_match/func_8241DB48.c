typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8227B5E0();
extern int fn_8229A000();
extern int fn_8235CC60();
extern int fn_82360BB0();
extern int fn_823B6790();
extern int fn_823B67F8();
extern int fn_823B68A8();
extern int fn_823B6D70();
extern int fn_823B6FD0();
extern int fn_82417F58();
extern int fn_8241EF08();
extern int fn_8241F138();
extern int fn_824CCFC8();
extern int fn_8288B760();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821B9BC8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


/* WARNING: Removing unreachable block (ram,0x8241dd64) */
/* WARNING: Removing unreachable block (ram,0x8241dd70) */

void fn_8241DB48(double param_1,int *param_2)

{
  unsigned int uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  char cVar11;
  int iVar10;
  __int64 lVar12;
  
  fVar5 = ltcg_pool_0_0f;
  iVar6 = param_2[0xa7];
  if (iVar6 == 1) {
    bVar2 = false;
    iVar10 = 0;
    iVar6 = fn_82417F58(param_2);
    if (iVar6 != 0) {
      if (*(int *)(iVar6 + 0x24) == 0) {
        bVar2 = true;
        lVar12 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x29c) - 8;
        iVar10 = (int)lVar12 - ((*(unsigned int *)(iVar6 + 0x29c) - 9) + (unsigned int)(lVar12 == 0));
      }
      else {
        iVar10 = lbl_832975B0;
        if (lbl_832975B0 == 0) {
          iVar10 = fn_82250A18();
        }
        if (*(char *)(iVar10 + 4) == '\0') {
          if (*(int *)(iVar6 + 0x24) != 0) {
            if (*(int *)(iVar6 + 0x168) == 0) {
              uVar9 = *(unsigned int *)(iVar6 + 0x16c);
            }
            else {
              uVar9 = fn_8288B760();
              uVar9 = uVar9 & 0xff;
            }
            if (((uVar9 != 0) && (*(int *)(iVar6 + 0x24) != 0)) &&
               (iVar6 = fn_824CCFC8(), iVar6 != 0)) goto LAB_8241e29c;
          }
LAB_8241e388:
          iVar10 = 0;
        }
        else {
LAB_8241e29c:
          iVar6 = *param_2;
          if (((*(int *)(iVar6 + 0xc14) == 0) ||
              ((*(int *)(iVar6 + 0x2bb0) == 3 && (*(float *)(iVar6 + 0x2b34) == ltcg_pool_0_0f)))) ||
             (*(int *)(iVar6 + 0x2b3c) == 0)) {
            fVar5 = ltcg_pool_0_0f;
            if (*(int *)(iVar6 + 0x2b30) != 0) {
              fVar5 = *(float *)(iVar6 + 0x614);
            }
            if ((*(float *)(iVar6 + 0x2bb8) <= fVar5) &&
               (*(float *)(iVar6 + 0x2b24) <= ltcg_pool_0_0f)) goto LAB_8241e388;
          }
          iVar10 = 1;
        }
      }
    }
    iVar6 = *param_2;
    if (param_2 == *(int **)(iVar6 + 0x2b20)) {
      if (iVar10 != 0) {
        return;
      }
      iVar10 = fn_82360BB0(iVar6);
      if ((iVar10 == 0) && (!bVar2)) {
        return;
      }
      if (*(int *)(iVar6 + 0x2b40) != 0) {
        return;
      }
      if (param_2[0x9f] != 0) {
        return;
      }
      if (param_2[0xac] != 0) {
        return;
      }
      if (param_2[0xb3] != 0) {
        return;
      }
    }
    iVar10 = 2;
    param_2[0xb7] = 2;
    param_2[0xa9] = *(int *)(iVar6 + 0x6ec);
LAB_8241e374:
    param_2[0xa7] = iVar10;
  }
  else {
    if (iVar6 == 2) {
      fVar3 = -(float)((double)(float)param_2[0xa9] - param_1);
      fVar4 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar4 = (float)((double)(float)param_2[0xa9] - param_1);
      }
      param_2[0xa9] = (int)fVar4;
      if (fVar4 != fVar5) {
        return;
      }
      (**(int (***)())(*(int *)param_2[1] + 0x4c))();
      param_2[0x21] = 2;
      param_2[0x6d] = 5;
      fn_8235CC60(*param_2,0);
      if (param_2 == *(int **)(*param_2 + 0x2b20)) {
        fn_8229A000(*(unsigned int *)(*(int *)(*param_2 + 0xd4) + 0x20));
      }
      param_2[0xab] = (unsigned int)LZCOUNT(*(unsigned int *)(param_2[6] * 0x1ac + param_2[2] + 4)) >> 5;
      iVar6 = *(int *)(*param_2 + 0x6f0);
      param_2[0xa7] = 3;
      param_2[0xa9] = iVar6;
      return;
    }
    if (iVar6 == 3) {
      fVar3 = -(float)((double)(float)param_2[0xa9] - param_1);
      fVar4 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar4 = (float)((double)(float)param_2[0xa9] - param_1);
      }
      param_2[0xa9] = (int)fVar4;
      if (fVar4 != fVar5) {
        return;
      }
      iVar6 = fn_82417F58(param_2);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) != 0)) {
        *(unsigned int *)(*(int *)(iVar6 + 0x24) + 0x15c) = 0;
      }
      fn_8241EF08(param_2,param_2[0xa8]);
      param_2[0xa7] = 4;
      iVar6 = *(int *)(*param_2 + 0x6f4);
    }
    else {
      if (iVar6 != 4) {
        if (iVar6 == 5) {
          fVar3 = -(float)((double)(float)param_2[0xa9] - param_1);
          fVar4 = ltcg_pool_0_0f;
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                        (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
            fVar4 = (float)((double)(float)param_2[0xa9] - param_1);
          }
          param_2[0xa9] = (int)fVar4;
          if (fVar4 != fVar5) {
            return;
          }
          fn_8241F138(param_2);
          iVar7 = 0;
          iVar6 = fn_82417F58(param_2);
          if (iVar6 != 0) {
            if ((param_2[0xab] == 0) || (*(int *)(iVar6 + 0x24) == 0)) {
              param_2[0xb8] = 1;
            }
            if (*(int *)(iVar6 + 0x24) != 0) {
              param_2[0x21] = 0;
            }
            *(unsigned int *)(iVar6 + 0x2a0) = 0;
            iVar6 = fn_82417F58(param_2);
            if (*(int *)(iVar6 + 0x24) == 0) {
              iVar7 = 6;
              param_2[0xa9] = *(int *)(*param_2 + 0x6fc);
            }
          }
          iVar6 = lbl_832975B0;
          if (lbl_832975B0 == 0) {
            iVar6 = fn_82250A18();
          }
          iVar10 = 7;
          if (*(char *)(iVar6 + 4) == '\0') {
            iVar10 = iVar7;
          }
        }
        else {
          if (iVar6 != 6) {
            if (iVar6 != 7) {
              return;
            }
            iVar10 = 0;
            iVar6 = lbl_832975B0;
            if (lbl_832975B0 == 0) {
              iVar6 = fn_82250A18();
            }
            if ((*(char *)(iVar6 + 4) != '\0') && (param_2 == *(int **)(*param_2 + 0x2b20))) {
              iVar6 = *(int *)(*param_2 + 0x8c);
              iVar7 = fn_82417F58(param_2);
              iVar8 = fn_823B6790(iVar6);
              if (iVar8 == 0) {
                return;
              }
              if (param_2[0x9f] != 0) {
                return;
              }
              if (*(int *)(*param_2 + 0x2b40) != 0) {
                return;
              }
              if (iVar7 == 0) {
                return;
              }
              if (*(int *)(iVar7 + 0x168) == 0) {
                uVar9 = *(unsigned int *)(iVar7 + 0x16c);
              }
              else {
                uVar9 = fn_8288B760();
                uVar9 = uVar9 & 0xff;
              }
              uVar1 = *(unsigned int *)(iVar6 + 0xc);
              if (uVar9 == 0) {
                if ((uVar1 != 0) && (cVar11 = fn_8288B760((unsigned __int64)uVar1 - 0x68), cVar11 == '\0')
                   ) {
                  fn_823B68A8(iVar6);
                }
                iVar10 = fn_823B67F8(iVar6);
              }
              else if ((uVar1 == 0) ||
                      (cVar11 = fn_8288B760((unsigned __int64)uVar1 - 0x68), cVar11 == '\0')) {
                if ((*(unsigned int *)(iVar6 + 0xc) == 0) ||
                   (cVar11 = fn_8288B760((unsigned __int64)*(unsigned int *)(iVar6 + 0xc) - 0x68), cVar11 != '\0')
                   ) {
                  bVar2 = false;
                }
                else {
                  iVar8 = *(int *)(iVar6 + 0xc) + -0x68;
                  if (*(int *)(iVar6 + 0xc) == 0) {
                    iVar8 = 0;
                  }
                  if ((*(int *)(iVar8 + 0x50) == 2) || (bVar2 = false, *(int *)(iVar8 + 0x50) == 4))
                  {
                    bVar2 = true;
                  }
                }
                if (!bVar2) {
                  fn_823B6FD0(iVar6);
                }
              }
              else {
                fn_823B68A8(iVar6);
                iVar8 = fn_823B67F8(iVar6);
                if ((iVar8 != 0) && (*(int *)(*param_2 + 0x2b40) == 0)) {
                  fn_823B6D70(iVar6);
                  iVar10 = 1;
                }
              }
              if (*(int *)(iVar7 + 0x24) != 0) {
                *(unsigned int *)(*(int *)(iVar7 + 0x24) + 0x15c) = 0;
              }
              if (iVar10 == 0) {
                return;
              }
            }
            param_2[0x6c] = 0;
            iVar6 = param_2[0xfe];
            if (iVar6 != param_2[0xff]) {
              iVar10 = param_2[0xff];
              for (iVar7 = iVar6; iVar7 != iVar10; iVar7 = iVar7 + 0x18) {
                *(unsigned char ***)(iVar7 + 4) = &lbl_821B9BC8;
              }
              param_2[0xff] = iVar6;
            }
            param_2[0xa7] = 0;
            return;
          }
          fVar3 = -(float)((double)(float)param_2[0xa9] - param_1);
          fVar4 = ltcg_pool_0_0f;
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                        (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
            fVar4 = (float)((double)(float)param_2[0xa9] - param_1);
          }
          param_2[0xa9] = (int)fVar4;
          if (fVar4 != fVar5) {
            return;
          }
          iVar6 = fn_82417F58(param_2);
          if (*(int *)(iVar6 + 0x24) == 0) {
            param_2[0x21] = 3;
          }
          iVar10 = 0;
        }
        goto LAB_8241e374;
      }
      iVar6 = *param_2;
      iVar10 = *(int *)(iVar6 + 0x184);
      if (iVar10 == 0) {
LAB_8241df74:
        iVar10 = 0;
      }
      else if (*(unsigned int *)(iVar10 + 0xa48) < 2) {
        iVar10 = 1;
      }
      else {
        if (*(unsigned int *)(iVar10 + 0xa48) == 6) goto LAB_8241df74;
        iVar10 = *(int *)(iVar10 + 0xa5c);
      }
      if (iVar10 != 0) {
        if (*(int *)(iVar6 + 0x184) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(*(int *)(iVar6 + 0x184) + 0xa58);
        }
        if (iVar10 == 0) {
          if (*(int *)(iVar6 + 0x184) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (unsigned int)LZCOUNT(*(int *)(*(int *)(iVar6 + 0x184) + 0xa48) + -4) >> 5;
          }
          if (uVar9 == 0) {
            return;
          }
          if (param_2[0xa9] == 0) {
            return;
          }
          fVar3 = -(float)((double)(float)param_2[0xa9] - param_1);
          fVar4 = ltcg_pool_0_0f;
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                        (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
            fVar4 = (float)((double)(float)param_2[0xa9] - param_1);
          }
          param_2[0xa9] = (int)fVar4;
          if (fVar4 != fVar5) {
            return;
          }
          if (*(int *)(*param_2 + 0x184) == 0) {
            return;
          }
          fn_8227B5E0();
          return;
        }
      }
      if (*(int *)(iVar6 + 0x184) != 0) {
        iVar10 = *(int *)(iVar6 + 0x188);
        *(unsigned int *)(iVar6 + 0x188) = 0;
        *(unsigned int *)(iVar6 + 0x184) = 0;
        if (iVar10 != 0) {
          fn_822315A0();
        }
      }
      iVar6 = fn_82417F58(param_2);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x24) == 0)) {
        param_2[0x6d] = 0;
      }
      else {
        param_2[0x6d] = 1;
      }
      param_2[0xa7] = 5;
      iVar6 = *(int *)(*param_2 + 0x6f8);
    }
    param_2[0xa9] = iVar6;
  }
  return;
}

