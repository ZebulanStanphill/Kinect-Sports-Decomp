extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;


void fn_8232DB20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[2];
  piVar1[2] = ((int)lbl_83265A28 > 0) == 0;
  (*(int (**)())(*piVar1 + 0x14))(piVar1,iVar2,piVar1[2]);
  *(unsigned int *)(param_1 + 0x6c) = 4;
  *(unsigned int *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x60) = lbl_821CA45C[1];
  return;
}

