unsigned int fn_82F6A040(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  while ((sVar1 != 0 && (sVar1 != param_2))) {
    param_1 = param_1 + 1;
    sVar1 = *param_1;
  }
  return -(unsigned int)(param_2 == sVar1) & (unsigned int)param_1;
}

