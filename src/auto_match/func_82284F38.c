extern int fn_82F69290();
extern unsigned int lbl_82167FA8;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;


void fn_82284F38(int param_1,__int64 param_2)

{
  int iVar1;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  unsigned char uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x14c);
  if (*(int *)(param_1 + 0x148) == iVar1) {
    return;
  }
  if (param_2 - 100000U == 0) {
    if (*(int *)(iVar1 + -0x30) == 0) {
      return;
    }
    if (*(int *)(iVar1 + -0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x82284fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(**(int **)(iVar1 + -0x30) + 4))();
      return;
    }
  }
  else {
    if ((param_2 - 100000U & 0xffffffff) != 1) {
      return;
    }
    if (*(int *)(iVar1 + -0x18) == 0) {
      return;
    }
    if (*(int *)(iVar1 + -0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x82284f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(**(int **)(iVar1 + -0x18) + 4))();
      return;
    }
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82167FA8;
  uStack_18 = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F69290(&ppuStack_20,0xffffffff821dda54);
}

