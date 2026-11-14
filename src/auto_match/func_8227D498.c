extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_829EFC50();
extern int fn_829EFD40();
extern int XMemSet();
extern int iRam832975d0;
extern unsigned int lbl_831E4E38;
extern unsigned int uStack_30;


void fn_8227D498(void)

{
  int iVar1;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  if (iRam832975d0 == 0) {
    iVar1 = fn_8265C9E0(0x860);
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0x848) = 0;
      *(unsigned int *)(iVar1 + 0x84c) = 0;
      *(unsigned int *)(iVar1 + 0x850) = 0;
      *(unsigned int *)(iVar1 + 0x840) = 0;
      *(unsigned int *)(iVar1 + 0x844) = 0;
      fn_829EFD40(auStack_40);
      uStack_30 = lbl_831E4E38;
      fn_829EFC50(auStack_40);
                    /* WARNING: Subroutine does not return */
      XMemSet(iVar1,0,0x840);
    }
    iRam832975d0 = 0;
  }
  return;
}

