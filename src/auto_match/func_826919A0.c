extern __int64 fn_826914F8();
extern unsigned int lbl_831E7E60;


unsigned __int64
fn_826919A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)lbl_831E7E60;
  RtlEnterCriticalSection(uVar2 + 0x2c4);
  uVar1 = fn_826914F8(param_1,param_2,param_3,param_4,param_5,param_6);
  RtlLeaveCriticalSection(uVar2 + 0x2c4);
  return uVar1;
}

