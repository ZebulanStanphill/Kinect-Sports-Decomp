extern int fn_8305F670();
extern int fn_8305F7A0();


void fn_8305E648(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar2 = 0;
    do {
      uVar1 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                           *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x2c)));
      fn_8305F670(param_2,uVar1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  return;
}

