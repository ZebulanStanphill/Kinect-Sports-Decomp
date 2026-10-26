extern int NtFreeVirtualMemory(void **base, unsigned int *size, unsigned int type, int process);

int fn_82A26BB0(int param_1, int param_2)
{
  unsigned int size;
  void *base;

  if ((*(unsigned int *)(param_1 + 0x14) & 1) == 0) {
    base = *(void **)(param_1 + 0x20);
    size = 0;
    return NtFreeVirtualMemory(&base, &size, 0x8000, param_2);
  }
  return 0;
}
