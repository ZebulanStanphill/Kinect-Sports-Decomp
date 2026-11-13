void fn_824D78A0(int param_1,unsigned int param_2)

{
  if (*(int *)(param_1 + 0xf8) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0xf8) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0xfc) + 0x3c) = (unsigned int)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x100) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c) = (unsigned int)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x108) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x10c) + 0x3c) = (unsigned int)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x110) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x114) + 0x3c) = (unsigned int)LZCOUNT(param_2) >> 5;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x3c) = param_2;
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x120) + 0x3c) = param_2;
  return;
}

