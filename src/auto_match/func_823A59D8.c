extern unsigned int *auStack_20;
extern int fn_8234C320();
extern int fn_823985A8();
extern int fn_8239C4D8();
extern int fn_823A5108();
extern int fn_823A5188();
extern int fn_823B3FE0();


void fn_823A59D8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_20 [4];
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar2 + 8);
  if ((*(int *)(iVar1 + 0x58) == *(int *)(iVar1 + 0x54)) || (*(int *)(iVar1 + 0x58) == 0)) {
    if ((*(int *)(iVar1 + 0x1e4) == 0) || (*(int *)(*(int *)(iVar1 + 0x1e4) + 0x150) == 0)) {
      iVar2 = fn_823A5188();
      if (iVar2 == 0) {
        return;
      }
      fn_823985A8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1e4) + 0xa8);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1d0) != 1)) {
        *(int *)(iVar2 + 0x1d0) = *(int *)(iVar2 + 0x1d0) + 1;
      }
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1e4) + 0x1e4);
      if (iVar2 != 0) {
        auStack_20[0] = 0;
        fn_823B3FE0(iVar2,auStack_20);
      }
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x1f8);
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) &&
         (*(int *)((unsigned int)(*(int *)(iVar2 + 0x214) != 0) * 0x2c + *(int *)(iVar2 + 0x118) + 0x280) !=
          0)) {
        fn_8234C320(0);
      }
      (**(int (***)())(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2e0) + 0x58))();
      fn_8239C4D8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
      iVar2 = *(int *)(param_1 + 8);
      uVar3 = 5;
    }
    else {
      uVar3 = 2;
    }
    fn_823A5108(iVar2,uVar3);
  }
  return;
}

