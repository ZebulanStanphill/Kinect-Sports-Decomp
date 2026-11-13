unsigned __int64 fn_82817B20(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  if (param_2 == 0) {
    uVar2 = param_1[1];
  }
  else {
    if (param_2 != 1) {
      uVar2 = 0;
      uVar1 = 0;
      goto code_r0x82817b48;
    }
    uVar2 = *param_1;
  }
  uVar1 = 1;
code_r0x82817b48:
  *param_3 = uVar2;
  return uVar1;
}

