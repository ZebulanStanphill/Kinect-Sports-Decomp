extern int fn_8268E080();


void fn_82677A08(int param_1,unsigned int param_2,unsigned char param_3)

{
  if ((param_2 & 0xffffffff) != 0) {
    fn_8268E080(param_2,0x43,param_1 + 0x188);
    fn_8268E080(param_2,0x44,param_1 + 0x194);
    fn_8268E080(param_2,0x46,param_1 + 0x1a0);
    fn_8268E080(param_2,0x47,param_1 + 0x1a4);
    fn_8268E080(param_2,0x49,param_1 + 0x1a8);
    fn_8268E080(param_2,0x4a,param_1 + 0x1ac);
    fn_8268E080(param_2,0x4c,param_1 + 0x1b0);
    fn_8268E080(param_2,0x4b,param_1 + 0x1b4);
    fn_8268E080(param_2,0x4d,param_1 + 0x1b8);
  }
  if (param_3 != '\0') {
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
    *(unsigned int *)(param_1 + 0x1a8) = 0;
    *(unsigned int *)(param_1 + 0x1ac) = 0;
    *(unsigned int *)(param_1 + 0x1b0) = 0;
    *(unsigned int *)(param_1 + 0x1b4) = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
  }
  return;
}

