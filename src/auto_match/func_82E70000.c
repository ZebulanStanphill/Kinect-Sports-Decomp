unsigned __int64
fn_82E70000(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int *param_5)

{
  if ((param_4 != 0) && (param_5 != (unsigned int *)0x0)) {
    *param_5 = 0;
    if ((*(int *)(param_4 + 2) != 0) && (*(unsigned int *)(param_4 + 7) == 0)) {
      *(unsigned __int64 *)(param_1 + 0x40) = param_2;
      *param_5 = 1;
    }
    return 0;
  }
  return 0xffffffff80004003;
}

