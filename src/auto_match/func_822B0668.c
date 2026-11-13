extern int fn_822ABA88();
extern int fn_822AF138();
extern int fn_8288B760();


void fn_822B0668(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0;
  uVar1 = *(unsigned int *)(*(int *)((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)) + 8);
  if (uVar1 != 0) {
    do {
      iVar2 = fn_822ABA88(*(unsigned int *)
                             ((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),uVar5);
      if (*(int *)(iVar2 + 0x168) == 0) {
        uVar3 = *(unsigned int *)(iVar2 + 0x16c);
      }
      else {
        uVar3 = fn_8288B760();
        uVar3 = uVar3 & 0xff;
      }
      if (uVar3 != 0) {
        uVar4 = 3;
        iVar2 = fn_822ABA88(*(unsigned int *)
                               ((*(int **)(param_1 + 0xc))[4] * 4 + **(int **)(param_1 + 0xc)),uVar5
                             );
        fn_822AF138(*(unsigned int *)(iVar2 + 0x110),uVar4);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return;
}

