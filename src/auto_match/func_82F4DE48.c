extern int fn_829DAB70();
extern unsigned int lbl_8326183C;


void fn_82F4DE48(void)

{
  int iVar1;
  
  fn_829DAB70();
  RtlEnterCriticalSection(lbl_8326183C + 0x2dec);
  iVar1 = lbl_8326183C + 0x2dec;
  *(unsigned int *)(lbl_8326183C + 0x2de4) = 0;
  RtlLeaveCriticalSection(iVar1);
  return;
}

