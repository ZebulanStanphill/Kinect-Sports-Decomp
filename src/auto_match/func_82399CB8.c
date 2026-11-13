void fn_82399CB8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int *)**(int **)(param_1 + 8))[1];
  piVar2 = *(int **)**(int **)(param_1 + 8);
  (*(int (**)())(**(int **)(param_1 + 0x2e0) + 0x2c))
            (*(int **)(param_1 + 0x2e0),(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20),
             (int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20));
  return;
}

