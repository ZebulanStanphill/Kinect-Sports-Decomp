extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82406BE0();


void fn_82406810(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x70);
  if (iVar1 != 0) {
    uVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c);
    uVar2 = 2;
    if (uVar3 != (uVar3 - 1) + (unsigned __int64)(uVar3 == 0)) goto LAB_8240684c;
  }
  uVar2 = 1;
LAB_8240684c:
  fn_82406BE0(param_1,uVar2);
  fn_823598B0(*(unsigned int *)(param_1 + 8),0);
  fn_82359928(*(unsigned int *)(param_1 + 8),0);
  return;
}

