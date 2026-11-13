void fn_82E4BB50(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,__int64 param_6,__int64 *param_7)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x84c) == 0)) {
    if (param_7 != (__int64 *)0x0) {
      *param_7 = param_6 * 10000;
    }
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
}

