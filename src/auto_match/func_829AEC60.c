typedef unsigned int uint;

extern int fn_829AE7D8(int self, uint value, int flag);
extern int fn_829AF110();

void fn_829AEC60(int param_1, uint *param_2)
{
  int n;
  int i;
  uint j;
  uint count;
  uint *p;

  n = fn_829AF110();
  count = *(uint *)(param_1 + 0x5bc);
  *(uint *)(param_1 + 0x5c0) = count;
  for (i = 0; i < n; i++) {
    p = param_2;
    for (j = 0; j < count; j++) {
      fn_829AE7D8(param_1, *p++, 0);
    }
  }
}
