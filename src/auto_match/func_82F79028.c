#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
extern int fn_82D7E470();
extern int fn_82F78F98();
extern int _ctrlfp();
extern unsigned int iStack_3c;
extern unsigned int lbl_831BBCB0;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64
fn_82F79028(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             int param_5)

{
  int iVar1;
  unsigned __int64 in_r8;
  int *piVar2;
  unsigned int uStack00000020;
  unsigned int uStack00000024;
  unsigned int uStack00000028;
  unsigned int uStack0000002c;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  
  piVar2 = &lbl_831BBCB0;
  iVar1 = 0;
  do {
    if (*piVar2 == param_5) {
      stack_pair_40.second = *(int *)(iVar1 * 8 + -0x7ce4434c);
      goto LAB_82f79088;
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while ((int)piVar2 < -0x7ce44268);
  stack_pair_40.second = 0;
LAB_82f79088:
  _uStack00000020 = param_1;
  _uStack00000028 = param_2;
  _uStack00000030 = param_3;
  if (stack_pair_40.second == 0) {
    _ctrlfp(in_r8,0xffffffffc007feff);
    fn_82F78F98(param_4);
  }
  else {
    uStack00000020 = (unsigned int)((unsigned __int64)param_1 >> 0x20);
    uStack00000024 = (unsigned int)param_1;
    uStack00000028 = (unsigned int)((unsigned __int64)param_2 >> 0x20);
    uStack0000002c = (unsigned int)param_2;
    uStack00000030 = (unsigned int)((unsigned __int64)param_3 >> 0x20);
    uStack00000034 = (unsigned int)param_3;
    stack_pair_40.first = (unsigned int)param_4;
    uStack_38 = uStack00000020;
    uStack_34 = uStack00000024;
    uStack_30 = uStack00000028;
    uStack_2c = uStack0000002c;
    uStack_28 = uStack00000030;
    uStack_24 = uStack00000034;
    _ctrlfp(in_r8,0xffffffffc007feff);
    iVar1 = fn_82D7E470(&stack_pair_40.first);
    if (iVar1 == 0) {
      fn_82F78F98(param_4);
    }
    param_3 = CONCAT44(uStack_28,uStack_24);
  }
  return param_3;
}

