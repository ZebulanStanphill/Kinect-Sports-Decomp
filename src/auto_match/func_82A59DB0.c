extern int fn_82A59BF0();


void fn_82A59DB0(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    fn_82A59BF0();
    *(unsigned int *)(param_1 + 0x29c) = 0;
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 0x80) = 1;
    }
    else {
      puVar2 = *(unsigned int **)(param_1 + 0x150);
      *(unsigned int *)(param_1 + 0x80) = 0;
      while (puVar2 != (unsigned int *)0x0) {
        if (puVar2 == (unsigned int *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = (int *)*puVar2;
          puVar2 = (unsigned int *)puVar2[1];
        }
        (**(int (***)())(*piVar1 + 4))();
      }
    }
    *(unsigned int *)(param_1 + 0x78) = 0;
  }
  return;
}

