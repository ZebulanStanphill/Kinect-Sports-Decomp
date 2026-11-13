void fn_825D6140(unsigned int *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffe3fff;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
  *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffff8ff;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
  *(unsigned char *)(param_2 + 0x2903) = 0;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  *(unsigned char *)(param_2 + 0x2901) = 0xff;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  *(unsigned int *)(param_2 + 0x2f18) = 0;
  *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffffffe;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
  *(unsigned int *)(param_2 + 0x2940) = *(unsigned int *)(param_2 + 0x2940) & 0xfffffff7;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x100;
  return;
}

