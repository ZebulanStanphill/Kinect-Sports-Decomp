extern int fn_82A43A30();
extern int fn_82A47B28();
extern int fn_82A4F4E0();


void fn_82A482A0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x214) == 0) {
    *param_2 = 1;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x20c);
    if (iVar1 == 0) {
      *param_2 = 1;
    }
    else {
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)piVar2[1];
    }
    if (piVar2 != (int *)0x0) {
      do {
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar3 = piVar2;
        }
        else {
          iVar1 = *piVar2;
          piVar3 = (int *)piVar2[1];
        }
        fn_82A47B28(param_1 + 500,piVar2);
        fn_82A43A30(param_1 + 0x8c,*(unsigned int *)(iVar1 + 0x20),0);
        fn_82A4F4E0(iVar1);
        piVar2 = piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  return;
}

