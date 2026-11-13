extern unsigned int *auStack_cd0;
extern int fn_82F691F0();


unsigned __int64 fn_82A3CF38(int param_1)

{
  unsigned __int64 uVar1;
  unsigned char auStack_cd0 [3280];
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x868) + 0x20;
  if (799 < (uVar1 & 0x1fffffff) << 3) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_cd0,0,(uVar1 & 0xfffffff) << 4);
}

