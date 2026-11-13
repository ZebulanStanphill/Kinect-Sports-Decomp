extern int fn_82E3BCC8();
extern int fn_82E3EC48();


unsigned __int64 fn_82E3FD48(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82E3EC48();
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x48) + 0x10))();
  }
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x48) + 8))();
    *(unsigned int *)(param_1 + 0x48) = 0;
  }
  if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x4c) + 8))();
    *(unsigned int *)(param_1 + 0x4c) = 0;
  }
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x50) + 8))();
    *(unsigned int *)(param_1 + 0x50) = 0;
  }
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned __int64 *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0;
  fn_82E3BCC8(param_1 + 0x78,0);
  *(unsigned int *)(param_1 + 0xb8) = 0;
  *(unsigned short *)(param_1 + 0xbc) = 0;
  return uVar1;
}

