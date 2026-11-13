__int64 fn_82E01000(int param_1,unsigned __int64 param_2)

{
  return ((unsigned __int64)*(unsigned short *)(param_1 + 0x14) * 0x60 + 0xf & 0xfffffff0) +
         ((unsigned __int64)*(unsigned short *)(param_1 + 0x14) * 0x50 + 0xf & 0xfffffff0) +
         ((param_2 & 0xfffffff) * 0x10 + 0xf & 0xfffffff0) +
         ((unsigned __int64)*(unsigned int *)(param_1 + 0xc) + 0xf & 0xfffffff0);
}

