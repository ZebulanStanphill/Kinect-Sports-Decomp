extern int fn_82F691F0();
extern int fn_82FA5060();
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83264AA4;


unsigned __int64 fn_83023360(int param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lbl_83264AA4 = param_2;
  if ((*(int *)(param_1 + 0x28) == 3) || (*(int *)(param_1 + 0x28) == 0x3f)) {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24) & 0x3fff;
    *(short *)(param_1 + 0x4a) = (short)(uVar2 << 2);
    lVar1 = uVar2 << 0xd;
    uVar2 = fn_82FA5060(lbl_831BC770,lVar1);
    *(int *)(param_1 + 0x38) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,lVar1);
    }
  }
  return 2;
}

