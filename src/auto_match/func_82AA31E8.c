extern unsigned int *auStack_60;
extern int fn_8265B510();
extern int fn_82AA1C90();
extern int fn_82AA2720();


unsigned __int64
fn_82AA31E8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned __int64 param_5,
             __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [80];
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  if (uVar2 != 0) {
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    if (param_2 == 0) {
      *param_8 = param_4 + 9;
    }
    else {
      *param_8 = param_4 + 8;
    }
    uVar3 = fn_8265B510(param_4[2],param_4[3],(unsigned __int64)uVar1 + param_6,uVar2,0,0,
                              0xffffffff82aa04e0,auStack_60);
    fn_82AA2720(param_5,0xffffffff821ce7a4);
    fn_82AA1C90(param_5,0xffffffff821cc86c);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  return 0;
}

