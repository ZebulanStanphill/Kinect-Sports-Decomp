extern int fn_822ABA88();
extern int fn_822B17A8();
extern int fn_82396BE0();
extern int fn_82396CA0();
extern int fn_8239FF60();
extern unsigned int lbl_821922D0;


void fn_823A53F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  
  piVar5 = *(int **)**(unsigned int **)(*(int *)(param_1 + 8) + 8);
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),0);
  iVar4 = *(int *)(iVar4 + 0x74);
  if (iVar4 != 0) {
    uVar2 = *(unsigned int *)(*(int *)(iVar4 + 0x100) + 0x90c);
    uVar1 = (unsigned int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
    if (0x3c < uVar1) {
      fn_822B17A8(iVar4,0x25,0);
    }
    fVar3 = (float)uVar2;
    if (lbl_821922D0 < fVar3) {
      if (uVar2 < uVar1) {
        if (*(int *)(param_1 + 0x60) == 0) {
          return;
        }
        fn_82396CA0(*(unsigned int *)(param_1 + 8));
        fn_8239FF60(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2dc),0x10);
        uVar6 = 0;
      }
      else {
        if ((float)uVar1 < fVar3 - lbl_821922D0) {
          return;
        }
        if (*(int *)(param_1 + 0x60) != 0) {
          return;
        }
        fn_82396BE0(*(unsigned int *)(param_1 + 8));
        uVar6 = 1;
      }
      *(unsigned int *)(param_1 + 0x60) = uVar6;
    }
  }
  return;
}

