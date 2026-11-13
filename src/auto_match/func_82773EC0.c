extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


void fn_82773EC0(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  
  *(float *)(param_2 + 0x9c4) = (float)param_1;
  param_1 = -param_1;
  dVar3 = (double)fn_82F67DE8(lbl_82005710);
  dVar4 = (double)(float)dVar3;
  dVar3 = (double)fn_82F67DE8(param_1);
  *(float *)(param_2 + 0x9d0) = (float)dVar3;
  *(float *)(param_2 + 0x9d8) = (float)dVar4;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  *(unsigned int *)(param_2 + 0x9cc) = lbl_82002AE0;
  *(unsigned int *)(param_2 + 0x9d4) = uVar2;
  *(unsigned int *)(param_2 + 0x9dc) = uVar1;
  *(unsigned int *)(param_2 + 0x9e0) = uVar2;
  return;
}

