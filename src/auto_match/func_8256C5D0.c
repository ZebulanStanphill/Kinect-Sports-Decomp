extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256D470();
extern int fn_827D82B0();
extern unsigned int lbl_83265A24;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8256C5D0(int param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  __int64 lVar4;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uVar2 = lbl_83265A24;
  piVar1 = *(int **)(param_1 + 0x90);
  piVar3 = *(int **)(param_1 + 0x8c);
  if (piVar3 == piVar1) {
LAB_8256c648:
    piVar1 = *(int **)(param_1 + 0xa0);
    piVar3 = *(int **)(param_1 + 0x9c);
    if (piVar3 == piVar1) goto LAB_8256c6c8;
    do {
      if (*piVar3 == *param_2) break;
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
    if (piVar3 == piVar1) goto LAB_8256c6c8;
    lVar4 = (unsigned __int64)*(unsigned int *)(*piVar3 + 0x1f0) - 1;
    *(int *)(*piVar3 + 0x1f0) = (int)lVar4;
    if (lVar4 != 0) goto LAB_8256c6c8;
    fn_8256D470(&uStack_20,param_1 + 0x9c);
  }
  else {
    do {
      if (*piVar3 == *param_2) break;
      piVar3 = piVar3 + 2;
    } while (piVar3 != piVar1);
    if (piVar3 == piVar1) goto LAB_8256c648;
    lVar4 = (unsigned __int64)*(unsigned int *)(*piVar3 + 0x22c) - 1;
    *(int *)(*piVar3 + 0x22c) = (int)lVar4;
    if (lVar4 != 0) goto LAB_8256c6c8;
    fn_8256D470(&uStack_20,param_1 + 0x8c);
  }
  uStack_20 = 0;
  uStack_1c = 0;
  fn_82517978(&uStack_20,*param_2,param_2[1],0);
  fn_827D82B0(uVar2,&uStack_20);
LAB_8256c6c8:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

