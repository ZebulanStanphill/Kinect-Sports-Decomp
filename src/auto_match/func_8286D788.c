extern unsigned int *auStack_40;
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8287A4E0();


unsigned __int64 fn_8286D788(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,__int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned int auStack_40 [10];
  
  uVar1 = fn_8265C9E0(0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_8287A4E0(param_1,param_2,param_5,uVar1,param_7);
  }
  auStack_40[0] = (unsigned int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8257A9F0(param_6 + 4,auStack_40);
    uVar1 = (unsigned __int64)auStack_40[0];
  }
  return uVar1;
}

