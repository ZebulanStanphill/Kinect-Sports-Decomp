extern int fn_831429EC();
extern unsigned int iStack00000014;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;


unsigned __int64
fn_829D2A00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  
  if ((*(unsigned __int64 *)(param_1 + 8) & 2) == 0) {
    uVar1 = 0x40050002;
  }
  else {
    iStack00000014 = param_1;
    uStack0000002c = param_4;
    uStack00000034 = param_5;
    uStack0000003c = param_6;
    uStack00000044 = param_7;
    uStack0000004c = param_8;
    uVar2 = XamGetCurrentTitleId();
    uVar1 = fn_831429EC(iStack00000014,1,2,0x58,uVar2,0x202dff07,param_2,param_3);
  }
  return uVar1;
}

