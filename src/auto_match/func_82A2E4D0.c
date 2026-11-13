extern int fn_82A2C868();


void fn_82A2E4D0(int param_1,unsigned __int64 *param_2)

{
  unsigned __int64 uVar1;
  
  if ((*(unsigned char *)(param_1 + 0x35) & 4) == 0) {
    uVar1 = fn_82A2C868(*(unsigned int *)(param_1 + 0x40));
    *param_2 = uVar1;
    uVar1 = fn_82A2C868(*(unsigned int *)(param_1 + 0x44));
  }
  else {
    uVar1 = 0;
    *param_2 = 0;
  }
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  if ((*(unsigned char *)(param_1 + 0x35) & 2) == 0) {
    *(unsigned int *)(param_2 + 6) = 0x80;
    param_2[4] = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
    param_2[5] = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  }
  else {
    param_2[4] = 0;
    param_2[5] = 0;
    *(unsigned int *)(param_2 + 6) = 0x10;
  }
  return;
}

