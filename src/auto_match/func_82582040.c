extern int fn_82544528();
extern int fn_82586008();
extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_82582040(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  for (piVar1 = *(int **)(param_1 + 0xe0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    *(unsigned char *)(*piVar1 + 0x54) = 0;
  }
  for (piVar1 = *(int **)(param_1 + 0xdc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    if (*piVar1 != 0) {
      fn_82586008(*piVar1,param_3);
    }
  }
  uVar2 = fn_82544528();
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(lbl_8320A898,1,uVar2,0x40000000);
}

