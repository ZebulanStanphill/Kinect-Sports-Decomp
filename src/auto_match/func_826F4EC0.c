extern unsigned int *auStack_30;
extern int fn_826F4E18();


void fn_826F4EC0(int param_1)

{
  int iVar1;
  int (**pcVar2)();
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_30 [16];
  
  if (*(int *)(param_1 + 0x2e8) == 1) {
    iVar1 = **(int **)(param_1 + 0x2ec);
    uVar4 = fn_826F4E18(auStack_30,param_1,param_1 + 0x2fc);
    pcVar2 = *(int (***)())(iVar1 + 0x44);
    piVar3 = *(int **)(param_1 + 0x2ec);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x20);
    iVar1 = *piVar3;
    uVar4 = fn_826F4E18(auStack_30,param_1,*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0);
    (**(int (***)())(iVar1 + 8))(piVar3,uVar4);
    piVar3 = *(int **)(param_1 + 0x20);
    iVar1 = *piVar3;
    uVar4 = fn_826F4E18(auStack_30,param_1,param_1 + 0x308);
    pcVar2 = *(int (***)())(iVar1 + 0xc);
  }
  (*pcVar2)(piVar3,uVar4);
  return;
}

