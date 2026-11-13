extern unsigned int lbl_82089670;


void fn_82A40018(int *param_1)

{
  *param_1 = &lbl_82089670;
  if (param_1[8] != 0) {
    RtlEnterCriticalSection(param_1 + 1);
    RtlLeaveCriticalSection(param_1 + 1);
  }
  return;
}

