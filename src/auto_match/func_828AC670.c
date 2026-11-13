void fn_828AC670(int param_1,__int64 param_2,__int64 param_3)

{
  *(int *)(param_1 + 0x10) = (int)param_2;
  *(int *)(param_1 + 0x14) = (int)param_3;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(char *)(param_1 + 4) = '\x01' - (param_2 + param_3 == 0);
  return;
}

