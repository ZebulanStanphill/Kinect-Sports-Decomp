extern unsigned int *auStack_4f;
extern int fn_82F691F0();
extern unsigned int uStack0000001c;


void fn_826CDDC0(int param_1,unsigned int param_2)

{
  unsigned int uStack0000001c;
  unsigned char auStack_4f [63];
  
  *(unsigned int *)(param_1 + 0x1a8) = param_2;
  uStack0000001c = param_2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_4f,0,0x3f);
}

