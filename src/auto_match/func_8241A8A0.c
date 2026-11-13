extern float lbl_821CA45C[];


void fn_8241A8A0(int *param_1,int param_2)

{
  float iVar1;
  int iVar2;
  
  iVar2 = (*(int (**)())(*(int *)param_1[1] + 0x3c))(param_1[1]);
  if ((((iVar2 != 0) && (*(int *)(param_2 + 0x24) != 0)) &&
      (*(int *)(param_1[6] * 0x1ac + param_1[2] + 0x1c) != 0)) &&
     (iVar2 = *param_1, param_1 == *(int **)(iVar2 + 0x2b20))) {
    if (*(int *)(iVar2 + 0x2c9c) == 3) {
      *(unsigned int *)(iVar2 + 0x2c9c) = 0;
      *(float *)(iVar2 + 0x2ca0) = lbl_821CA45C[1];
    }
    else {
      *(unsigned int *)(iVar2 + 0x2c9c) = 1;
    }
  }
  iVar1 = 0.0f;
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0xcb8) == 0) {
    *(float *)(param_1 + 0x8d) = 0.0f;
  }
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  if (param_1 == *(int **)(iVar2 + 0x2b20)) {
    *(float *)(iVar2 + 0x2c04) = iVar1;
  }
  return;
}

