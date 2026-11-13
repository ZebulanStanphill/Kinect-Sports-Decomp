extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_827DE048();
extern int fn_827DE530();


unsigned __int64 fn_827DDEE8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [32];
  
  uVar1 = fn_827DE048(auStack_30);
  fn_827DE530(param_1,auStack_40,uVar1);
  return param_1;
}

