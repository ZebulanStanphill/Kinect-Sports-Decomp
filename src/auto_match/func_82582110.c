extern int fn_82544528();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_82582110(int param_1)

{
  unsigned __int64 uVar1;
  
  if (*(int *)(param_1 + 0xe0) != 0) {
    uVar1 = fn_82544528();
                    /* WARNING: Subroutine does not return */
    fn_8263CBB0(lbl_8320A898,1,uVar1,0x40000000);
  }
  return;
}

