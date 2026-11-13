extern int fn_8305F7A0();
extern int fn_83060530();
extern int fn_83060570();
extern int fn_830615A8();


void fn_8305E0F8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  if (*(unsigned int *)(param_1 + 0x28) != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar4 = 0;
      do {
        uVar1 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                             *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x2c)));
        uVar2 = fn_83060570(param_2,uVar1);
        iVar3 = iVar3 + 1;
        *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x2c)) = uVar2;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x30));
    }
    fn_830615A8(*(unsigned int *)(param_1 + 0x28),param_1);
  }
  *(int *)(param_1 + 0x28) = (int)param_2;
  fn_83060530(param_2,param_1);
  return;
}

