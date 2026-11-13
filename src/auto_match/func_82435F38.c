extern int fn_8255B400();


void fn_82435F38(int param_1)

{
  if (*(unsigned int *)(*(int *)(param_1 + 0x40) + 0xf0) != 0) {
    fn_8255B400(*(unsigned int *)
                       (*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c) + 0x844),
                      (*(int **)(param_1 + 0x40))[0x3c]);
    *(unsigned int *)(*(int *)(param_1 + 0x40) + 0xf0) = 0;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0xf4) = 0;
  return;
}

