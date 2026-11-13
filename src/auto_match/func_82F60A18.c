extern int fn_8265C990();
extern int fn_82F60160();
extern int fn_82F60C10();
extern int fn_82F61288();


void fn_82F60A18(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) != '\0') {
    fn_82F61288(param_1 + 0x90);
    fn_82F60C10(param_1 + 0x24);
    fn_8265C990(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x14));
    fn_8265C990(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  fn_82F60160(param_1);
  fn_8265C990(param_1,0x24be4000);
  return;
}

