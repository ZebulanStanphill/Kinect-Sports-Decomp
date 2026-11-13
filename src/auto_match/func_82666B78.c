extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265FE68();
extern int fn_82660870();
extern int fn_826660E8();
extern int fn_82666F40();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;


void fn_82666B78(unsigned int param_1,int param_2)

{
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  int iStack0000001c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uVar2 = fn_8265CF70(param_1);
  iVar3 = fn_8265FE68(uStack00000014);
  if ((unsigned int)(iVar3 - iStack0000001c) < uVar2) {
    fn_82660870(uStack00000014);
  }
  else {
    uVar2 = uVar2 + iStack0000001c;
    uVar4 = fn_8265D3F0(uStack00000014);
    if (uVar4 < uVar2) {
      uVar1 = fn_82666F40(uStack00000014,uVar2);
      fn_826660E8(uStack00000014,uVar1);
    }
  }
  return;
}

