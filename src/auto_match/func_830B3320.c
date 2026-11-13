unsigned __int64 fn_830B3320(int param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80004003;
  }
  if ((*(unsigned int *)(param_1 + 0xec) != 0) && (*(unsigned int *)(param_1 + 0xf0) != 0)) {
    *param_2 = *(unsigned int *)(param_1 + 0xf8);
    return 0;
  }
  return 0xffffffff8004000a;
}

