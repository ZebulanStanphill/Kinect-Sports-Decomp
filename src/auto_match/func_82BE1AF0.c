extern int fn_82BE71C8();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEA858();
extern unsigned int lbl_8322B130;
extern unsigned int lbl_8322B1D8;


unsigned __int64 fn_82BE1AF0(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e89b8);
  if (iVar2 == 0) {
    uVar1 = 0x69;
  }
  else {
    if (lbl_8322B130 == 0) {
      uVar1 = 200;
    }
    else if (*(int *)(lbl_8322B130 + 0x10) == 3) {
      if (((*(int *)(lbl_8322B130 + 0x180) == 0) ||
          (iVar2 = fn_82BEA858(*(int *)(lbl_8322B130 + 0x180)), iVar2 != 0)) &&
         (iVar2 = fn_82BE71C8(lbl_8322B1D8), iVar2 == 0)) {
        uVar1 = 0;
        *(unsigned int *)(lbl_8322B130 + 0x10) = 2;
      }
      else {
        uVar1 = 100;
      }
    }
    else {
      uVar1 = 0xce;
    }
    fn_82BEA230(0xffffffff8322b13c,0xffffffff820e89b8);
  }
  return uVar1;
}

