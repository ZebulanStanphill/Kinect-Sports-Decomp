void fn_825D6090(int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 & ~param_3;
  if ((*param_1 == 0) && ((uVar1 & ~param_3) == 0)) {
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
    uVar2 = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
  }
  else {
    *(unsigned char *)(param_2 + 0x2901) = (unsigned char)*param_1 | (unsigned char)param_1[1];
    uVar2 = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  }
  *(unsigned __int64 *)(param_2 + 0x10) = uVar2;
  return;
}

