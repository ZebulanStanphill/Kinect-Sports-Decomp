extern unsigned int *auStack_1090;
extern int fn_8263C620();
extern unsigned int lbl_8315C3E8;


void fn_829CC3A0(void)

{
  int iVar1;
  unsigned int auStack_1090 [1054];

  auStack_1090[0] = 0xb;
  iVar1 = (*(int (**)())lbl_8315C3E8)(auStack_1090);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_8263C620(0xffffffff83217178,0,0x28);
  }
  return;
}
