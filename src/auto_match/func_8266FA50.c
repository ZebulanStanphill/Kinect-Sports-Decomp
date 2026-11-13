extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_8266FA50(int param_1, int param_2, int param_3)
{
  int r;
  void *cs;

  r = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    cs = (void *)(param_1 + 0x108);
    if (cs != 0) {
      RtlEnterCriticalSection(cs);
    }
    r = (*(int (**)())(**(int **)(param_1 + 0x10) + 0x44))(*(int **)(param_1 + 0x10), param_2, param_3);
    if (cs != 0) {
      RtlLeaveCriticalSection(cs);
    }
  }
  return r;
}
