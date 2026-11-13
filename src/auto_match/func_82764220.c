void fn_82764220(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  
  *param_3 = *(unsigned int *)(param_1 + 0x54);
  *param_5 = *(unsigned int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x54) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x50);
  }
  *param_2 = uVar1;
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x5c);
  }
  *param_4 = uVar1;
  return;
}

