void fn_82A6A470(unsigned int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)(param_4 * 3 + param_2);
  puVar1[2] = (char)param_1;
  puVar1[1] = (char)((unsigned int)param_1 >> 8);
  *puVar1 = (char)((unsigned int)param_1 >> 0x10);
  return;
}

