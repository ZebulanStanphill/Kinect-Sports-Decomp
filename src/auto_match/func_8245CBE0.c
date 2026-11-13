extern int fn_8265C9E0();
extern int fn_82E1BFA0();
extern int fn_82E1C280();
extern int fn_82E1C410();
extern int fn_830B4CB0();


void fn_8245CBE0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  puVar3 = *(unsigned int **)(param_1 + 0x6a0);
  uVar4 = 0;
  if (puVar3 != (unsigned int *)0x0) {
    (**(int (***)())*puVar3)(puVar3,1);
    *(unsigned int *)(param_1 + 0x6a0) = 0;
  }
  if (*(int *)(param_1 + 0x6b4) == 0) {
    iVar1 = fn_8265C9E0(0x54);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82E1C410();
    }
    *(unsigned int *)(param_1 + 0x6a0) = uVar2;
  }
  else {
    iVar1 = fn_8265C9E0(0x80);
    if (iVar1 != 0) {
      uVar4 = fn_82E1BFA0();
    }
    fn_830B4CB0(uVar4,*(unsigned int *)(param_1 + 0x63c));
    puVar3 = (unsigned int *)(param_1 + 0x640);
    if (0xf < *(unsigned int *)(param_1 + 0x654)) {
      puVar3 = (unsigned int *)*puVar3;
    }
    fn_82E1C280(uVar4,puVar3);
    *(int *)(param_1 + 0x6a0) = (int)uVar4;
  }
  (**(int (***)())(**(int **)(param_1 + 0x6a0) + 0x14))
            (*(int **)(param_1 + 0x6a0),*(unsigned int *)(param_1 + 0x614) & 0xffff);
  puVar3 = (unsigned int *)(param_1 + 0x5dc);
  if (0xf < *(unsigned int *)(param_1 + 0x5f0)) {
    puVar3 = (unsigned int *)*puVar3;
  }
  (**(int (***)())(**(int **)(param_1 + 0x6a0) + 0xc))(*(int **)(param_1 + 0x6a0),puVar3);
  return;
}

