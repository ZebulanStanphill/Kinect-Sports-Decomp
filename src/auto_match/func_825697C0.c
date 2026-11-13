extern int fn_82569598();
extern int fn_82569740();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821CA460;


void fn_825697C0(double param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  unsigned int *puVar4;
  int in_r0;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  puVar4 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  iVar3 = *(int *)(param_3 + 0x78);
  fVar1 = *(float *)(param_3 + 0x94);
  *(float *)(param_3 + 0x20) = (float)param_1;
  *(float *)(param_3 + 0x28) = (float)param_2;
  *(unsigned char *)(param_3 + 0x24) = 0;
  puVar4 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fVar1 = lbl_821CA460 / fVar1;
  if (iVar3 == 0) {
    fVar2 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar2 = *(float *)(param_3 + 0x90);
  }
  dVar5 = (double)(fVar2 * fVar1 - *(float *)(param_3 + 0x98) * fVar1);
  if (dVar5 < 0.0) {
    dVar5 = lbl_82195518;
  }
  fn_82569598((double)(float)dVar5,param_3,**(unsigned int **)(param_3 + 0x60));
  if (*(int *)(param_3 + 0x78) == 0) {
    fVar1 = *(float *)(param_3 + 0x88);
  }
  else {
    fVar1 = *(float *)(param_3 + 0x90);
  }
  if (*(int *)(param_3 + 0xdc) != 0) {
    fn_82569740((double)(fVar1 / *(float *)(param_3 + 0x94)),param_3);
  }
  return;
}

