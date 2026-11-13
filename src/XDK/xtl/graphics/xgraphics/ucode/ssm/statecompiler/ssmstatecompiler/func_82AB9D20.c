extern int fn_82AB15D0();
extern int fn_82B69A00();
extern int fn_82B6BF80();
extern int fn_82B77EE0();
extern int fn_82B7C530();


__int64 fn_82AB9D20(unsigned int *param_1)

{
  int (**pcVar1)();
  unsigned int uVar2;
  int iVar4;
  __int64 lVar3;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7614,0xffffffff820d7628,0x10b);
  }
  iVar4 = fn_82B69A00(param_1[7],1);
  fn_82B6BF80(param_1[10]);
  fn_82B6BF80(param_1[0xb]);
  if (iVar4 == 0) {
    iVar4 = param_1[8];
    pcVar1 = *(int (***)())(iVar4 + 0x59c);
    uVar2 = *(unsigned int *)(iVar4 + 0x5a4);
    fn_82B7C530(iVar4,1);
    (*pcVar1)(uVar2,iVar4);
  }
  else if (param_1[6] != 0) {
    iVar4 = fn_82B77EE0();
    if (iVar4 != 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7600,0xffffffff820d7628,0x125);
    }
  }
  lVar3 = (*(int (**)())param_1[2])(*param_1,param_1);
  if (lVar3 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7600,0xffffffff820d7628,300);
  }
  return lVar3;
}

