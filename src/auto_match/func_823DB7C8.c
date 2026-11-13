#define NAN(x) ((x) != (x))
extern int fn_823DB9B0();
extern int fn_82672C20();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823DB7C8(double param_1,int param_2)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  fVar2 = ltcg_pool_0_0f;
  dVar3 = (double)ltcg_pool_0_0f;
  if (dVar3 < (double)*(float *)(param_2 + 0x30)) {
    if (*(int *)(param_2 + 0x30) != 0) {
      dVar5 = (double)(float)((double)*(float *)(param_2 + 0x30) - param_1);
      dVar4 = -dVar5;
      dVar6 = dVar3;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) <
          0.0) {
        dVar6 = dVar5;
      }
      *(float *)(param_2 + 0x30) = (float)dVar6;
      if (dVar6 == dVar3) {
        *(float *)(param_2 + 0x24) = fVar2;
        *(unsigned int *)(param_2 + 0x20) = 1;
        *(float *)(param_2 + 0x28) = lbl_821CA460;
      }
    }
    goto LAB_823db988;
  }
  if ((double)*(float *)(param_2 + 0x34) <= dVar3) {
    if ((double)*(float *)(param_2 + 0x38) <= dVar3) goto LAB_823db988;
    if (*(int *)(param_2 + 0x38) != 0) {
      dVar5 = (double)(float)((double)*(float *)(param_2 + 0x38) - param_1);
      dVar4 = -dVar5;
      dVar6 = dVar3;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) <
          0.0) {
        dVar6 = dVar5;
      }
      *(float *)(param_2 + 0x38) = (float)dVar6;
      if (dVar6 == dVar3) goto LAB_823db910;
    }
    fVar2 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x2c);
    *(float *)(param_2 + 0x28) = fVar2;
    *(float *)(param_2 + 0x24) = lbl_821CA460 - fVar2;
  }
  else {
    if (*(int *)(param_2 + 0x34) == 0) goto LAB_823db988;
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0x34) - param_1);
    dVar4 = -dVar5;
    dVar6 = dVar3;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0x34) = (float)dVar6;
    if ((dVar6 != dVar3) || (dVar3 < (double)*(float *)(param_2 + 0x38))) goto LAB_823db988;
LAB_823db910:
    if (*(int *)(param_2 + 0x20) != 0) {
      iVar1 = *(int *)(param_2 + 0x44);
      if ((*(int *)(iVar1 + 0x34) != 0) && (*(int *)(iVar1 + 0x38) == 0)) {
        *(unsigned int *)(iVar1 + 0x38) = 1;
        fn_82672C20(*(unsigned int *)(iVar1 + 0x3c),0xffffffff821a8498,0,0);
      }
      *(unsigned int *)(param_2 + 0x20) = 0;
    }
  }
LAB_823db988:
  if (*(int *)(param_2 + 0x20) != 0) {
    fn_823DB9B0(param_2);
  }
  return;
}

