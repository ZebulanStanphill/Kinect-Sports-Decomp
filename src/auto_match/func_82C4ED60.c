extern int fn_82C563B8();


void fn_82C4ED60(unsigned __int64 param_1,unsigned int param_2)

{
  if (param_2 != 0) {
    if (*(unsigned int *)(param_2 + 0xc) != 0) {
      fn_82C563B8(param_1,*(unsigned int *)(param_2 + 0xc));
      *(unsigned int *)(param_2 + 0xc) = 0;
    }
    if (*(unsigned int *)(param_2 + 0x10) != 0) {
      fn_82C563B8(param_1,*(unsigned int *)(param_2 + 0x10));
      *(unsigned int *)(param_2 + 0x10) = 0;
    }
    if (*(unsigned int *)(param_2 + 0x14) != 0) {
      fn_82C563B8(param_1,*(unsigned int *)(param_2 + 0x14));
      *(unsigned int *)(param_2 + 0x14) = 0;
    }
    if (*(unsigned int *)(param_2 + 0x270) != 0) {
      fn_82C563B8(param_1,*(unsigned int *)(param_2 + 0x270));
      *(unsigned int *)(param_2 + 0x270) = 0;
    }
  }
  return;
}

