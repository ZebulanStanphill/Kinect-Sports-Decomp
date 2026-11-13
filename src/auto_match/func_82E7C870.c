unsigned __int64 fn_82E7C870(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *apiStack_20 [2];
  
  apiStack_20[0] = (int *)0x0;
  uVar2 = (**(int (***)())(**(int **)(param_1 + 4) + 0x10))
                    (*(int **)(param_1 + 4),0xffffffff82154a28,0,apiStack_20);
  piVar1 = apiStack_20[0];
  if (((int)uVar2 != -0x3ff2c92b) && (-1 < (int)uVar2)) {
    apiStack_20[0] = (int *)0x0;
    *param_2 = piVar1;
  }
  if (apiStack_20[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_20[0] + 8))();
  }
  return uVar2;
}

