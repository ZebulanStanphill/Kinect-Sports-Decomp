extern int fn_82F3C920();


int fn_82F3CC20(int param_1,unsigned int *param_2)

{
  int uVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xc00d36b6;
  }
  else if (param_2 == (unsigned int *)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = fn_82F3C920(param_1);
    if (uVar1 >= 0) {
      uVar1 = 0;
      *param_2 = *(unsigned int *)(param_1 + 0x50);
    }
  }
  return uVar1;
}

