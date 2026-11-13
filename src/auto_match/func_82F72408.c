unsigned char * fn_82F72408(int param_1,unsigned char *param_2,unsigned char *param_3)

{
  if (param_2 < param_3) {
    *param_2 = *(unsigned char *)(param_1 + 4);
    param_2 = param_2 + 1;
  }
  return param_2;
}

