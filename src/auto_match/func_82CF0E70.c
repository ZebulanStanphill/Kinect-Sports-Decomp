extern unsigned int *auStack_160;
extern int fn_82CEDE90();
extern int fn_82CFBB60();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;


void fn_82CF0E70(double param_1,unsigned __int64 param_2,float *param_3,__int64 param_4)

{
  unsigned short uVar1;
  float fVar2;
  float *pfVar3;
  unsigned short uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  float *pfVar8;
  int iVar9;
  double dVar10;
  unsigned char auStack_160 [272];
  
  if ((int)param_4 != 0) {
    if (1 < (int)param_4) {
      lVar6 = param_4 + -1;
      do {
        fn_82CEDE90(param_2,0xffffffff82015a34);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar1 = *(unsigned short *)(param_3 + 8);
    pfVar3 = param_3 + 8;
    lVar6 = 0;
    uVar4 = 0;
    if ((uVar1 != 0) && (lVar6 = 1, uVar1 != 0)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)((int)param_3 + 0x22);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)(param_3 + 9);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)((int)param_3 + 0x26);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)(param_3 + 10);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)((int)param_3 + 0x2a);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)(param_3 + 0xb);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    uVar1 = *(unsigned short *)((int)param_3 + 0x2e);
    if ((uVar1 != 0) && (lVar6 = lVar6 + 1, uVar4 < uVar1)) {
      uVar4 = uVar1;
    }
    fn_82CFBB60(auStack_160,200,0xffffffff82133034,param_3[0x13],uVar4);
    fVar2 = param_3[0x13];
    if (uVar4 < 2) {
      fn_82CFBB60(auStack_160,200,0xffffffff821c4da8,fVar2);
    }
    else if (param_1 == (double)lbl_82002AE0) {
      fn_82CFBB60(auStack_160,200,0xffffffff82132fec,fVar2,uVar4);
    }
    else {
      fn_82CFBB60(auStack_160,200,0xffffffff82133028,fVar2,
                        (double)(float)((double)uVar4 * param_1));
    }
    fn_82CEDE90(param_2,0xffffffff82133020,auStack_160);
    lVar7 = 3;
    do {
      fn_82CEDE90(param_2,0xffffffff82015a34);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if ((int)lVar6 == 0) {
      fn_82CEDE90(param_2,0xffffffff82133014,lbl_82005710);
    }
    else {
      lVar7 = 8;
      pfVar8 = param_3;
      do {
        uVar1 = *(unsigned short *)pfVar3;
        if (uVar1 != 0) {
          dVar10 = (double)(float)((double)*pfVar8 * param_1);
          if (uVar1 < uVar4) {
            dVar10 = (double)(float)((double)((float)uVar4 / (float)uVar1) * dVar10);
          }
          lVar6 = lVar6 + -1;
          if (lVar6 == 0) {
            fn_82CEDE90(param_2,0xffffffff82133014,dVar10);
          }
          else {
            fn_82CEDE90(param_2,0xffffffff82132fd4,dVar10);
          }
        }
        lVar7 = lVar7 + -1;
        pfVar3 = (float *)((int)pfVar3 + 2);
        pfVar8 = pfVar8 + 1;
      } while (lVar7 != 0);
    }
  }
  iVar5 = 0;
  if (0 < (int)param_3[0xd]) {
    iVar9 = 0;
    do {
      fn_82CF0E70(param_1,param_2,*(unsigned int *)(iVar9 + (int)param_3[0xc]),param_4 + 1);
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar5 < (int)param_3[0xd]);
  }
  return;
}

