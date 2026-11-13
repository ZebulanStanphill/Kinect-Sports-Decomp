extern unsigned int *auStack_20;
extern int fn_825870E0();


/* WARNING: Removing unreachable block (ram,0x8258706c) */

void fn_82587028(int param_1,int param_2)

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
  fn_825870E0((unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x10),param_2 << 1,
                    auStack_20);
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + -1;
  return;
}

