extern int fn_82F691F0();
extern int fn_8305F770();
extern int fn_83065B90();


unsigned __int64 fn_8305E028(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(int *)(param_1 + 0x30) < 3) {
    return 0;
  }
  uVar1 = fn_8305F770(*(unsigned int *)(param_1 + 0x28));
  uVar2 = fn_83065B90((uVar1 & 0x3fffffff) << 2);
  uVar1 = fn_8305F770(*(unsigned int *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,(uVar1 & 0x3fffffff) << 2);
}

