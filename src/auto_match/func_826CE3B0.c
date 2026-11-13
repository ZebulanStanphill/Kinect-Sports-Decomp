extern int fn_8267C498();
extern int fn_82699740();
extern int fn_826BD928();


void fn_826CE3B0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x1b4);
  if (iVar3 != 0) {
    uVar2 = 0;
    if (*(int *)(iVar3 + 0xc) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar3 + 8);
        iVar1 = *(int *)(iVar3 + iVar4);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        iVar3 = *(int *)(iVar3 + iVar4);
        (**(int (***)())(**(int **)(iVar3 + 8) + 0xc))();
        fn_8267C498(iVar3);
        iVar3 = *(int *)(param_1 + 0x1b4);
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar2 < *(unsigned int *)(iVar3 + 0xc));
    }
    fn_82699740(iVar3 + 8,0);
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0xa8) + iVar3);
      if ((*(unsigned char *)(iVar4 + 0x66) & 0x80) != 0) {
        iVar1 = (**(int (***)())(*(int *)(iVar4 + 0x68) + 8))(iVar4 + 0x68);
        if (iVar1 == 2) {
          fn_826BD928(iVar4 + 0x68);
          ((int (*)())fn_826CE3B0)();
        }
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < *(unsigned int *)(param_1 + 0xac));
  }
  return;
}

