extern int fn_829E1C28();
extern int fn_829E4FE8();
extern int fn_829E5050();
extern int fn_82A28568();
extern int fn_82F691F0();
extern unsigned int lbl_832179FC;
extern unsigned int lbl_83217B88;
extern unsigned int *lbl_83217BA4;
extern unsigned int *lbl_83217BA8;


unsigned __int64 fn_829E2D10(void)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  lbl_83217BA4 = (unsigned int *)fn_829E4FE8();
  uVar1 = (**(int (***)())*lbl_83217BA4)();
  if (-1 < (int)uVar1) {
    lbl_83217BA8 = (unsigned int *)fn_829E5050();
    uVar1 = (**(int (***)())*lbl_83217BA8)();
    if (-1 < (int)uVar1) {
      fn_829E1C28();
      lVar2 = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,0x873c);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar2,0,0x873c);
      }
      lbl_83217B88 = 0;
      uVar1 = 0xffffffff8007000e;
    }
  }
  return uVar1;
}

