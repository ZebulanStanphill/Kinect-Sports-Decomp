extern int fn_82D40880();
extern int fn_82D408C8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_8213856C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831819C8;


void fn_82D40FE8(double param_1,double param_2,unsigned int *param_3,int param_4,int param_5)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  double extraout_f1;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  param_3[4] = (float)param_2;
  iVar4 = -0x7ce80000;
  *param_3 = &lbl_8213856C;
  fVar1 = lbl_821AAD20;
  *(unsigned short *)((int)param_3 + 6) = 1;
  param_3[2] = 0;
  param_3[3] = 2;
  if (lbl_831819C8 < fVar1) {
    param_3 = (unsigned int *)fn_82D40880();
    *(float *)(iVar4 + 0x19c8) = (float)((double)lbl_82002AE0 - extraout_f1);
  }
  puVar2 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  fVar1 = (float)param_3[4];
  puVar3 = (unsigned int *)((unsigned int)(param_3 + 8) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  param_3[5] = (float)param_1;
  puVar2 = (unsigned int *)((unsigned int)(param_3 + 0xc) & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  param_3[0xb] = (float)((double)fVar1 + param_1);
  param_3[0xf] = (float)((double)(float)param_3[4] + param_1);
  iVar4 = fn_82D408C8();
  *(unsigned int *)(iVar4 + 0x18) = lbl_820579A8;
  return;
}

