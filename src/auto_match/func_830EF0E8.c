extern int memset();


void fn_830EF0E8(int param_1)

{
                    /* WARNING: Subroutine does not return */
  memset(*(unsigned int *)(param_1 + 0x528),0,
               (__int64)(int)(unsigned int)(*(unsigned short *)(param_1 + 0x32) >> 1) *
               (__int64)(int)(unsigned int)(*(unsigned short *)(param_1 + 0x34) >> 1) * 6 & 0xfffffffe);
}
