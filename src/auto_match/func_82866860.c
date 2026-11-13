extern unsigned int *auStack_4c;
extern unsigned int *auStack_a0;
extern int memset();
extern int fn_8304EF20();
extern int fn_8304F708();
extern unsigned int uStack_50;


unsigned __int64 fn_82866860(int param_1)

{
  int iVar1;
  unsigned int auStack_a0 [20];
  unsigned int uStack_50;
  unsigned char auStack_4c [60];
  
  auStack_a0[0] = 0;
  fn_8304EF20(auStack_a0);
  iVar1 = fn_8304F708(auStack_a0);
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
    return 0xffffffffa00a0000;
  }
  uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
  memset(auStack_4c,0,0x2c);
}

