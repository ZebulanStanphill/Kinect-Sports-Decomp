extern unsigned int lbl_831BB914;


unsigned short fn_82F70490(unsigned int param_1,unsigned short param_2)

{
  param_1 = param_1 & 0xffff;
  if ((param_1 != 0xffff) && (param_1 < 0x100)) {
    return param_2 & *(unsigned short *)(lbl_831BB914 + param_1 * 2);
  }
  return 0;
}

