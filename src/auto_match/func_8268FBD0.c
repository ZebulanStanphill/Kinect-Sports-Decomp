extern int fn_82F63CA0();


void fn_8268FBD0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  iVar4 = param_2 * 0xc + param_1;
  uVar2 = *(int *)(param_1 + 0xc) + 3;
  iVar1 = *(unsigned int *)(param_1 + 8) * 8 + *(unsigned int *)(iVar4 + 0x20);
  (**(int (***)())(**(int **)(param_1 + 4) + 0x10))
            (*(int **)(param_1 + 4),
             ((unsigned __int64)*(unsigned int *)(iVar4 + 0x1c) -
             (((iVar1 - 1U >> (uVar2 & 0x3f)) + uVar3) - 1 & ~(uVar3 - 1))) +
             (unsigned __int64)*(unsigned int *)(iVar4 + 0x20),
             ((iVar1 - 1U >> (uVar2 & 0x3f)) + uVar3) - 1 & ~(uVar3 - 1));
  (**(int (***)())(**(int **)(param_1 + 4) + 8))
            (*(int **)(param_1 + 4),*(unsigned int *)(iVar4 + 0x1c),*(unsigned int *)(iVar4 + 0x20));
  if (param_2 + 1U < *(unsigned int *)(param_1 + 0x19c)) {
    fn_82F63CA0(iVar4 + 0x1c,iVar4 + 0x28,((*(unsigned int *)(param_1 + 0x19c) - param_2) + -1) * 0xc);
  }
  *(unsigned int *)(param_1 + 0x1a0) = 0xffffffff;
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  return;
}

