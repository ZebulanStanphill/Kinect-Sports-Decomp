extern int fn_8251E530();
extern int fn_82603640();
extern int fn_82CE5410();
extern int fn_82D888D0();


void fn_825A6A78(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(param_1 + 0x7c0);
  if ((((iVar1 != 0) && (iVar2 != 0)) && (*(int *)(iVar2 + 8) != 0)) &&
     (*(char *)(iVar2 + 0xe8) != '\x05')) {
    iVar2 = fn_82CE5410();
    iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x150);
    *(unsigned short *)(iVar2 + 4) = 0x150;
    iVar2 = fn_82603640(iVar2,*(unsigned int *)(param_1 + 0x7c0));
    *(int *)(param_1 + 0x4e0) = iVar2;
    if (iVar2 != 0) {
      for (piVar3 = *(int **)(iVar1 + 0x27c); piVar3 < *(int **)(iVar1 + 0x280); piVar3 = piVar3 + 1
          ) {
        if (*piVar3 == iVar2) {
          fn_8251E530(iVar1 + 0x27c,piVar3);
          return;
        }
      }
      fn_82D888D0(*(unsigned int *)(iVar1 + 0x1f8));
    }
  }
  return;
}

