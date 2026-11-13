extern int fn_826D6CF0();
extern int fn_826D9318();


void fn_826D9C00(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0xd4);
  fn_826D9318(param_1 + 0xf0,*(unsigned int *)(param_1 + 0x44));
  fn_826D9318(param_1 + 0xfc,*(unsigned int *)(param_1 + 0x44));
  *(unsigned int *)(param_1 + 0x108) = 0;
  RtlLeaveCriticalSection(param_1 + 0xd4);
  fn_826D6CF0(param_1,*(unsigned int *)(param_1 + 0x44),2);
  return;
}

