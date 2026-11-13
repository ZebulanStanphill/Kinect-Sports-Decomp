typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_826998A8();
extern int fn_826A7288();
extern int fn_826AE1D8();


void fn_826C80C8(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar4;
  char *pcVar5;
  __int64 lVar3;
  int *piVar6;
  char cVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  double dVar10;
  
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    piVar9 = *(int **)(*(int *)(param_1 + 0x18) + 0x74);
  }
  else {
    iVar4 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if ((iVar4 < 2) || (bVar2 = true, 5 < iVar4)) {
      bVar2 = false;
    }
    if (!bVar2) {
      return;
    }
    piVar9 = (int *)(*(int *)(param_1 + 8) + -0x68);
    if (*(int *)(param_1 + 8) == 0) {
      piVar9 = (int *)0x0;
    }
  }
  if ((piVar9 != (int *)0x0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar4 = piVar9[8];
    pcVar5 = (char *)fn_826957D0(param_1,0);
    piVar6 = (int *)0x0;
    lVar3 = (**(int (***)())(piVar9[0x1a] + 8))(piVar9 + 0x1a);
    if ((*pcVar5 == '\x03') || (bVar2 = false, *pcVar5 == '\x04')) {
      bVar2 = true;
    }
    if (bVar2) {
      dVar10 = (double)fn_826972E0(pcVar5,*(unsigned int *)(param_1 + 0x18));
      uVar8 = (unsigned __int64)(unsigned int)(int)dVar10 + 0x4000;
      if (0x7efffffd < (int)uVar8) {
        return;
      }
    }
    else {
      if ((-(unsigned int)(lVar3 == 2) & (unsigned int)piVar9) == 0) {
        piVar6 = (int *)fn_826AE1D8(*(int *)(param_1 + 0x18),pcVar5);
      }
      else {
        uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x74);
        fn_826A7288();
        piVar6 = (int *)fn_826AE1D8(*(unsigned int *)(param_1 + 0x18),pcVar5);
        fn_826A7288(*(unsigned int *)(param_1 + 0x18),uVar1);
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
      if (piVar6 == piVar9) {
        return;
      }
      if (iVar4 != piVar6[8]) {
        return;
      }
      uVar8 = (unsigned __int64)(unsigned int)piVar6[5];
    }
    if ((((-1 < piVar9[5]) && ((**(int (***)())(*piVar9 + 0x14))(piVar9,0), iVar4 != 0)) &&
        (cVar7 = fn_826998A8(iVar4 + 0xa8,piVar9[5],uVar8), cVar7 != '\0')) &&
       (*(unsigned int *)(*(int *)(iVar4 + 0xa0) + 0xb00) =
             *(unsigned int *)(*(int *)(iVar4 + 0xa0) + 0xb00) | 0x400, piVar6 != (int *)0x0)) {
      (**(int (***)())(*piVar6 + 0x14))(piVar6,0);
    }
  }
  return;
}

