extern unsigned int *auStack_1130;
extern int fn_82A1EFC0();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_832171C8;


void fn_829CC5C8(void)

{
  int iVar1;
  unsigned int auStack_1130 [1100];
  
  fn_82F6A528();
  auStack_1130[0] = 0xe;
  iVar1 = (*(int (**)())lbl_8315C3E8)(auStack_1130);
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(lbl_832171C8,0,0x4000);
  }
  fn_82F6A574();
  return;
}

