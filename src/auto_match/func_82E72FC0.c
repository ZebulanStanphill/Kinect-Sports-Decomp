extern int fn_82E7E900();
extern int fn_82E7F9D0();


unsigned int  fn_82E72FC0(unsigned int param_1,unsigned short *param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if ((param_2 == (unsigned short *)0x0) || ((param_1 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar1 = fn_82E7E900(param_1,param_2);
    if (((int)uVar1 >= 0) && ((param_3 & 0xffff) != (unsigned)*param_2)) {
      uVar1 = fn_82E7F9D0(param_1,param_3);
    }
  }
  return uVar1;
}

