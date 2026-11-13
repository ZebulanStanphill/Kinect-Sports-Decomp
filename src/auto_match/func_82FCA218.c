void fn_82FCA218(int param_1,int *param_2)

{
  if (*(unsigned int *)(param_1 + 8) != 0) {
    (*(int (**)())(*param_2 + 8))(param_2,*(unsigned *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x1b0) != 0) {
    (*(int (**)())(*param_2 + 8))(param_2,*(unsigned *)(param_1 + 0x1b0));
    *(unsigned int *)(param_1 + 0x1b0) = 0;
  }
  return;
}

