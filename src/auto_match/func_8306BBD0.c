extern unsigned int lbl_831BCA64;
extern unsigned int lbl_832650B8;


void fn_8306BBD0(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if (param_1 != &lbl_832650B8) {
    iVar1 = KeTlsGetValue(lbl_831BCA64);
    if (iVar1 != 0) {
      KeTlsSetValue(lbl_831BCA64,0);
    }
    if (param_1 != (unsigned int *)0x0) {
      KeTlsSetValue(lbl_831BCA64,param_1);
    }
  }
  return;
}

