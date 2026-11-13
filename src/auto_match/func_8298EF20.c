extern unsigned int *auStack_80;
extern int fn_82F691F0();


void fn_8298EF20(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char auStack_80 [128];
  
  if (0x10 < param_3) {
    *(unsigned int *)(param_1 + 0x48) = 1;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_80 + param_3 * 4,0,0x10 - param_3 & 0x3fffffff);
  }
  return;
}

