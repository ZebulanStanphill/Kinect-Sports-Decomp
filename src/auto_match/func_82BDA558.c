extern unsigned int *auStack_90;
extern int fn_8265C940();
extern int XMemSet();
extern int fn_82BD9E68();


unsigned __int64 fn_82BDA558(unsigned int param_1)

{
  int iVar1;
  unsigned int *in_r8;
  unsigned char auStack_90 [144];
  
  iVar1 = fn_8265C940(0x58,0x618a8010);
  if (iVar1 == 0) {
    fn_82BD9E68(0);
    *in_r8 = 0;
    return 0xffffffff8007000e;
  }
  *(unsigned int *)(iVar1 + 8) = param_1;
  *(unsigned int *)(iVar1 + 0x44) = 0;
                    /* WARNING: Subroutine does not return */
  XMemSet(auStack_90,0,0x18);
}

