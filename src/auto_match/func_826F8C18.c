typedef unsigned char bool;
extern int fn_82696958();


unsigned __int64 fn_826F8C18(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  sync(1);
  bVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x20) != 1;
  if ((*(char *)(*(int *)(param_1 + 0x10) + 0x78) == '\0') || (bVar3)) {
    if (bVar3) {
      return 0;
    }
    uVar4 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0xc) + 0x68) + 0x5c))();
    piVar1 = *(int **)(*(int *)(param_1 + 0x10) + 0x58);
    iVar2 = *piVar1;
    uVar5 = fn_82696958(*(int *)(param_1 + 0x10) + 0x48,uVar4);
    (**(int (***)())(iVar2 + 8))(piVar1,uVar4,uVar5);
  }
  return 1;
}

