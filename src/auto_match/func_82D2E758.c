extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D2E758(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  
  iVar3 = fn_82CE5410();
  piVar4 = (int *)(**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x10);
  if (piVar4 == (int *)0x0) {
    *(unsigned int *)(param_1 + 0x24c) = 0;
  }
  else {
    *piVar4 = 0;
    piVar4[2] = -0x80000000;
    piVar4[1] = 0;
    piVar4[3] = 0;
    iVar3 = fn_82CE5410();
    if ((piVar4[2] & 0x3fffffffU) < 0x407) {
      uVar5 = (piVar4[2] & 0x3fffffffU) << 1;
      if (uVar5 < 0x408) {
        uVar5 = 0x407;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),piVar4,uVar5,0xc);
    }
    lVar6 = (unsigned __int64)(unsigned int)piVar4[1] - 0x407;
    if (0 < lVar6) {
      puVar7 = (unsigned int *)(*piVar4 + 0x3050);
      do {
        iVar3 = fn_82CE5410();
        piVar1 = *(int **)(iVar3 + 0x10);
        puVar7[2] = 0;
        if ((puVar7[3] & 0x80000000) == 0) {
          (**(int (***)())(*piVar1 + 0x10))(piVar1,puVar7[1],puVar7[3] & 0x3fffffff,0xc);
        }
        puVar7[1] = 0;
        lVar6 = lVar6 + -1;
        puVar7 = puVar7 + 3;
        *puVar7 = 0x80000000;
      } while (lVar6 != 0);
    }
    iVar3 = 0x407 - piVar4[1];
    puVar7 = (unsigned int *)(piVar4[1] * 0xc + *piVar4);
    if (0 < iVar3) {
      do {
        if (puVar7 != (unsigned int *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
        }
        puVar7 = puVar7 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    piVar4[1] = 0x407;
    do {
      iVar2 = iVar3 + *piVar4;
      iVar3 = iVar3 + 0xc;
      *(unsigned int *)(iVar2 + 4) = 0;
    } while (iVar3 < 0x3054);
    *(int **)(param_1 + 0x24c) = piVar4;
  }
  return;
}

