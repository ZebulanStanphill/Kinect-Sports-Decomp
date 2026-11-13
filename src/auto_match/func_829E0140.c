extern int fn_829DDB48();
extern int fn_829DEEE8();


unsigned __int64 fn_829E0140(unsigned int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_829DDB48(param_2,param_1);
    fn_829DEEE8(param_2 + 0x1320,param_1 + 0x70);
    uVar1 = 0;
  }
  return uVar1;
}

