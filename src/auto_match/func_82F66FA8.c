extern unsigned int lbl_831BBCA8;


unsigned short fn_82F66FA8(unsigned int param_1)

{
  return *(unsigned short *)((param_1 & 0xff) * 2 + *(int *)(lbl_831BBCA8 + 200)) & 0x8000;
}

