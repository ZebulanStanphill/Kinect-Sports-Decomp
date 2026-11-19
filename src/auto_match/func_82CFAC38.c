extern int fseek();


unsigned int  fn_82CFAC38(int self)

{
  __int64 lVar1;
  
  lVar1 = fseek(*(unsigned int *)(self + 0xc));
  return lVar1 != 0;
}

