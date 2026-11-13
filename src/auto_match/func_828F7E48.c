extern unsigned int *auStack_80;
extern int memset();


void fn_828F7E48(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char auStack_80 [112];
  
  if (0x10 < param_3) {
    *(unsigned int *)(param_1 + 0x50) = 1;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_80 + param_3 * 4,0,0x10 - param_3 & 0x3fffffff);
  }
  return;
}

