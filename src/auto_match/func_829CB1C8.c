extern int fn_8264B730();
extern int fn_8265C940();
extern int fn_82F691F0();
extern unsigned int lbl_83217270;


unsigned __int64 fn_829CB1C8(void)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  
  lbl_83217270 = fn_8265C940(0xc4,0x209c0000);
  if (lbl_83217270 == 0) {
    uVar3 = 0xffffffffc0000017;
    uVar4 = 0;
    lbl_83217270 = 0;
    iVar5 = lbl_83217270;
    do {
      if (uVar4 == 0) {
        uVar1 = 0x7000;
      }
      else {
        uVar1 = 0xc000;
      }
      if (-1 < (int)uVar3) {
        lVar2 = fn_8264B730(uVar1,0);
        *(int *)((uVar4 + 0x2d) * 4 + iVar5) = (int)lVar2;
        uVar3 = -(unsigned __int64)(lVar2 == 0) & 0xffffffff8007000e;
        iVar5 = lbl_83217270;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if (-1 < (int)uVar3) {
      *(unsigned int *)(iVar5 + 0xa8) = 0;
      *(unsigned int *)(lbl_83217270 + 0xac) = 0x4b00;
      *(unsigned int *)(lbl_83217270 + 0xb0) = 0x9600;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lbl_83217270,0,0xc4);
}

