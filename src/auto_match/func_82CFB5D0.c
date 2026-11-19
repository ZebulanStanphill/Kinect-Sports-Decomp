extern int fseek();


unsigned int  fn_82CFB5D0(int self)

{
  __int64 lVar1;
  
  lVar1 = fseek(*(unsigned int *)(self + 8));
  return lVar1 != 0;
}

