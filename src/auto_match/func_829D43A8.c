extern unsigned int fStack00000074;
extern int fn_831429EC();
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;


unsigned __int64
fn_829D43A8(double param_1,int param_2,unsigned __int64 param_3,unsigned char param_4,unsigned short param_5,
             unsigned int param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int uStack00000034;
  unsigned int uStack00000044;
  float fStack00000074;
  
  fStack00000074 = (float)param_1;
  if ((*(unsigned __int64 *)(param_2 + 8) & 4) == 0) {
    uVar1 = 0x40050002;
  }
  else {
    uStack00000034 = param_6;
    uStack00000044 = param_8;
    uVar2 = XamGetCurrentTitleId();
    uVar1 = fn_831429EC(param_2,2,4,0xb0,uVar2,param_3,param_4,param_5);
  }
  return uVar1;
}

