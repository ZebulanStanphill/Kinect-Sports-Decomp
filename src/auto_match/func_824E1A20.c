extern int fn_824CD030();


void fn_824E1A20(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = fn_824CD030();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      iVar1 = **(int **)(param_1 + 0xfc);
      if (*(int *)(*(int *)(iVar1 + 0x3c) + 0x24) == 0) {
        *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x2c) = 1;
      }
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x28) = 0;
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x24) = 1;
      *(unsigned int *)(*(int *)(**(int **)(param_1 + 0xfc) + 0x3c) + 0x78) = 0;
    }
    else if (param_2 == 1) {
      iVar1 = **(int **)(param_1 + 0xfc);
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x78) = 1;
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x28) = 0;
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x24) = 1;
    }
    else if (param_2 < 3) {
      (**(int (***)())(*(int *)**(unsigned int **)(param_1 + 0xfc) + 0x24))();
      *(unsigned int *)(*(int *)(**(int **)(param_1 + 0xfc) + 0x3c) + 0x78) = 0;
    }
    else if (param_2 == 3) {
      iVar1 = **(int **)(param_1 + 0xfc);
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x28) = 0;
      *(unsigned int *)(*(int *)(iVar1 + 0x3c) + 0x24) = 0;
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 0xfc) + 100) = param_2;
  return;
}

