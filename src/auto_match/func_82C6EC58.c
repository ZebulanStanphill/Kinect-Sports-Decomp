unsigned __int64 fn_82C6EC58(unsigned int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_1 == 0) {
    return 0xfffffffffffffffd;
  }
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_4 < 0) {
    param_4 = -param_4;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0x3c1c) = param_3;
  *(int *)(param_1 + 0x3c20) = param_4;
  *(int *)(param_1 + 0x3c24) = param_5;
  *(unsigned int *)(param_1 + 0x3c28) = 1;
  return 0;
}

