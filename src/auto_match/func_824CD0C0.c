extern int fn_824CD030();
extern int fn_82F51178();
extern int fn_82F513F8();


void fn_824CD0C0(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  unsigned int iVar2; int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar1 = fn_82F513F8(*(unsigned int *)(*(int *)(iVar2 + 0x80) + 0x20));
    if (iVar1 == *(int *)(iVar2 + 0x94)) {
      fn_82F51178(*(unsigned int *)(*(int *)(iVar2 + 0x80) + 0x20),0);
    }
    *(unsigned int *)(iVar2 + 0x80) = 0;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x80) = param_1;
    iVar3 = fn_824CD030(param_1);
    if (iVar3 == 0) {
      fn_82F51178(*(unsigned int *)(*(int *)(param_2 + 0x80) + 0x20),
                      *(unsigned int *)(param_2 + 0x94));
    }
  }
  return;
}

