extern unsigned int *auStack_108;
extern unsigned int *auStack_10c;
extern unsigned int *auStack_110;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern int fn_82A1C120();
extern int memset();


void fn_8225F748(int param_1)

{
  int iVar1;
  unsigned char auStack_110 [4];
  unsigned char auStack_10c [4];
  unsigned char auStack_108 [88];
  unsigned char auStack_b0 [64];
  unsigned char auStack_70 [80];
  
  *(unsigned char *)(param_1 + 2) = 1;
  iVar1 = fn_82A1C120(0xffffffff821a6764,auStack_70,0x40,auStack_110,auStack_108,auStack_10c,
                            auStack_b0,0x40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(param_1 + 3,0,0x24);
  }
  return;
}

