unsigned __int64 fn_82DAB710(int self,int param_2)

{
  if ((int)((unsigned int)*(unsigned short *)(*(int *)(self + 0x3c) + 4) + (unsigned int)*(unsigned short *)(self + 0x10) + param_2) > (int)(*(unsigned short *)(*(int *)(self + 0x3c) + 0xc) - 2)) {
    return 1;
  }
  *(unsigned short *)(self + 0x10) = *(unsigned short *)(self + 0x10) + (short)param_2 & 0xff;
  return 0;
}

