extern unsigned int lbl_82002AE0;
extern float lbl_82015468;


void fn_82FDFF78(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = lbl_82015468;
  fVar1 = lbl_82002AE0;
  *(float *)(param_1 + 0x4c) =
       lbl_82002AE0 - (*(float *)(param_1 + 0x194) * lbl_82015468) / (float)*(unsigned int *)(param_1 + 200)
  ;
  *(float *)(param_1 + 0x58) =
       fVar1 - (*(float *)(param_1 + 0x194) * fVar2) / (float)*(unsigned int *)(param_1 + 200);
  *(float *)(param_1 + 100) =
       fVar1 - (*(float *)(param_1 + 0x194) * fVar2) / (float)*(unsigned int *)(param_1 + 200);
  *(float *)(param_1 + 0x70) =
       fVar1 - (*(float *)(param_1 + 0x194) * fVar2) / (float)*(unsigned int *)(param_1 + 200);
  *(float *)(param_1 + 0x7c) =
       fVar1 - (*(float *)(param_1 + 0x194) * fVar2) / (float)*(unsigned int *)(param_1 + 200);
  *(float *)(param_1 + 0x88) =
       fVar1 - (*(float *)(param_1 + 0x194) * fVar2) / (float)*(unsigned int *)(param_1 + 200);
  return;
}

