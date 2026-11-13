extern int fn_82BE6720();
extern int fn_82BE67E0();
extern int fn_82BE6C60();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;


unsigned __int64 fn_82BF3090(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,1);
  if ((((iVar2 == 0) || (iVar2 = fn_82BE6720(param_1,0x2b,1), iVar2 == 0)) ||
      (iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,1), iVar2 == 0)) ||
     (iVar2 = fn_82BE6720(param_1,0x2a,1), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BE6C60(param_1,0xd6,1,1);
  }
  return uVar1;
}

