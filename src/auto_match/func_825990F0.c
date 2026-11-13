extern int fn_82599308();
extern int fn_82CE5410();
extern int fn_82CE7310();
extern int fn_82CE78C0();
extern int fn_82CE95A8();


void fn_825990F0(void)

{
  int iVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar1;
  unsigned int *puVar5;
  
  iVar2 = fn_82599308();
  if (*(int *)(iVar2 + 4) != 0) {
    iVar2 = fn_82599308();
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      fn_82CE95A8(iVar2);
      iVar3 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar3 + 0x10) + 8))(*(int **)(iVar3 + 0x10),iVar2,0x1c0);
    }
    iVar2 = fn_82599308();
    *(unsigned int *)(iVar2 + 4) = 0;
  }
  fn_82CE78C0();
  piVar4 = (int *)fn_82CE7310();
  iVar2 = *piVar4;
  lVar1 = fn_82599308();
  (**(int (***)())(iVar2 + 0x10))(piVar4,lVar1 + 8,3);
  fn_82599308();
  puVar5 = (unsigned int *)fn_82599308();
  *puVar5 = 0;
  return;
}

