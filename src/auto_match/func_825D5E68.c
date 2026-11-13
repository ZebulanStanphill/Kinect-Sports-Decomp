void fn_825D5E68(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if ((*param_1 == 0) && (param_1[1] == 0)) {
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) & 0xfffe3fff | 0x8000;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
    *(unsigned int *)(param_2 + 0x2934) = *(unsigned int *)(param_2 + 0x2934) | 0x700;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x800;
    *(unsigned int *)(param_2 + 0x2f18) = 1;
    *(unsigned int *)(param_2 + 0x2934) =
         -(unsigned int)(*(int *)(param_2 + 0x3158) != 0) & 1 | *(unsigned int *)(param_2 + 0x2934) & 0xfffffffe;
    *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x20800;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 | param_3;
  *(char *)(param_2 + 0x2903) = (char)(uVar1 | param_3);
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  *(unsigned char *)(param_2 + 0x2901) = (unsigned char)param_1[1] | (unsigned char)*param_1;
  *(unsigned __int64 *)(param_2 + 0x10) = *(unsigned __int64 *)(param_2 + 0x10) | 0x10000000;
  return;
}

