extern unsigned int *auStack_21e;
extern int fn_8229E090();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824743F8(unsigned __int64 param_1,int param_2)

{
  unsigned char auStack_21e [518];
  
  if (*(int *)(param_2 + 0x9c) != 0) {
    fn_8229E090(*(int *)(param_2 + 0x9c),0,0);
    *(unsigned int *)(param_2 + 0x9c) = 0;
  }
  if (*(int *)(param_2 + 0x8c) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_21e,0,0x1fe);
  }
  return;
}

