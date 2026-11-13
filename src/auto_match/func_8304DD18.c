extern unsigned int *auStack_30;
extern unsigned int uStack_28;


unsigned __int64 fn_8304DD18(int param_1)

{
  int *piVar1;
  unsigned char auStack_30 [8];
  unsigned int uStack_28;
  
  piVar1 = *(int **)(param_1 + 0x28);
  *(unsigned short *)(param_1 + 0x1c) = 1;
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 0xc))(piVar1,auStack_30);
    uStack_28 = 0;
    (**(int (***)())(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_30);
  }
  return 1;
}

