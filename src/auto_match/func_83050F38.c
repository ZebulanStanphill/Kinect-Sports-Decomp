extern int fn_83050528();
extern int fn_83055EF8();


void fn_83050F38(int param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x38);
  fn_83050528(param_1,4);
  if (*(char *)(param_1 + 8) != '\0') {
    iVar1 = (*(int *)(param_1 + 0x9c) << 3) >> 0x1c;
    if ((iVar1 != 2) && (iVar1 != 0)) {
      fn_83055EF8(*(unsigned int *)(param_1 + 0x60),param_1);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x38);
  return;
}

