void fn_825D5F20(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  uVar2 = *param_1 & ~param_3;
  *param_1 = uVar2;
  if ((uVar2 == 0) && (param_1[1] == 0)) {
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
    uVar1 = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
  }
  else {
    *(char *)(param_2 + 0x2903) = (char)uVar2;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
    *(unsigned char *)(param_2 + 0x2901) = (unsigned char)param_1[1] | (unsigned char)*param_1;
    uVar1 = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  }
  *(unsigned __int64 *)(param_2 + 0x10) = uVar1;
  return;
}

