extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67A0();
extern int fn_82BE67E0();
extern int fn_82BE6A00();
extern int fn_82BE6C60();
extern int fn_82BE6E28();
extern unsigned int lbl_8322B1C8;
extern unsigned int lbl_8322B1D0;


unsigned __int64
fn_82BF5790(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BE6720(param_1,0x47,0);
  if (((((((iVar2 != 0) && (iVar2 = fn_82BE6E28(param_1,param_2,0), iVar2 != 0)) &&
         (iVar2 = fn_82BE6720(param_1,0x3d,0), iVar2 != 0)) &&
        ((iVar2 = fn_82BE6E28(param_1,param_3,0), iVar2 != 0 &&
         (iVar2 = fn_82BE6720(param_1,0x2a,0), iVar2 != 0)))) &&
       ((iVar2 = fn_82BE67E0(param_1,lbl_8322B1D0,0), iVar2 != 0 &&
        ((iVar2 = fn_82BE6720(param_1,0x2b,0), iVar2 != 0 &&
         (iVar2 = fn_82BE67E0(param_1,lbl_8322B1C8,0), iVar2 != 0)))))) &&
      (iVar2 = fn_82BE6A00(param_1), iVar2 != 0)) &&
     (((((param_4 & 0xffffffff) == 0 || ((param_5 & 0xffffffff) == 0)) || ((param_6 & 0xffff) == 0))
      || ((((iVar2 = fn_82BE6720(param_1,0x10,0), iVar2 != 0 &&
            (iVar2 = fn_82BE67A0(param_1,param_4,0), iVar2 != 0)) &&
           ((iVar2 = fn_82BE6720(param_1,0x11,0), iVar2 != 0 &&
            ((iVar2 = fn_82BE67A0(param_1,param_5,0), iVar2 != 0 &&
             (iVar2 = fn_82BE6720(param_1,0x12,0), iVar2 != 0)))))) &&
          (iVar2 = fn_82BE6760(param_1,param_6,0), iVar2 != 0)))))) {
    uVar1 = fn_82BE6C60(param_1,0xcd,1,1);
    return uVar1;
  }
  return 0;
}

