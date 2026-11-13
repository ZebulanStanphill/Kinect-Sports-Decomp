extern int fn_82639380();
extern int fn_82639528();


void fn_82675930(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 0xd8);
    iVar3 = (param_2 + 0x30) * 0x18;
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar3 + iVar1) & 0xffffe3ff | 0x800;
    uVar2 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | uVar2;
    iVar1 = *(int *)(param_1 + 0xd8);
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar3 + iVar1) & 0xffff1fff | 0x4000;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | uVar2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xd8);
    iVar3 = (param_2 + 0x30) * 0x18;
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar3 + iVar1) & 0xffffe3ff;
    uVar2 = 0x8000000000000000 >> (param_2 + 0x20U & 0x7f);
    *(unsigned __int64 *)(iVar1 + 0x18) = uVar2 | *(unsigned __int64 *)(iVar1 + 0x18);
    iVar1 = *(int *)(param_1 + 0xd8);
    *(unsigned int *)(iVar3 + iVar1) = *(unsigned int *)(iVar3 + iVar1) & 0xffff1fff;
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18) | uVar2;
  }
  fn_82639380(*(unsigned int *)(param_1 + 0xd8),param_2,1);
  fn_82639528(*(unsigned int *)(param_1 + 0xd8),param_2,1);
  return;
}

