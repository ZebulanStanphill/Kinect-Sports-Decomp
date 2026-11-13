extern int fn_82BE64E0();
extern int fn_82BE6720();
extern int fn_82BE67E0();
extern int fn_82BE6A00();
extern int fn_82BE6B58();
extern int fn_82BE6ED8();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;


unsigned __int64 fn_82BF4DF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BE6B58(param_1,param_2,0x200,0x200);
  if ((((iVar2 == 0) || (iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,1), iVar2 == 0)) ||
      (iVar2 = fn_82BE6720(param_1,0x2a,1), iVar2 == 0)) ||
     (((iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,1), iVar2 == 0 ||
       (iVar2 = fn_82BE6720(param_1,0x2b,1), iVar2 == 0)) ||
      ((iVar2 = fn_82BE6ED8(param_1,param_3), iVar2 == 0 ||
       (iVar2 = fn_82BE6A00(param_1), iVar2 == 0)))))) {
    uVar1 = 0;
  }
  else {
    fn_82BE64E0(param_1,1);
    uVar1 = 1;
  }
  return uVar1;
}

