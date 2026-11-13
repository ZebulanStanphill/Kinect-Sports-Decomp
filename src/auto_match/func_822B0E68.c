extern int fn_822ABBF0();
extern unsigned int lbl_821AC7CC;


void fn_822B0E68(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned char ** appuStack_10;
  
  piVar2 = *(int **)(param_1 + 0xc);
  iVar1 = 0;
  uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar3 != 0) {
    piVar2 = (int *)(*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x10) * 0x150 +
                     *(int *)(param_1 + 0x10) + 0x1080);
    do {
      *(unsigned char *)(piVar2 + 0xd) = 0;
      piVar2 = piVar2 + 0xc;
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  appuStack_10 = &lbl_821AC7CC;
  fn_822ABBF0(*(unsigned int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),
                &appuStack_10);
  return;
}

