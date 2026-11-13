extern int fn_82CFF8D0();


void fn_82DFA2F8(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(param_1 + 0x10));
      if ((*(unsigned int *)(iVar1 + 0x18) & 0x80000000) == 0) {
        uVar2 = fn_82CFF8D0(*(unsigned int *)(iVar1 + 0x10),*(unsigned int *)(iVar1 + 0x18) << 5);
        (**(int (***)())(*param_2 + 0x14))
                  (param_2,3,0xffffffff821b8000,*(unsigned int *)(iVar1 + 0x10),
                   *(int *)(iVar1 + 0x14) << 5,uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  return;
}

