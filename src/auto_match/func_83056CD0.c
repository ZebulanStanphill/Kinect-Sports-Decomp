extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82089FC0;
extern unsigned int lbl_8217E1C4;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_83056CD0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_2 == (float *)0x0) {
    return 0x1f;
  }
  fVar1 = *param_2;
  *(float *)(param_1 + 4) = fVar1;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  fVar2 = lbl_8217E1C4;
  *(float *)(param_1 + 0x10) = param_2[3];
  fVar3 = lbl_821AAD20;
  *(float *)(param_1 + 0x14) = param_2[4];
  *(unsigned char *)(param_1 + 0x18) = 1;
  if ((fVar1 < fVar2) || (fVar3 < fVar1)) {
    *(float *)(param_1 + 4) = fVar3;
  }
  if ((*(float *)(param_1 + 8) < fVar2) || (fVar3 < *(float *)(param_1 + 8))) {
    *(float *)(param_1 + 8) = fVar3;
  }
  if ((*(float *)(param_1 + 0xc) < fVar3) || (lbl_82005748 < *(float *)(param_1 + 0xc))) {
    *(float *)(param_1 + 0xc) = fVar3;
  }
  if ((*(float *)(param_1 + 0x10) < lbl_82002AE0) || (lbl_82089FC0 < *(float *)(param_1 + 0x10))) {
    *(unsigned int *)(param_1 + 0x10) = lbl_8200D898;
  }
  if ((*(int *)(param_1 + 0x14) < 0) || (5 < *(int *)(param_1 + 0x14))) {
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return 1;
}

