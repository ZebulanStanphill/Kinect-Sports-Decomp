extern int fn_8226FDB8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D12AC;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12C0;


unsigned __int64 fn_822A22C8(void)

{
  int iVar1;
  
  if (lbl_831D12B8 == 0) {
    if ((lbl_831D1298 == 0) && (iVar1 = fn_8226FDB8(lbl_831D12AC,0), iVar1 == 0)) {
      return 1;
    }
  }
  else if ((lbl_831D1298 == 0) && (lbl_831D12C0 == ltcg_pool_0_0f)) {
    return 1;
  }
  return 0;
}

