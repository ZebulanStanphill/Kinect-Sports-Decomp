extern int fn_825154B8();
extern int fn_825156F8();


void fn_82515038(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = *(unsigned int *)(param_1 + 0x28);
  uVar1 = fn_825154B8();
  iVar2 = fn_825156F8(uVar1,uVar3);
  uVar3 = (*(int (**)())(iVar2 + 0x28))(*(unsigned int *)(param_2 + 0x50));
  *(unsigned int *)(param_2 + 0x4c) = uVar3;
  return;
}

