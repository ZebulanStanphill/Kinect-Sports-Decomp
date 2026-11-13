extern int fn_82AB15D0();
extern int fn_82B7F488();
extern int iRam8316d920;


void fn_82B9FA18(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar2 = iRam8316d920;
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820de290,0x69a);
  }
  uVar1 = fn_82B7F488(param_1,0);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820de2f4,0xffffffff820de290,0x69b);
  }
  puVar4 = (unsigned int *)(param_2 * 0x10 + iVar2);
  iVar2 = fn_82B7F488(param_1,*(unsigned int *)(param_2 * 0x10 + iVar2));
  puVar3 = (unsigned int *)(iVar2 + (puVar4[1] + 2) * 4);
  *puVar3 = *puVar3 & ~puVar4[2];
  iVar2 = fn_82B7F488(param_1,*puVar4);
  puVar3 = (unsigned int *)(iVar2 + (puVar4[1] + 2) * 4);
  *puVar3 = param_3 << (puVar4[3] & 0x3f) & puVar4[2] | *puVar3;
  return;
}

