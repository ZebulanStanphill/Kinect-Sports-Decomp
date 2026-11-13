unsigned __int64 fn_82C2A438(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  *param_3 = 0;
  *param_4 = 0;
  if (*(unsigned int *)(param_2 + 0x20) == 0) {
    return 0x500001;
  }
  *param_3 = *(unsigned int *)(param_2 + 0x2c);
  *param_4 = *(unsigned int *)(param_2 + 0x20);
  *(unsigned int *)(param_2 + 0x20) = 0;
  return 0x500001;
}

