void fn_8258F748(char *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char cVar1;
  
  if (((param_3 ^ param_4) & 0xffff0000) == 0) {
    if ((param_3 & 0xfffc0000) != 0) {
      if (((((param_4 & 0xffffffff) >> 6 ^ param_3) & 0xfc0) == 0) ||
         ((((param_3 & 0xffffffff) >> 6 ^ param_4) & 0xfc0) == 0)) {
        cVar1 = '\0';
      }
      else {
        cVar1 = '\x01';
      }
      goto LAB_8258f7b8;
    }
  }
  cVar1 = '\x01' - ((1 << ((unsigned int)param_4 & 0x3f) &
                    *(unsigned int *)((((unsigned int)param_3 & 0x3f) + 0xd) * 4 + param_2)) == 0);
LAB_8258f7b8:
  *param_1 = cVar1;
  return;
}

