extern int fn_82F6DFD0();
extern unsigned int lbl_82005710;


void fn_82902280(int param_1,double *param_2,double *param_3,double *param_4,unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double adStack_50 [10];
  
  dVar4 = *param_3;
  dVar8 = *param_4;
  dVar7 = param_4[1];
  dVar6 = param_3[1];
  *param_2 = *(double *)(param_1 + 0xa8);
  dVar5 = lbl_82005710;
  uVar2 = 0;
  adStack_50[0] = dVar8 * dVar4;
  pdVar3 = adStack_50;
  adStack_50[1] = dVar7 * dVar4;
  adStack_50[2] = dVar6 * dVar8;
  adStack_50[3] = dVar6 * dVar7;
  param_2[1] = *(double *)(param_1 + 0xb0);
  do {
    iVar1 = fn_82F6DFD0(*pdVar3);
    if (iVar1 != 0) {
      if ((param_5 & 0x40) != 0) {
        dVar5 = adStack_50[uVar2];
        *param_2 = dVar5;
        param_2[1] = dVar5;
        return;
      }
      *pdVar3 = dVar5;
    }
    dVar4 = *pdVar3;
    if (dVar4 < *param_2) {
      *param_2 = dVar4;
    }
    if (param_2[1] < dVar4) {
      param_2[1] = dVar4;
    }
    uVar2 = uVar2 + 1;
    pdVar3 = pdVar3 + 1;
  } while (uVar2 < 4);
  return;
}

