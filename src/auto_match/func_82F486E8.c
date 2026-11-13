extern int fn_82E4FE40();
extern int fn_82E579E0();


unsigned __int64 fn_82F486E8(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned short *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x1c) = 0;
    fn_82E579E0(param_1 + 0x2c);
    *(unsigned __int64 *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      fn_82E4FE40();
    }
    *(unsigned int *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      if (*(int **)(param_1 + 0x10) != (int *)0x0) {
        (**(int (***)())(**(int **)(param_1 + 0x10) + 8))();
        *(unsigned int *)(param_1 + 0x10) = 0;
      }
      if (*(int **)(param_1 + 0xc) != (int *)0x0) {
        (**(int (***)())(**(int **)(param_1 + 0xc) + 8))();
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      return 0;
    }
  }
  return 0xffffffffc00d36b6;
}

