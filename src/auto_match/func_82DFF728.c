typedef unsigned int uint;

extern uint fn_82DFF630(int param_1, int param_2, int param_3);

void fn_82DFF728(int param_1, int param_2, int param_3, int *param_4)
{
  uint n;
  uint cnt;
  int cur;

  n = fn_82DFF630(param_1, param_2, param_3);
  cnt = *(unsigned short *)(param_1 + 0x14);
  param_4[0] = param_2;
  cur = ((cnt * 0x50 + 15) & ~15) + param_2;
  param_4[1] = cur;
  cur = ((n * 0x50 + 15) & ~15) + cur;
  param_4[2] = cur;
  param_4[3] = ((n * 0x30 + 15) & ~15) + cur;
}
