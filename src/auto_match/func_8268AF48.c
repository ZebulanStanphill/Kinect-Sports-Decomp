unsigned __int64 fn_8268AF48(int param_1,int param_2,unsigned __int64 param_3)

{
  char *iVar1;
  
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 + -1) {
    param_2 = param_2 + -1;
    param_3 = (unsigned __int64)*(unsigned char *)(param_1 + param_2) ^ param_3 * 0x21;
  }
  return param_3;
}

