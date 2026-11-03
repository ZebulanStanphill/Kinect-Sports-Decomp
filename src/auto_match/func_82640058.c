extern void *fn_8263FB88(int, int, int, int);
extern void *memcpy(void *, const void *, unsigned);

void fn_82640058(char *param_1, int param_2, int param_3, void *param_4, int param_5)
{
  void *p = fn_8263FB88((int)param_1, param_2, param_3, param_5);
  if (p != 0) {
    memcpy(p, param_4, param_3 * param_5);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x3554);
  }
}
