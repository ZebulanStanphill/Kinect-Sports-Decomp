extern int fn_8267C8D8();
extern int fn_8267D9C0();


void fn_8267E350(int param_1)

{
  fn_8267C8D8(param_1 + 0x14);
  *(unsigned char *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  fn_8267D9C0(param_1 + 0x14);
  return;
}

