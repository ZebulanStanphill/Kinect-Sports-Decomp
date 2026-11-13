#define true 1
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_82A2B760();
extern int fn_82A36058();
extern int fn_82F68CC0();


unsigned __int64
fn_82A2A650(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_140 [16];
  unsigned char auStack_130 [304];
  
  if ((param_1 & 0xffffffff) < 0x41) {
    fn_82F68CC0(auStack_130,param_2,(param_1 & 0x3fffffff) << 2);
    uVar1 = fn_82A36058(auStack_140,param_4);
    while( true ) {
      uVar2 = NtWaitForMultipleObjectsEx
                        ((char)param_1,auStack_130,param_3 == 0,1,param_5 & 0xff,uVar1);
      if ((int)uVar2 < 0) break;
      if (param_5 == 0) {
        return uVar2;
      }
      if ((int)uVar2 != 0x101) {
        return uVar2;
      }
    }
    fn_82A2B760();
  }
  else {
    fn_82A2B760(0xffffffffc000000d);
  }
  return 0xffffffffffffffff;
}

