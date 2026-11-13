extern int fn_829DCF18();
extern int fn_829DDAF0();
extern int fn_829DEE48();


unsigned __int64 fn_829E00C0(unsigned int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  if (((param_1 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_829DDAF0(param_2,param_1);
    fn_829DEE48(param_2 + 0x1320,param_1 + 0x70);
    fn_829DCF18(param_2 + 0x8280,param_1 + 0x3820);
    uVar1 = 0;
  }
  return uVar1;
}

