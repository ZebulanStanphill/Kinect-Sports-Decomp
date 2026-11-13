extern int fn_827F7028();
extern int fn_82A1EFC0();


void fn_827F7090(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x84);
  uVar2 = fn_827F7028();
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar1,0,uVar2);
}

