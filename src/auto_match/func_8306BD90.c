__int64 fn_8306BD90(int param_1)

{
  unsigned int uVar1;
  
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlEnterCriticalSection(0xffffffff83265098);
  }
  uVar1 = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 4) = uVar1 * 0x41c64e6d + 0x3039;
  if (*(char *)(param_1 + 0x3f8) != '\0') {
    RtlLeaveCriticalSection(0xffffffff83265098);
  }
  return (((unsigned __int64)uVar1 & 0xffff) * 0x4e6d + 0x3039 >> 0x10) +
         ((unsigned __int64)uVar1 & 0xffff) * 0x41c6 + (__int64)((int)uVar1 >> 0x10) * 0x41c64e6d;
}

