extern int fn_82C0BF10();
extern unsigned int lbl_82002AE0;


unsigned __int64 fn_82C04158(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if ((*(int **)(param_1 + 0x2c) == (int *)0x0) ||
     (uVar2 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x40))(), -1 < (int)uVar2)) {
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      uVar2 = (**(int (***)())(**(int **)(param_1 + 0x30) + 0x40))();
    }
    if (-1 < (int)uVar2) {
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        uVar2 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x40))();
      }
      if (-1 < (int)uVar2) {
        fn_82C0BF10(param_1 + 0x44);
        fn_82C0BF10(param_1 + 0x8c);
        fn_82C0BF10(param_1 + 0xd4);
        *(unsigned __int64 *)(param_1 + 0x120) = 0;
        *(unsigned __int64 *)(param_1 + 0x130) = 0;
        *(unsigned __int64 *)(param_1 + 0x128) = 0;
        *(unsigned int *)(param_1 + 0x13c) = 0;
        *(unsigned int *)(param_1 + 0x140) = 0;
        uVar1 = lbl_82002AE0;
        *(unsigned int *)(param_1 + 0x144) = 0;
        *(unsigned int *)(param_1 + 0x154) = uVar1;
        *(unsigned int *)(param_1 + 0x148) = 0;
      }
    }
  }
  return uVar2;
}

