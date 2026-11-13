unsigned __int64 fn_82DAB710(int param_1,int param_2)

{
  if ((int)((unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x3c) + 4) + (unsigned int)*(unsigned short *)(param_1 + 0x10) + param_2) > (int)(*(unsigned short *)(*(int *)(param_1 + 0x3c) + 0xc) - 2)) {
    return 1;
  }
  *(unsigned short *)(param_1 + 0x10) = *(unsigned short *)(param_1 + 0x10) + (short)param_2 & 0xff;
  return 0;
}

