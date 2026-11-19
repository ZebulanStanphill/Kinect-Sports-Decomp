extern int fn_82F678C8();


void fn_82CFABC0(int self,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82F678C8(param_2,1,param_3,*(unsigned int *)(self + 0xc));
  if (iVar1 <= 0) {
    *(unsigned char *)(self + 0x10) = 0;
  }
  return;
}

