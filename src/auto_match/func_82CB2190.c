extern int fn_82F691F0();
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


void fn_82CB2190(int param_1)

{
  unsigned int in_r7;
  unsigned int in_r8;
  unsigned int in_r9;
  unsigned int in_r10;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  
  uStack00000034 = in_r7;
  uStack0000003c = in_r8;
  uStack00000044 = in_r9;
  uStack0000004c = in_r10;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_1 + 0x6e4),0,0x80);
}

