extern unsigned int *auStack_2af;
extern int fn_82F691F0();


unsigned __int64 fn_82BF1F78(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_2af [671];
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 900;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 4) + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_2af,0,0x7f);
    }
    uVar1 = 0;
  }
  return uVar1;
}

