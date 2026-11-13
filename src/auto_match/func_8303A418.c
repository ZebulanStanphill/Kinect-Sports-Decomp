extern int fn_82FA5060();
extern int fn_82FEF6B8();
extern int fn_83013958();
extern int fn_83047ED8();
extern int fn_83048518();
extern int fn_83049000();
extern int fn_83049C00();
extern int fn_8304B290();
extern int fn_8304BBA8();
extern int fn_8304C998();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_8303A418(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x14) >> 0x19 & 0x1f;
  if (uVar2 == 2) {
    uVar3 = fn_82FA5060(lbl_831BC770,0x48);
    if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
    uVar3 = fn_8304C998(uVar3,param_1);
  }
  else {
    if (uVar2 == 0) goto LAB_8303a5bc;
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x1c) >> 0x10;
    if (uVar1 < 4) {
      if (uVar1 == 0) goto LAB_8303a5bc;
      if (uVar1 == 1) {
        if (uVar2 == 1) {
          uVar3 = fn_82FA5060(lbl_831BC770,100);
          if ((uVar3 & 0xffffffff) == 0) {
LAB_8303a470:
            uVar3 = 0;
            goto LAB_8303a5bc;
          }
          uVar3 = fn_83048518(uVar3,param_1);
        }
        else {
          if (uVar2 != 3) goto LAB_8303a5bc;
          uVar3 = fn_82FA5060(lbl_831BC770,0x40);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_83047ED8(uVar3,param_1);
        }
      }
      else if (uVar1 == 2) {
        if (uVar2 == 1) {
          uVar3 = fn_82FA5060(lbl_831BC770,0x140);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_8304BBA8(uVar3,param_1);
        }
        else {
          if (uVar2 != 3) goto LAB_8303a5bc;
          uVar3 = fn_82FA5060(lbl_831BC770,0x44);
          if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
          uVar3 = fn_8304B290(uVar3,param_1);
        }
      }
      else if (uVar2 == 1) {
        uVar3 = fn_82FA5060(lbl_831BC770,0x80);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
        uVar3 = fn_83049C00(uVar3,param_1);
      }
      else {
        if (uVar2 != 3) goto LAB_8303a5bc;
        uVar3 = fn_82FA5060(lbl_831BC770,0x44);
        if ((uVar3 & 0xffffffff) == 0) goto LAB_8303a470;
        uVar3 = fn_83049000(uVar3,param_1);
      }
    }
    else {
      uVar3 = fn_83013958(param_1);
    }
  }
  if ((uVar3 & 0xffffffff) != 0) {
    return uVar3;
  }
LAB_8303a5bc:
  fn_82FEF6B8(param_1,1);
  return uVar3;
}

