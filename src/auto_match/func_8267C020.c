extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_8267BF78(char *, unsigned);
extern void fn_826913D8(char *, void *, unsigned);

void fn_8267C020(char *param_1)
{
  unsigned n;
  RtlEnterCriticalSection(param_1 + 0x2c4);
  if (*(void **)(param_1 + 0x2e0) != 0) {
    n = *(unsigned *)(param_1 + 0x2e4);
    for (; n != 0; n--) {
      if (((unsigned *)*(void **)(param_1 + 0x2e0))[n - 1] != 0) {
        fn_8267BF78(param_1, n);
      }
    }
    fn_826913D8(param_1 + 0x118, *(void **)(param_1 + 0x2e0), *(unsigned *)(param_1 + 0x2e4) << 2);
    *(void **)(param_1 + 0x2e0) = 0;
    *(unsigned *)(param_1 + 0x2e4) = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0x2c4);
}
