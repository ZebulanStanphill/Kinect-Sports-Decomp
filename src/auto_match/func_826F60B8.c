unsigned char fn_826F60B8(int param_1)

{
  unsigned char uVar1;
  
  if (*(int **)(param_1 + 0x68) == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(int (***)())(**(int **)(param_1 + 0x68) + 8))();
  }
  return uVar1;
}

