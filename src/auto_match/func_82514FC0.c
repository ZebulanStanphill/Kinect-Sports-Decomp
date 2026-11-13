extern int fn_825154B8();
extern int fn_825156F8();


void fn_82514FC0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  uVar4 = *(unsigned int *)(param_1 + 0x28);
  uVar2 = fn_825154B8();
  iVar3 = fn_825156F8(uVar2,uVar4);
  uVar4 = (*(int (**)())(iVar3 + 0x24))();
  puVar1 = *(unsigned int **)(param_1 + 0x2c0);
  *(unsigned int *)(param_1 + 0x2c0) = uVar4;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  return;
}

