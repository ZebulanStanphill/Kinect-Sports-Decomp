void fn_82F6F8B8(int param_1,short *param_2)

{
  short sVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    sVar1 = *param_2;
    *(short *)(param_1 + (int)param_2) = sVar1;
    param_2 = param_2 + 1;
  } while (sVar1 != 0);
  return;
}

