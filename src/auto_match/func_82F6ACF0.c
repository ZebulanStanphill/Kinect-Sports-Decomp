extern void _lock(int n);


void fn_82F6ACF0(int param_1,int param_2)

{
  if ((int)param_1 < 0x14) {
    _lock(param_1 + 0x10);
    *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 0x8000;
  }
  else {
    RtlEnterCriticalSection(param_2 + 0x20);
  }
  return;
}

