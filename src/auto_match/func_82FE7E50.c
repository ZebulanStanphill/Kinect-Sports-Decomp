extern int fn_82FA5060();
extern int fn_82FF2910();
extern int fn_8300F458();
extern int fn_8300F5B0();
extern int fn_8300FAB8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


unsigned __int64 fn_82FE7E50(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  uVar1 = fn_82FF2910();
  if ((lbl_832642E4 == 0) && ((int)uVar1 == 1)) {
    iVar2 = fn_82FA5060(lbl_831BC768,0xb4);
    if (iVar2 == 0) {
      lbl_832642E4 = 0;
    }
    else {
      lbl_832642E4 = fn_8300FAB8();
      if (lbl_832642E4 != 0) {
        uVar1 = fn_8300F5B0();
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar1 = fn_8300F458(lbl_832642E4);
        return uVar1;
      }
    }
    uVar1 = 0x34;
  }
  return uVar1;
}

