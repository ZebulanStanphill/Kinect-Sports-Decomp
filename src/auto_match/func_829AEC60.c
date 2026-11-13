extern int fn_829AE7D8(int self, unsigned int value, int flag);
extern int fn_829AF110();

void fn_829AEC60(int param_1, unsigned int *param_2)
{
  int n;
  int i;
  unsigned int j;
  unsigned int count;
  unsigned int *p;

  n = fn_829AF110();
  count = *(unsigned int *)(param_1 + 0x5bc);
  *(unsigned int *)(param_1 + 0x5c0) = count;
  for (i = 0; i < n; i++) {
    p = param_2;
    for (j = 0; j < count; j++) {
      fn_829AE7D8(param_1, *p++, 0);
    }
  }
}
