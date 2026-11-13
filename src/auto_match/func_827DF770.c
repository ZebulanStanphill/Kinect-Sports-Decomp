extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_827D96A0();
extern int fn_827E11C0();
extern int fn_827E24B0();
extern int fn_827E2678();
extern unsigned int uStack00000034;


unsigned __int64
fn_827DF770(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack00000034;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [72];
  
  uStack00000034 = (unsigned int)param_5;
  uVar1 = fn_827E24B0(0x30,param_5);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_827E2678(uVar1,param_2,param_3,param_4,param_6,param_1);
  }
  fn_827D96A0(param_2);
  fn_827E11C0(auStack_48,param_1,auStack_50);
  *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
  return uVar2;
}

