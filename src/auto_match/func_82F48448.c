unsigned __int64 fn_82F48448(int param_1,unsigned int param_2)

{
  if ((*(unsigned int *)(param_1 + 0x28) & 1) != 0) {
    return 0xffffffff80004001;
  }
  *(unsigned int *)(param_1 + 0x24) = param_2;
  return 0;
}

