void fn_82AB0350(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  
  uVar1 = 0;
  if ((param_1 & 0x10000) == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *param_2;
  }
  if ((param_1 & 0x20000) == 0) {
    *param_4 = 0;
  }
  else {
    *param_4 = param_2[1];
  }
  if ((param_1 & 0x40000) == 0) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_2[2];
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = param_2[3];
  }
  *param_6 = uVar1;
  return;
}

