extern int fn_8265C940();
extern int fn_82F691F0();


void fn_82E8EC58(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d4) & 0x3fffffff) << 2;
  if (0x3fffffff < *(unsigned int *)(param_1 + 0x2d4)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265C940(lVar1,0x248c8000);
  *(int *)(param_1 + 0x1a5c) = (int)uVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,*(int *)(param_1 + 0x2d4) << 2);
}

