extern int fn_82FA5060();
extern int fn_8302BB20();
extern int fn_830331B8();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83033360(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0xa4);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_830331B8(uVar1,param_1,param_2,param_3);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8302BB20();
    }
  }
  return uVar1;
}

