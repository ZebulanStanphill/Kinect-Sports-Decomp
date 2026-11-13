extern int fn_82F6FA38();
extern int fn_8306C3B8();


void fn_82F6A5B8(void)

{
  int iVar1;
  
  iVar1 = fn_82F6FA38();
  (**(int (***)())(iVar1 + 0x54))(*(unsigned int *)(iVar1 + 0x58));
                    /* WARNING: Subroutine does not return */
  fn_8306C3B8();
}

