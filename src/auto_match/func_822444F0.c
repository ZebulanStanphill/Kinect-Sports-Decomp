typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822446D8();
extern int fn_822449A8();
extern int fn_82244A90();
extern int fn_82244B58();
extern int fn_82247000();
extern int fn_822AE460();
extern int fn_82381BC0();
extern int fn_8288B760();
extern int fn_8288D868();


void fn_822444F0(int *param_1)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar7;
  unsigned int uVar4;
  unsigned char uVar8;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar9;
  unsigned int *apuStack_30 [12];
  
  cVar7 = fn_822446D8();
  if (cVar7 == '\0') {
    return;
  }
  cVar7 = fn_8288B760(param_1);
  if ((cVar7 != '\0') && (cVar7 = fn_8288D868(param_1), cVar7 == '\0')) {
    return;
  }
  uVar4 = fn_82247000(param_1);
  if (uVar4 == 0) {
    bVar1 = *(char *)((int)param_1 + 0x95) == '\0';
LAB_822446b4:
    if (bVar1) goto LAB_822446c4;
LAB_822446b8:
    uVar9 = 0;
  }
  else {
    if (uVar4 == 1) {
      if (*(char *)((int)param_1 + 0x96) == '\0') {
        uVar8 = fn_82244B58();
        *(unsigned char *)((int)param_1 + 0x96) = uVar8;
      }
      bVar1 = false;
      cVar7 = *(char *)(param_1[4] + 0x290);
      if (param_1[0x20] != 0) {
        iVar6 = *(int *)(param_1[0x20] + 0x1c);
        iVar5 = 1;
        if (iVar6 != 0) {
          iVar5 = fn_822AE460(iVar6);
        }
        bVar1 = iVar5 == 1;
      }
      if ((*(char *)((int)param_1 + 0x96) == '\0') || (cVar7 == '\0')) goto LAB_822446c4;
      bVar1 = !bVar1;
      goto LAB_822446b4;
    }
    if (2 < uVar4) {
      if (uVar4 == 3) {
        cVar7 = fn_8288B760(param_1);
        if (cVar7 != '\0') {
          if (*(char *)((int)param_1 + 0x97) == '\0') goto LAB_822446c4;
          cVar7 = fn_82244A90(param_1,3);
          bVar1 = cVar7 == '\0';
          goto LAB_82244584;
        }
LAB_82244588:
        uVar9 = 1;
        goto LAB_822446c0;
      }
      if (4 < uVar4) goto LAB_822446c4;
      goto LAB_822446b8;
    }
    if (*(char *)(param_1 + 0x26) == '\0') goto LAB_822446c4;
    cVar7 = fn_8288B760(param_1);
    if (cVar7 != '\0') {
      cVar7 = fn_82244A90(param_1,2);
      if (cVar7 == '\0') goto LAB_822446c4;
      bVar1 = true;
      puVar2 = *(unsigned int **)(param_1[4] + 0x220);
      apuStack_30[0] = (unsigned int *)*puVar2;
      while (puVar3 = apuStack_30[0], apuStack_30[0] != puVar2) {
        iVar6 = (**(int (***)())(*param_1 + 8))(param_1);
        cVar7 = (**(int (***)())(*(int *)(iVar6 + 0x150) + 0x38))((int *)(iVar6 + 0x150),puVar3[4]);
        if (cVar7 == '\0') {
          bVar1 = false;
          break;
        }
        fn_82381BC0(apuStack_30);
        puVar2 = *(unsigned int **)(param_1[4] + 0x220);
      }
      bVar1 = !bVar1;
LAB_82244584:
      if (bVar1) goto LAB_822446c4;
      goto LAB_82244588;
    }
    uVar9 = 1;
  }
LAB_822446c0:
  fn_822449A8(param_1,uVar9);
LAB_822446c4:
  iVar6 = fn_82247000(param_1);
  param_1[0x24] = iVar6;
  return;
}

