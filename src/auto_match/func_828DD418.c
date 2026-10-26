extern void *fn_828A4ED0(int);
extern int fn_828DEC20(void *, __int64, int, int);

int fn_828DD418(int param_1)
{
  void *p;

  if (*(char *)(param_1 + 0x90) == '\x01') {
    p = fn_828A4ED0(*(int *)(param_1 + 0x8c));
    if (p != 0) {
      fn_828DEC20(p, *(__int64 *)(param_1 + 0x80), *(int *)(param_1 + 0x18), *(int *)(param_1 + 0x88));
    }
  }
  return 1;
}
