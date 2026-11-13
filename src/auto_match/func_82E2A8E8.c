extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F691F0();


unsigned __int64 fn_82E2A8E8(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *in_r6;
  
  uVar2 = fn_82E4FE08(0x48);
  *in_r6 = (int)uVar2;
  if ((uVar2 & 0xffffffff) == 0) {
    iVar1 = *in_r6;
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 0x3c) != (int *)0x0) {
        (**(int (***)())(**(int **)(iVar1 + 0x3c) + 8))();
        *(unsigned int *)(iVar1 + 0x3c) = 0;
      }
      if (*(int *)(iVar1 + 0x44) != 0) {
        fn_82E4FE40();
        *(unsigned int *)(iVar1 + 0x44) = 0;
      }
      fn_82E4FE40(*in_r6);
    }
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,0x48);
}

