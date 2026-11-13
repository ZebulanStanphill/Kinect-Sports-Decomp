int fn_82E58EA0(int param_1,int *param_2,unsigned int *param_3)

{
  int uVar1;
  
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = *(unsigned int *)(param_1 + 0xc);
  }
  uVar1 = (*(int (**)())(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10),param_2,0);
  if (uVar1 >= 0) {
    if (param_2 != (int *)0x0) {
      if ((unsigned int)*param_2 != 0) {
        *param_2 = *(int *)(param_1 + 0x14) + *param_2;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

