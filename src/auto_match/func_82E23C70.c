extern unsigned int lbl_82005710;
extern unsigned int lbl_82057810;
extern unsigned int lbl_8214C330;
extern unsigned int lbl_8214C338;


void fn_82E23C70(unsigned __int64 param_1,int param_2)

{
  double dVar1;
  
  dVar1 = lbl_82005710;
  if (*(double *)(param_2 + 8) == lbl_82005710) {
    *(unsigned __int64 *)(param_2 + 8) = lbl_82057810;
  }
  if (*(double *)(param_2 + 0x10) == dVar1) {
    *(unsigned __int64 *)(param_2 + 0x10) = lbl_8214C338;
  }
  if (*(double *)(param_2 + 0x18) == dVar1) {
    *(unsigned __int64 *)(param_2 + 0x18) = lbl_8214C330;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    *(unsigned int *)(param_2 + 0x20) = 10000;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    *(unsigned int *)(param_2 + 0x24) = 0x5a;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x28) = 500;
  return;
}

