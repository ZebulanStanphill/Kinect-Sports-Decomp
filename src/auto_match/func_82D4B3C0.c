void fn_82D4B3C0(char *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  if ((((param_3 ^ param_4) & 0xffff0000) != 0) || ((param_3 & 0xffff0000) == 0)) {
    *param_1 = '\x01' - ((1 << ((unsigned int)param_4 & 0x1f) &
                         *(unsigned int *)((((unsigned int)param_3 & 0x1f) + 0xd) * 4 + param_2)) == 0);
    return;
  }
  if (((((param_4 & 0xffffffff) >> 5 ^ param_3) & 0x3e0) != 0) &&
     ((((param_3 & 0xffffffff) >> 5 ^ param_4) & 0x3e0) != 0)) {
    *param_1 = '\x01';
    return;
  }
  *param_1 = '\0';
  return;
}

