extern int fn_826323F8();
extern int fn_826324B8();
extern int fn_82F691F0();


void fn_82636450(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  int iVar2;
  
  *(unsigned int *)(param_1 + 0x4dbc) = 0;
  iVar2 = param_1 + 0x10;
  *(unsigned int *)(param_1 + 0x4db4) = 0;
  lVar1 = 2;
  do {
    fn_826323F8(iVar2);
    lVar1 = lVar1 + -1;
    *(unsigned int *)(iVar2 + 0x26bc) = 1;
    iVar2 = iVar2 + 0x26d0;
  } while (lVar1 != 0);
  if (*(int **)(param_1 + 0x4db8) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x4db8) + 4))();
    *(unsigned int *)(param_1 + 0x4db8) = 0;
  }
  *(unsigned int *)(param_1 + 0x4db4) = param_2;
  *(unsigned int *)(param_1 + 0x4dc0) = 0;
  *(unsigned int *)(param_1 + 0x4de0) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x4ddc) = 0;
  *(unsigned int *)(param_1 + 0x4de8) = 0;
  *(unsigned int *)(param_1 + 0x4df0) = 0;
  fn_826324B8(param_1 + 0x10,param_1);
  *(int *)(param_1 + 0x26d4) = param_1;
  *(unsigned int *)(param_1 + 0x26d0) = 0;
  *(unsigned __int64 *)(param_1 + 0x2510) = 0;
  *(unsigned __int64 *)(param_1 + 0x2518) = 0;
  *(unsigned __int64 *)(param_1 + 0x2520) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x170,0,0x23a0);
}

