extern int fn_8306BC58();
extern unsigned int lbl_831BCA64;


extern char lbl_832650B8[];
void fn_8306BE18(void)

{
  unsigned int uVar1;
  
  uVar1 = KeTlsGetValue(lbl_831BCA64);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 =lbl_832650B8;
  }
  fn_8306BC58(uVar1);
  return;
}

