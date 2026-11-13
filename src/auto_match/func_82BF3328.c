extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67E0();
extern int fn_82BE6C60();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;
extern unsigned int lbl_8322B224;


unsigned __int64 fn_82BF3328(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned short uVar3;
  
  iVar2 = fn_82BE6720(param_1,0x2b,0);
  if ((((iVar2 != 0) && (iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,0), iVar2 != 0)) &&
      (iVar2 = fn_82BE6720(param_1,0x2a,0), iVar2 != 0)) &&
     ((iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,0), iVar2 != 0 &&
      (iVar2 = fn_82BE6720(param_1,0x58,0), iVar2 != 0)))) {
    if (lbl_8322B224 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(unsigned short *)(lbl_8322B224 + 0x60);
    }
    iVar2 = fn_82BE6760(param_1,uVar3,0);
    if ((iVar2 != 0) && (iVar2 = fn_82BE6720(param_1,0x59,0), iVar2 != 0)) {
      if (lbl_8322B224 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(unsigned short *)(lbl_8322B224 + 0x62);
      }
      iVar2 = fn_82BE6760(param_1,uVar3,0);
      if ((iVar2 != 0) && (iVar2 = fn_82BE6720(param_1,0x5c,0), iVar2 != 0)) {
        if (lbl_8322B224 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(unsigned short *)(lbl_8322B224 + 100);
        }
        iVar2 = fn_82BE6760(param_1,uVar3,0);
        if (iVar2 != 0) {
          uVar1 = fn_82BE6C60(param_1,0xda,1,1);
          return uVar1;
        }
      }
    }
  }
  return 0;
}

