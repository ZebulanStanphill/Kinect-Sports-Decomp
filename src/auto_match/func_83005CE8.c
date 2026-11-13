void fn_83005CE8(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  
  *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 1;
  if ((param_2 & 1) != 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      param_2 = param_2 & 0xfffe;
      (**(int (***)())(*piVar1 + 0x94))(piVar1,3);
    }
  }
  if (((param_2 & 2) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x44) + 4);
    if (piVar1 != (int *)0x0) {
      param_2 = (param_2 & 0xffff) << 0x20 | param_2 & 0xfffd;
      (**(int (***)())(*piVar1 + 0x94))(piVar1,3);
    }
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0x94))(piVar1,param_2);
  }
  return;
}

