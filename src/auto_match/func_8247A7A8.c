extern int fn_825603C8();
extern int fn_825604A0();


void fn_8247A7A8(int param_1,int *param_2)

{
  if (*param_2 == 0x52) {
    if (*(int *)(param_1 + 0x764) != 0) {
      fn_825604A0(param_1 + 0x5e0);
      *(unsigned int *)(param_1 + 0x764) = 0;
    }
  }
  else if (*param_2 == 0x53) {
    *(unsigned int *)(param_1 + 0x760) = 1;
    fn_825603C8(0,param_1 + 0x5e0,1);
    *(unsigned int *)(param_1 + 0x764) = 1;
    *(unsigned int *)(param_1 + 0x64c) = 3;
    *(unsigned int *)(param_1 + 0x6b0) = 1;
  }
  return;
}

