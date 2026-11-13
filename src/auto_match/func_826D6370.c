extern int fn_8267C8D8();
extern int fn_8267CB10();
extern int fn_8267D9C0();


void fn_826D6370(int param_1)

{
  fn_8267C8D8(param_1 + 8);
  *(unsigned char *)(param_1 + 0x20) = 1;
  fn_8267CB10(param_1 + 0x1c);
  fn_8267D9C0(param_1 + 8);
  return;
}

