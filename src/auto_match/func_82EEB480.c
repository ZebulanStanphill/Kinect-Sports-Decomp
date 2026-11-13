void fn_82EEB480(unsigned __int64 param_1,unsigned int *param_2,int *param_3)

{
  if (*param_2 != 0) {
    *(int *)(*param_2 + 0x10) = *param_3;
    *(int *)(*param_3 + 0xc) = *param_2;
    *(unsigned int *)(*param_3 + 0x10) = 0;
    *param_2 = *param_3;
    return;
  }
  *param_2 = *param_3;
  *(unsigned int *)(*param_3 + 0x10) = 0;
  *(unsigned int *)(*param_3 + 0xc) = 0;
  return;
}

