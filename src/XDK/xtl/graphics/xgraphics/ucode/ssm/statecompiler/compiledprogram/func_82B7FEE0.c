extern int fn_82AB15D0();
extern int fn_82AB6BC8();
extern int fn_82AB6F30();
extern int fn_82AB74F8();
extern int fn_82B7F730();
extern int fn_82B7FE30();


void fn_82B7FEE0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820dbba0,0x37a);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820dbba0,0x37b);
  }
  fn_82AB6F30(param_2,aiStack_40);
  if (aiStack_40[0] != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c64,0xffffffff820dbba0,0x380);
  }
  fn_82AB6BC8(param_1[0xc]);
  param_1[0xc] = (int)param_2;
  if (param_1[0xe] != 0) {
    (*(int (**)())param_1[2])(*param_1);
  }
  uVar1 = fn_82AB74F8(param_2);
  fn_82B7FE30(param_1,uVar1);
  uVar2 = fn_82B7F730(param_1,param_2,param_3);
  param_1[0xe] = uVar2;
  return;
}

