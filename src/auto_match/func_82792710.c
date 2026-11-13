extern int fn_82791560();
extern int fn_82791758();
extern int fn_82791850();
extern int fn_827918F8();


unsigned int fn_82792710(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  
  uVar4 = *(unsigned int *)(param_1 + 4);
  if (uVar4 == 1) {
    return 1;
  }
  if ((uVar4 & 0x8000) == 0) {
    if (uVar4 == 2) {
      fn_82791758(param_1);
LAB_82792880:
      while ((*(int *)(param_1 + 4) == 7 || (*(int *)(param_1 + 4) == 8))) {
        fn_827918F8(param_1);
      }
LAB_8279276c:
      if (*(int *)(param_1 + 0x14) != 0x3e) goto LAB_8279278c;
      fn_82791560(param_1 + 8);
      uVar3 = 0x8002;
    }
    else if (uVar4 == 3) {
      uVar4 = *(unsigned int *)(param_1 + 8);
      uVar2 = *(unsigned int *)(param_1 + 0x10);
      while ((uVar4 < uVar2 && (*(int *)(param_1 + 0x14) != 0x3c))) {
        fn_82791560((unsigned int *)(param_1 + 8));
        uVar4 = *(unsigned int *)(param_1 + 8);
        uVar2 = *(unsigned int *)(param_1 + 0x10);
      }
      uVar3 = 0x8003;
    }
    else {
      if (uVar4 != 4) {
        if (6 < (int)uVar4) {
          if ((int)uVar4 < 9) goto LAB_82792880;
          if (uVar4 == 9) goto LAB_8279276c;
        }
        goto LAB_8279278c;
      }
      uVar4 = *(unsigned int *)(param_1 + 8);
      puVar5 = (unsigned int *)(param_1 + 8);
      uVar2 = *(unsigned int *)(param_1 + 0x10);
      while ((uVar4 < uVar2 && (*(int *)(param_1 + 0x14) != 0x3e))) {
        fn_82791560(puVar5);
        uVar4 = *puVar5;
        uVar2 = *(unsigned int *)(param_1 + 0x10);
      }
      if (*(int *)(param_1 + 0x14) == 0x3e) {
        fn_82791560(puVar5);
        uVar3 = 0x8004;
      }
      else {
        uVar3 = 1;
      }
    }
    *(unsigned int *)(param_1 + 4) = uVar3;
  }
LAB_8279278c:
  if (*(int *)(param_1 + 4) == 1) {
    return 1;
  }
  puVar5 = (unsigned int *)(param_1 + 8);
  iVar6 = 0;
  if (*(unsigned int *)(param_1 + 8) < *(unsigned int *)(param_1 + 0x10)) {
    do {
      if (iVar6 != 0) goto LAB_82792948;
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
LAB_8279291c:
        iVar6 = 1;
      }
      else if (iVar1 == 0x2f) {
        if ((*(int *)(param_1 + 4) != 9) && (*(int *)(param_1 + 4) != 6)) goto LAB_827927d4;
        fn_82791560(puVar5);
        if (*(int *)(param_1 + 0x14) != 0x3e) goto LAB_8279291c;
        fn_82791560(puVar5);
        iVar6 = 0x8005;
      }
      else if (iVar1 == 0x3c) {
        fn_82791560(puVar5);
        if (*(int *)(param_1 + 0x14) == 0x21) {
          fn_82791850(param_1);
        }
        else if (*(int *)(param_1 + 0x14) == 0x2f) {
          fn_82791560(puVar5);
          iVar6 = 4;
        }
        else {
          iVar6 = 2;
        }
      }
      else {
LAB_827927d4:
        iVar6 = 3;
      }
    } while (*puVar5 < *(unsigned int *)(param_1 + 0x10));
    if (iVar6 != 0) {
LAB_82792948:
      *(int *)(param_1 + 4) = iVar6;
      goto LAB_8279294c;
    }
  }
  *(unsigned int *)(param_1 + 4) = 0x8000;
LAB_8279294c:
  return *(unsigned int *)(param_1 + 4);
}

