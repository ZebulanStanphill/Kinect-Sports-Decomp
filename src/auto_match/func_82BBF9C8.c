extern int fn_82BBECA8();
extern int fn_82BBEEF0();


unsigned int fn_82BBF9C8(unsigned __int64 param_1,__int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_82BBECA8(param_1,param_2 + 8);
  if ((int)uVar1 >= 0) {
    uVar1 = fn_82BBEEF0(param_1,param_2);
    uVar1 = (int)uVar1 >> 0x1f & uVar1;
  }
  return uVar1;
}

