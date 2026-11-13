extern int fn_82CE5400();
extern int fn_82CE5420();
extern int fn_82CF9B00();
extern unsigned int lbl_8323B4A0;


int fn_82CE78C0(void)

{
  unsigned int iVar1;
  
  iVar1 = KeTlsGetValue(lbl_8323B4A0);
  if (iVar1 != 0) {
    fn_82CF9B00();
  }
  iVar1 = fn_82CE5420();
  if (iVar1 != 0) {
    fn_82CE5400(0);
  }
  return 0;
}

