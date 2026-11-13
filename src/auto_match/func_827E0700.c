extern int fn_827DE250();
extern unsigned int uStack_20;


__int64 fn_827E0700(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char uStack_20;
  
  fn_827DE250(param_2,param_3,param_4,param_1 + 0xc,0,uStack_20);
  return (param_3 & 0x3fffffff) * 4 + param_2;
}

