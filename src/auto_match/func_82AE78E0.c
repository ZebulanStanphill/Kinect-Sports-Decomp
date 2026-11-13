extern unsigned int *auStack_118;
extern int fn_82AE6190();
extern int fn_82F691F0();
extern unsigned int iStack00000014;


void fn_82AE78E0(int param_1)

{
  int iStack00000014;
  unsigned char auStack_118 [280];
  
  iStack00000014 = param_1;
  if (*(int *)(param_1 + 0x58) != 0) {
    fn_82AE6190();
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_118,0,0x80);
}

