extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA668();
extern unsigned int lbl_8322B130;


unsigned __int64 fn_82BE2308(void)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8aa4);
  if (iVar1 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 == 0) {
    uVar2 = 200;
  }
  else if ((*(unsigned short *)(lbl_8322B130 + 0x11c) & 4) == 0) {
    if ((*(int *)(lbl_8322B130 + 0x10) == 2) || (*(int *)(lbl_8322B130 + 0x10) == 4)) {
      if (*(int *)(lbl_8322B130 + 0x180) == 0) {
        uVar2 = 0xd1;
        goto LAB_82be2358;
      }
      iVar1 = *(int *)(*(int *)(lbl_8322B130 + 0x180) + 0x10);
      if ((iVar1 == 2) || (iVar1 == 0xf)) {
        uVar2 = fn_82BEA668();
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        goto LAB_82be2358;
      }
    }
    uVar2 = 0xce;
  }
  else {
    uVar2 = 0x68;
  }
LAB_82be2358:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8aa4);
  return uVar2;
}

