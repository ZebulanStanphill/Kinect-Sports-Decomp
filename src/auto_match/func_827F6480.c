extern unsigned int *auStack_c;
extern int fn_82800648();
extern unsigned int uStack_10;


unsigned int fn_827F6480(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uStack_10;
  unsigned int auStack_c;
  
  uStack_10 = 0;
  auStack_c = 0;
  fn_82800648(param_1 + 0x24,3,param_2,&uStack_10,&auStack_c);
  return uStack_10;
}

