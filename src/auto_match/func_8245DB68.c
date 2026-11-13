extern int fn_82522D98();
extern float lbl_82195D4C;
extern unsigned int uStack_6c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8245DB68(int param_1)

{
  unsigned int uStack_6c;
  
  uStack_6c = (unsigned int)(__int64)((float)(__int64)*(int *)(param_1 + 0xdc) * lbl_82195D4C);
  *(unsigned int *)(param_1 + 0x14) = uStack_6c;
                    /* WARNING: Subroutine does not return */
  fn_82522D98();
}

