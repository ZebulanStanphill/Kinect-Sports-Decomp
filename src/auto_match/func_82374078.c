extern int fn_82250A18();
extern int fn_822B17A8();
extern unsigned int lbl_832975B0;


void fn_82374078(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if ((*(char *)(iVar3 + 4) == '\0') || (param_2 == *(int *)(param_1 + 0xcc))) {
    puVar2 = *(unsigned int **)(param_2 * 4 + *(int *)(param_1 + 0x20));
    piVar1 = (int *)puVar2[1];
    for (piVar4 = (int *)*puVar2; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (*(int *)(*piVar4 + 0x34) != 0) {
        fn_822B17A8(*(int *)(*piVar4 + 0x34),param_3,0);
      }
    }
  }
  return;
}

