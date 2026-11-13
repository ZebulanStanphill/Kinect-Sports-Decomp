#define true 1
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_80;
extern int fn_8229CFB8();
extern int fn_8229F758();
extern int fn_8229F858();
extern int fn_8229FF28();
extern int fn_82414950();
extern int fn_82417F58();
extern int fn_8241EE50();
extern int fn_82428E10();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82536070();
extern int fn_82536590();
extern float lbl_82005748;
extern unsigned int lbl_82191F78;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824282B0(double param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  float fVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char auStack_80 [112];
  
  fVar2 = ltcg_pool_0_0f;
  dVar9 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_3 + 0x34) == 0) {
    dVar7 = (double)(float)((double)*(float *)(param_2 + 0x3c) - param_1);
    *(float *)(param_2 + 0x38) = (float)((double)*(float *)(param_2 + 0x38) + param_1);
    dVar8 = -dVar7;
    dVar10 = dVar9;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar8 < dVar9) << 2) | (unsigned int)(NAN(dVar8) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar10 = dVar7;
    }
    *(float *)(param_2 + 0x3c) = (float)dVar10;
    dVar7 = (double)*(float *)(param_3 + 0x50);
    iVar4 = (int)*(float *)(param_3 + 0x50);
    dVar10 = (double)(float)(dVar7 - param_1);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar10 < dVar9) << 2) | (unsigned int)(NAN(dVar10) || NAN(dVar9)) << 2)) <
        0.0) {
      dVar10 = dVar9;
    }
    *(float *)(param_3 + 0x50) = (float)dVar10;
    if (iVar4 != (int)dVar10) {
      if ((double)lbl_821CA460 < dVar10) {
        if ((iVar4 <= *(int *)(*(int *)(param_2 + 8) + 0xe18) + 1) &&
           (lbl_82191F78 < *(float *)(param_2 + 0x38))) {
          *(float *)(param_2 + 0x38) = fVar2;
          fn_82526C70(auStack_80,0x40,0xffffffff821b8b24,*(int *)(param_2 + 8) + 0xdd8,
                            (int)*(float *)(param_3 + 0x50));
          fn_82536070((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0xd98,auStack_80);
          fn_82536590((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0xd94,0);
        }
      }
      if (((double)*(float *)(param_2 + 0x40) <=
           (double)(float)((double)*(float *)(param_3 + 0x50) + param_1)) &&
         ((double)*(float *)(param_3 + 0x50) < (double)*(float *)(param_2 + 0x40))) {
        if (*(int *)(param_2 + 4) == *(int *)(*(int *)(param_2 + 8) + 0x2b20)) {
          fn_82508078(*(unsigned int *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b867c,0);
        }
      }
      if (*(unsigned int *)(param_3 + 0x30) <= *(unsigned int *)(param_2 + 0x44)) {
        if (((double)*(float *)(param_2 + 0x48) <=
             (double)(float)((double)*(float *)(param_3 + 0x50) + param_1)) &&
           ((double)*(float *)(param_3 + 0x50) < (double)*(float *)(param_2 + 0x48))) {
          if (*(int *)(param_2 + 4) == *(int *)(*(int *)(param_2 + 8) + 0x2b20)) {
            fn_82508078(*(unsigned int *)(*(int *)(param_2 + 8) + 0xa4),0xffffffff821b867c,0);
          }
        }
      }
      iVar4 = *(int *)(param_2 + 8);
      if ((*(int *)(iVar4 + 0xa0) == 0) || (*(int *)(*(int *)(iVar4 + 0xa0) + 0x40) != 1)) {
        uVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x1574) -
                (unsigned __int64)
                (unsigned int)(int)(*(float *)(param_3 + 0x50) /
                           (*(float *)(param_2 + 0x1c) /
                           (float)(__int64)(int)*(unsigned int *)(iVar4 + 0x1574)));
        if ((uVar6 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_3 + 0x4c)) {
          fn_82526C70(auStack_80,0x40,0xffffffff821b8b2c,iVar4 + 0x1534,uVar6);
          fn_82536070((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0x14f4,auStack_80);
          *(int *)(param_3 + 0x4c) = (int)uVar6;
        }
      }
    }
    if ((double)*(float *)(param_3 + 0x50) == dVar9) {
      if (dVar9 < dVar7) {
        uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 4);
        iVar4 = fn_82417F58(uVar6);
        if (iVar4 != 0) {
          uVar3 = fn_82417F58(uVar6);
          fn_8241EE50(uVar6,uVar3);
        }
        if (*(int *)(param_2 + 4) == *(int *)(*(int *)(param_2 + 8) + 0x2b20)) {
          fn_8229CFB8(*(unsigned int *)(*(int *)(*(int *)(param_2 + 8) + 0xd4) + 0x1854),0,0);
        }
      }
      if (*(int *)(param_3 + 0x20) == 0) {
        piVar5 = *(int **)(*(int *)(param_2 + 4) + 0x20);
        while( true ) {
          if (piVar5 == *(int **)(*(int *)(param_2 + 4) + 0x24)) break;
          iVar4 = *(int *)(*piVar5 + 0x2c);
          if (((((iVar4 == 4) || (iVar4 == 5)) || (iVar4 == 6)) || ((iVar4 == 7 || (iVar4 == 8))))
             || (iVar4 == 9)) goto LAB_82428670;
          piVar5 = piVar5 + 1;
        }
        fn_82428E10(param_2,param_3);
      }
    }
  }
  else {
    iVar4 = fn_82417F58(*(unsigned int *)(param_2 + 4));
    if ((*(int *)(iVar4 + 0x1a0) != 0) || (*(int *)(iVar4 + 0x1e0) != 0)) {
      fn_82414950(*(unsigned int *)(*(int *)(param_2 + 8) + 0x2b50),0,0x1f);
      iVar4 = *(int *)(*(int *)(param_2 + 8) + 0xa0);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x40) != 1)) {
        fn_82536590(*(int *)(param_2 + 8) + 0x14e8,0);
      }
      *(unsigned int *)(param_3 + 0x34) = 0;
    }
  }
LAB_82428670:
  iVar4 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
  uVar1 = (unsigned int)(float)(__int64)((double)*(float *)(param_3 + 0x50) - lbl_82195598);
  dVar10 = (double)(__int64)(int)uVar1;
  fVar2 = (float)((double)*(float *)(param_3 + 0x50) - dVar10) * lbl_82005748;
  fn_8229FF28(*(unsigned int *)(iVar4 + 0xc),*(unsigned int *)(param_3 + 0x30));
  fn_8229F758(dVar9,dVar10,(double)(__int64)(int)fVar2,*(unsigned int *)(iVar4 + 0xc));
  fn_8229F858(*(unsigned int *)(*(int *)(*(int *)(param_2 + 8) + 0xd4) + 0xc),
                    ((~(unsigned __int64)uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)(9 < (unsigned __int64)uVar1) &
                    1);
  return;
}

