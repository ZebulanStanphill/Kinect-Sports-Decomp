extern int fn_82526C70();
extern unsigned int lbl_831BFEE8;


unsigned __int64 fn_825D61E0(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_1;
  if ((iVar1 != 0) && ((iVar1 < 0x3e4 || ((0x3e5 < iVar1 && (iVar1 != 0x4de)))))) {
    iVar2 = 0;
    iVar3 = lbl_831BFEE8;
    while (iVar3 != 0) {
      if (iVar3 == iVar1) {
        return param_1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = (&lbl_831BFEE8)[iVar2 * 3];
    }
    fn_82526C70(0xffffffff83297a20,0x10,0xffffffff821aa66c,param_1);
  }
  return param_1;
}

