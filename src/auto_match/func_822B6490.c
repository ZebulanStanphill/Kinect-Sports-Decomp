typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82248B90();
extern int fn_8224E928();
extern int fn_8224ED20();
extern int fn_82250A18();
extern int fn_8288B760();
extern int fn_8288B760();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_822B6490(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar5;
  char cVar8;
  int *piVar6;
  unsigned int uVar7;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int * apuStack_50;
  unsigned char auStack_40 [4];
  unsigned int *puStack_3c;

  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) == '\0') {
    return;
  }
  if (param_1[0x5a] != 0) {
    cVar8 = fn_8288B760();
    if (cVar8 != '\0') {
      return;
    }
    (**(int (***)())(*(int *)param_1[0x5a] + 0x40))();
    return;
  }
  cVar8 = fn_828ACCE8(param_1[4]);
  if (cVar8 == '\0') {
    return;
  }
  bVar2 = false;
  cVar8 = fn_828AD740(param_1[4]);
  bVar1 = *(int *)(*(int *)(((int *)param_1[7])[4] * 4 + *(int *)param_1[7]) + 0x10) == 1;
  if (cVar8 == '\0') {
    if (!bVar1) goto LAB_822b6524;
  }
  else if (bVar1) goto LAB_822b6524;
  bVar2 = true;
LAB_822b6524:
  if (bVar2) {
    piVar6 = (int *)(**(int (***)())(*param_1 + 0x1c))(param_1,param_1[4]);
    if (piVar6 != (int *)0x0) {
      if (param_1[0x5a] != 0) {
        *(unsigned int *)(param_1[0x5a] + 0xbc) = 0;
      }
      param_1[0x5a] = (int)piVar6;
      piVar6[0x2f] = (int)param_1;
      uVar7 = fn_8288B760(param_1[0x5a]);
      param_1[0x5b] = uVar7 & 0xff;
      (**(int (***)())(*piVar6 + 0x44))(piVar6);
      fn_828904D8(piVar6);
    }
  }
  else {
    iVar5 = param_1[4];
    uVar3 = (**(int (***)())(*param_1 + 0x20))(param_1);
    uVar4 = fn_828A12E8(iVar5);
    uVar3 = fn_8288F948(uVar4,uVar3);
    fn_8224E928(auStack_40,uVar3);
    apuStack_50 = (unsigned int *)*puStack_3c;
    while (apuStack_50 != puStack_3c) {
      piVar6 = (int *)apuStack_50[5];
      iVar5 = (**(int (***)())(*piVar6 + 8))(piVar6);
      iVar5 = (**(int (***)())(*(int *)(iVar5 + 0x48) + 0x3c))();
      if (iVar5 == param_1[0xb]) {
        iVar5 = (**(int (***)())(*piVar6 + 8))(piVar6);
        iVar5 = (**(int (***)())(*(int *)(iVar5 + 0x9c) + 0x3c))();
        if (iVar5 == param_1[10]) {
          if (param_1[0x5a] != 0) {
            *(unsigned int *)(param_1[0x5a] + 0xbc) = 0;
          }
          param_1[0x5a] = (int)piVar6;
          piVar6[0x2f] = (int)param_1;
          uVar7 = fn_8288B760(param_1[0x5a]);
          param_1[0x5b] = uVar7 & 0xff;
          (**(int (***)())(*piVar6 + 0x44))(piVar6);
          break;
        }
      }
      fn_82248B90(&apuStack_50);
    }
    fn_8224ED20(&apuStack_50,auStack_40,*puStack_3c);
    fn_8288B760(puStack_3c);
  }
  return;
}
