extern int fn_830514A8();
extern int fn_83055EF8();


void fn_83051CD8(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x38);
  *(unsigned char *)(param_1 + 0xa9) = *(unsigned char *)(param_1 + 0xa9) | 0x40;
  (*(int (**)())(*(int *)(param_1 + 0x78) + 0x20))(param_1 + 0x78);
  fn_830514A8(param_1);
  if (*(char *)(param_1 + 8) != '\0') {
    fn_83055EF8(*(unsigned int *)(param_1 + 0x60),param_1);
  }
  RtlLeaveCriticalSection(param_1 + 0x38);
  return;
}

