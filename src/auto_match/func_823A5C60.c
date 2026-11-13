extern int fn_822ABA88();
extern int fn_822B17A8();
extern int fn_82359698();
extern int fn_82396BE0();
extern int fn_82396CA0();
extern int fn_82399BA0();
extern int fn_8239FF60();
extern int fn_823A5F00();
extern int fn_823A6040();
extern int fn_823A62E8();
extern int fn_823A69A8();


void fn_823A5C60(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  fn_823A5F00();
  fn_823A6040(param_1,param_2);
  fn_823A62E8(param_1,param_2);
  piVar6 = *(int **)**(unsigned int **)(*(int *)(param_2 + 8) + 8);
  iVar3 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6),0);
  iVar3 = *(int *)(iVar3 + 0x74);
  if (iVar3 != 0) {
    uVar2 = *(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x91c);
    uVar1 = (unsigned int)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20);
    if (0x96 < uVar1) {
      fn_822B17A8(iVar3,0x26,0);
    }
    if (10 < uVar2) {
      if (uVar2 < uVar1) {
        if (*(int *)(param_2 + 0x48) != 0) {
          fn_82396CA0(*(unsigned int *)(param_2 + 8));
          fn_8239FF60(*(unsigned int *)(*(int *)(param_2 + 8) + 0x2dc),0x10);
          *(unsigned int *)(param_2 + 0x48) = 0;
        }
      }
      else if ((uVar2 - 10 <= uVar1) && (*(int *)(param_2 + 0x48) == 0)) {
        fn_82396BE0(*(unsigned int *)(param_2 + 8));
        *(unsigned int *)(param_2 + 0x48) = 1;
      }
    }
  }
  iVar3 = fn_82399BA0(*(unsigned int *)(param_2 + 8));
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar3 + 0x1b4) == *(int *)(iVar3 + 0x1b8)) &&
       (*(int *)(iVar3 + 0x1c4) == *(int *)(iVar3 + 0x1c8))) {
      if (*(int *)(param_2 + 0x48) != 0) {
        fn_82396CA0();
        *(unsigned int *)(param_2 + 0x48) = 0;
      }
      iVar3 = *(int *)(param_2 + 8);
      if ((*(int *)(iVar3 + 0xa0) == 0) || (*(int *)(*(int *)(iVar3 + 0xa0) + 0x40) != 1)) {
        iVar5 = 0;
        piVar6 = *(int **)**(unsigned int **)(iVar3 + 8);
        iVar4 = fn_822ABA88(*(unsigned int *)(piVar6[4] * 4 + *piVar6),0);
        if (*(int *)(iVar4 + 0x74) != 0) {
          iVar5 = *(int *)(*(int *)(*(int *)(iVar4 + 0x74) + 0x100) + 0x91c);
        }
        if (iVar5 < (int)*(float *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x20)) {
          fn_8239FF60(*(unsigned int *)(iVar3 + 0x2dc),0x12);
          piVar6 = *(int **)**(unsigned int **)(*(int *)(param_2 + 8) + 8);
          *(unsigned int *)(*(int *)(piVar6[4] * 4 + *piVar6) + 0x1c) = 1;
        }
        else {
          fn_8239FF60(*(unsigned int *)(iVar3 + 0x2dc),0x11);
        }
      }
      fn_823A69A8(param_2);
      fn_82359698(*(unsigned int *)(param_2 + 8),8);
    }
  }
  return;
}

