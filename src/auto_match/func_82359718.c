typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82250A18();
extern int fn_8288B760();
extern int fn_8288D868();
extern int fn_8288F948();
extern int fn_828904D8();
extern int fn_828A12E8();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern unsigned int lbl_832975B0;


void fn_82359718(int *param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar5;
  char cVar7;
  char cVar8;
  int *piVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar9;
  
  bVar2 = true;
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    if (param_1[0x21] == 0) {
      cVar7 = fn_828AD740(param_1[1]);
      cVar8 = fn_828ACCE8(param_1[1]);
      if (cVar8 == '\0') {
        return;
      }
      if (cVar7 == '\0') {
        iVar5 = param_1[1];
        uVar3 = (**(int (***)())(*param_1 + 0xbc))(param_1);
        uVar4 = fn_828A12E8(iVar5);
        iVar5 = fn_8288F948(uVar4,uVar3);
        piVar6 = (int *)**(int **)(iVar5 + 4);
        if (piVar6 == *(int **)(iVar5 + 4)) {
          return;
        }
        piVar6 = (int *)piVar6[5];
        param_1[0x21] = (int)piVar6;
        piVar6[0x20] = (int)param_1;
        (**(int (***)())(*piVar6 + 0x40))();
      }
      else {
        piVar6 = (int *)(**(int (***)())(*param_1 + 0xb8))(param_1,param_1[1]);
        param_1[0x21] = (int)piVar6;
        (**(int (***)())(*piVar6 + 0x40))();
        fn_828904D8(piVar6);
      }
    }
    for (puVar9 = (unsigned int *)param_1[8]; puVar9 != (unsigned int *)param_1[9]; puVar9 = puVar9 + 1)
    {
      puVar1 = (unsigned int *)*puVar9;
      for (piVar6 = (int *)*puVar1; piVar6 != (int *)puVar1[1]; piVar6 = piVar6 + 1) {
        iVar5 = *piVar6;
        if ((*(int *)(iVar5 + 0x14) == 0) ||
           ((cVar7 = fn_8288B760(), cVar7 != '\0' &&
            (cVar7 = fn_8288D868(*(unsigned int *)(iVar5 + 0x14)), cVar7 == '\0')))) {
          bVar2 = false;
          break;
        }
        puVar1 = (unsigned int *)*puVar9;
      }
      if (!bVar2) {
        return;
      }
    }
    iVar5 = (**(int (***)())(*param_1 + 0x94))(param_1);
    if (iVar5 == 0) {
      return;
    }
  }
  param_1[0x22] = 1;
  return;
}

