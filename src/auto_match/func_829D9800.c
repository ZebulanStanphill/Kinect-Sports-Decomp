extern int fn_829D6D18();


void fn_829D9800(int param_1)

{
  RtlInitializeCriticalSection();
  *(unsigned int *)(param_1 + 0x20) = 0x100;
  *(unsigned int *)(param_1 + 0x1c) = 1;
  fn_829D6D18(param_1);
  return;
}

