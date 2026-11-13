extern int fn_82A1E650();
extern int fn_82A1E658();


void fn_82A59BF0(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x24);
  if (*(void **)(param_1 + 0xc) != 0) {
    KeSetEvent(*(unsigned int *)(param_1 + 0x18),1,0);
    fn_82A1E650(*(unsigned int *)(param_1 + 0xc),0xffffffffffffffff);
    if ((*(void **)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) != -1)) {
      fn_82A1E658(*(void **)(param_1 + 0xc));
      *(unsigned int *)(param_1 + 0xc) = 0;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x24);
  return;
}

