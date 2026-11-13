extern unsigned int *auStack_30;
extern int fn_8223F508();
extern int fn_8265C9E0();
extern int fn_82F62680();
extern int fn_82F626D0();
extern int fn_82F62810();
extern int fn_82F62A28();
extern int fn_82F62B40();
extern int iRam832632d4;
extern unsigned int lbl_832632D0;
extern unsigned int lbl_832632EC;


int fn_82F62CD0(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned char auStack_30 [48];
  
  iVar2 = lbl_832632D0;
  if (lbl_832632D0 == 0) {
    fn_82F62680(auStack_30,0);
    iVar2 = lbl_832632D0;
    if (lbl_832632D0 == 0) {
      uVar1 = fn_8265C9E0(0x20);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82F62B40(uVar1,0);
      }
      fn_82F62810(iVar2);
      *(unsigned int *)(iVar2 + 0x10) = 0x3f;
      fn_82F62A28(iVar2 + 0x18,0xffffffff820e7f94);
      iRam832632d4 = iVar2;
      fn_8223F508(iVar2);
      lbl_832632EC = iRam832632d4;
    }
    fn_82F626D0(auStack_30);
  }
  return iVar2;
}

