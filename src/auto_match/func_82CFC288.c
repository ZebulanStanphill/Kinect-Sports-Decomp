extern unsigned int *auStack_40;
extern int fn_82CE5410();
extern int fn_82CE5430();
extern int fn_82CFBEB8();


void fn_82CFC288(unsigned __int64 param_1)

{
  int iVar1;
  unsigned char auStack_40 [48];
  
  fn_82CE5430(auStack_40);
  iVar1 = fn_82CE5410();
  fn_82CFBEB8(param_1,*(unsigned int *)(iVar1 + 0x10));
  return;
}

