void fn_82FAD148(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    do {
      piVar1 = *(int **)(param_1 + 4);
      if (piVar1 != (int *)0x0) {
        if (piVar1[1] == 0) {
          *(unsigned int *)(param_1 + 4) = 0;
          *(unsigned int *)(param_1 + 8) = 0;
        }
        else {
          *(int *)(param_1 + 4) = piVar1[1];
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
      (**(int (***)())(*piVar1 + 8))();
    } while (*(int *)(param_1 + 0xc) != 0);
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return;
}

