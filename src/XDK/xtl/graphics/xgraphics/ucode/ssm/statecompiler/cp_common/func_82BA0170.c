extern int fn_82AB15D0();
extern int fn_82AB71F0();
extern unsigned int lbl_820DDF18;
extern unsigned int lbl_820DDF1C;
extern unsigned int lbl_820DDF20;


void fn_82BA0170(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  uVar1 = fn_82AB71F0(param_1,0x22,param_2);
  cVar2 = fn_82AB71F0(param_1,0x23,param_2);
  fn_82AB71F0(param_1,0x24,param_2);
  if ((uVar1 == 0) || (0x10 < uVar1)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820deadc,0xffffffff820de290,0x229);
  }
  iVar5 = uVar1 * 0x10;
  if (cVar2 == '@') {
    iVar5 = *(int *)(&lbl_820DDF1C + iVar5);
    *param_3 = iVar5;
    if (iVar5 != 0) {
      return;
    }
    uVar4 = 0x234;
    uVar3 = 0xffffffff820deacc;
  }
  else if (cVar2 == '\x03') {
    iVar5 = *(int *)(&lbl_820DDF20 + iVar5);
    *param_3 = iVar5;
    if (iVar5 != 0) {
      return;
    }
    uVar4 = 0x23c;
    uVar3 = 0xffffffff820deacc;
  }
  else {
    iVar5 = *(int *)(&lbl_820DDF18 + iVar5);
    *param_3 = iVar5;
    if (iVar5 != 0) {
      return;
    }
    if (uVar1 == 1) {
      return;
    }
    uVar4 = 0x249;
    uVar3 = 0xffffffff821b597c;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,uVar3,0xffffffff820de290,uVar4);
  return;
}

