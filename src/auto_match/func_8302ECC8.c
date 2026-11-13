unsigned __int64 fn_8302ECC8(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3e) = (param_2 & 1) << 6 | *(unsigned char *)(param_1 + 0x3e) & 0xbf;
  return 1;
}

