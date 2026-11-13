extern int fn_83051D60();


unsigned __int64 fn_83052498(int param_1)

{
  RtlEnterCriticalSection(param_1 + -0x40);
  *(unsigned char *)(param_1 + 0x31) = *(unsigned char *)(param_1 + 0x31) & 0x7f;
  *(unsigned int *)(param_1 + -4) = *(unsigned int *)(param_1 + -4) & 0xfeffffff;
  fn_83051D60(param_1 + -0x78);
  RtlLeaveCriticalSection(param_1 + -0x40);
  return 1;
}

