extern int fn_8266EC60();
extern int fn_82672AB8();


void fn_8266EF68(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  
  fn_8266EC60();
  uVar1 = (*(int (**)())(*param_2 + 0xb8))(param_2);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82672AB8(uVar1,param_3,param_4,param_5);
  }
  return;
}

