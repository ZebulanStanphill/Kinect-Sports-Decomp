unsigned short fn_82B168F8(int param_1,unsigned int param_2)

{
  return *(unsigned short *)(param_1 + 0xe) >> ((param_2 & 0x3fff) << 2) & 0xf;
}

