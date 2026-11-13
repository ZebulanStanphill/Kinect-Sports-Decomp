extern int fn_82A40BA8();
extern int fn_82A43A30();
extern int fn_82A47B28();
extern int fn_82A4F4E0();


void fn_82A46368(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  *param_2 = 0;
  if (*(int *)(param_1 + 0x290) != 0) {
    piVar2 = *(int **)(param_1 + 0x288);
    if (iVar1 == 0) {
      *param_2 = 1;
      *(unsigned int *)(param_1 + 0x1c4) = 0;
      *(unsigned int *)(param_1 + 0x1c8) = 0;
      *(unsigned int *)(param_1 + 0x1d0) = 0;
    }
    else {
      if (piVar2 == (int *)0x0) goto LAB_82a46418;
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
        fn_82A47B28(param_1 + 0x270,piVar2);
        fn_82A43A30(param_1 + 0x8c,*(unsigned int *)(iVar1 + 0x18),0);
        fn_82A4F4E0(iVar1);
        piVar2 = piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
LAB_82a46418:
  *(unsigned int *)(param_1 + 0x264) = 1;
  if (*(int *)(param_1 + 0x2b8) != 0) {
    do {
      iVar1 = fn_82A40BA8(param_1 + 0x298);
      if (iVar1 != 0) {
        fn_82A43A30(param_1 + 0x8c,*(unsigned int *)(iVar1 + 0x18),0);
        fn_82A4F4E0(iVar1);
      }
    } while (*(int *)(param_1 + 0x2b8) != 0);
  }
  return;
}

