extern unsigned int *auStack_20;
extern int fn_824974E8();


/* WARNING: Removing unreachable block (ram,0x82497474) */

void fn_82497430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = *(unsigned int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    for (iVar2 = iVar1; iVar2 != *(int *)(param_1 + 0x14); iVar2 = iVar2 + 4) {
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  fn_824974E8((unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x10),param_2 << 1,
                    auStack_20);
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + -1;
  return;
}

