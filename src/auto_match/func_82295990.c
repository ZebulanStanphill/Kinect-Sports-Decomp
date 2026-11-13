extern unsigned int *auStack_70;
extern int fn_822960B0();
extern int fn_82F64020();


unsigned __int64
fn_82295990(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned char auStack_70 [64];
  
  uVar1 = fn_82F64020(auStack_70,0x40,"%p",param_6);
  fn_822960B0(param_1,param_2,param_3,param_4,param_5,auStack_70,uVar1);
  return param_1;
}

