extern unsigned int *auStack_1a0;
extern int fn_82CE0658();
extern int fn_82CE08A0();
extern unsigned char lbl_832129FC;


void fn_828800C8(void)

{
  int iVar1;
  unsigned char auStack_1a0 [400];
  
  lbl_832129FC = 0;
  iVar1 = fn_82CE0658();
  if (iVar1 == 0) {
    fn_82CE08A0(0x202,auStack_1a0);
  }
  return;
}

