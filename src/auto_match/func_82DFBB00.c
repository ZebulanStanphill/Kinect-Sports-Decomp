void fn_82DFBB00(unsigned char *param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  if (*(char *)(param_3 + 0xb0) == '\0') {
    *param_1 = 0;
    return;
  }
  *param_1 = *(char *)(param_4 + 0xe) < '\x01';
  return;
}

