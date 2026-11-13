extern int fn_82B7BD28();
extern int fn_82F691F0();


void fn_82BC01C0(int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = *param_1;
  *param_1 = iVar1 << 1;
  uVar2 = fn_82B7BD28(param_1[5],iVar1 << 3);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*param_1 << 2);
}

