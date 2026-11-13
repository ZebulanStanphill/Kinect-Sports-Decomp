extern int malloc();
extern unsigned int lbl_83263398;


void fn_82F857F8(unsigned int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  lbl_83263398 = lbl_83263398 + 1;
  iVar1 = malloc(0x1000);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    uVar2 = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    uVar2 = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[3] = uVar2;
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}

