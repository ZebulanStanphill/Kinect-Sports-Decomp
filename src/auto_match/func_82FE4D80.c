extern int fn_82FE41A0();
extern int fn_82FE4B20();
extern int fn_82FE4C08();


unsigned __int64
fn_82FE4D80(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = fn_82FE4C08(param_4[3],param_3,param_4,param_7);
  uVar1 = fn_82FE41A0(param_2,param_3,*param_4);
  if (((((int)uVar1 == 1) &&
       (uVar1 = fn_82FE41A0(param_2 + 0xc,param_3,param_4[1]), (int)uVar1 == 1)) &&
      (uVar1 = fn_82FE41A0(param_2 + 0x18,param_3,param_4[2]), (int)uVar1 == 1)) &&
     (uVar1 = fn_82FE41A0(param_2 + 0x24,param_3,param_4[3]), (int)uVar1 == 1)) {
    fn_82FE4B20(param_1,uVar2,param_2 + 0x30);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x3c);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x48);
    fn_82FE4B20(param_1,uVar2,param_2 + 0x54);
    uVar1 = 1;
  }
  return uVar1;
}

