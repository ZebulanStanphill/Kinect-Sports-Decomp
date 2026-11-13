extern int fn_83066088();


unsigned int * fn_83066358(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  int iVar2;
  unsigned int uVar1;
  
  param_1[3] = param_3;
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  iVar2 = (*(int (**)())*param_3)(param_3);
  if (0 < iVar2) {
    uVar1 = (*(int (**)())*param_3)(param_3);
    fn_83066088(param_1,uVar1);
  }
  return param_1;
}

