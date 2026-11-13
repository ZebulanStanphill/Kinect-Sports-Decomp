extern int fn_8265CA20();
extern unsigned int lbl_83297014;


void fn_8313F998(void)

{
  unsigned int iVar1;
  
  iVar1 = KeTlsGetValue(lbl_83297014);
  if (iVar1 != 0) {
    fn_8265CA20();
  }
  KeTlsFree(lbl_83297014);
  return;
}

