extern int fn_825154B8();
extern int fn_825156F8();


void fn_82514F20(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  uVar2 = fn_825154B8();
  iVar3 = fn_825156F8(uVar2,uVar1);
  (*(int (**)())(iVar3 + 0x30))(param_1,param_2,param_3);
  return;
}

