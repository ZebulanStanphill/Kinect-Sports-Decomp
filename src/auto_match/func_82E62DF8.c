int fn_82E62DF8(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
  int *piVar1;
  int uVar2;
  
  uVar2 = 0;
  if (((param_2 < *(unsigned int *)(param_1 + 0x54)) && (param_3 != (unsigned int *)0x0)) &&
     (param_4 != (unsigned int *)0x0)) {
    *param_3 = *(unsigned int *)(*(int *)(param_1 + 0x5c) + param_2 * 4);
    piVar1 = *(int **)(*(int *)(param_1 + 0x58) + param_2 * 4);
    *param_4 = piVar1;
    if (piVar1 != 0) { (*(int (**)())(*piVar1 + 4))(piVar1); }
    else { uVar2 = 0x8000ffff; }
  }
  else {
    uVar2 = 0x80070057;
  }
  return uVar2;
}

