extern int fn_82FA5060();
extern int fn_8300CE88();
extern unsigned int lbl_831BC768;


unsigned int  fn_8302C600(void)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82FA5060(lbl_831BC768,0x10);
  if (iVar2 != 0) {
    uVar1 = fn_8300CE88();
    return uVar1;
  }
  return 0;
}

