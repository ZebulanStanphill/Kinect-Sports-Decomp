void fn_82CECF28(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  
  iVar2 = (int)param_4;
  (**(int (***)())(**(int **)(param_1 + 8) + 0x10))
            (*(int **)(param_1 + 8),param_2,(__int64)param_3 * (__int64)iVar2);
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (param_3 == 2) {
      if (0 < iVar2) {
        puVar3 = (unsigned char *)(param_2 + -1);
        do {
          uVar1 = puVar3[1];
          puVar3[1] = puVar3[2];
          puVar3 = puVar3 + 2;
          *puVar3 = uVar1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if (param_3 == 4) {
      if (0 < iVar2) {
        puVar3 = (unsigned char *)(param_2 + -2);
        do {
          uVar1 = puVar3[2];
          puVar3[2] = puVar3[5];
          puVar3[5] = uVar1;
          uVar1 = puVar3[3];
          puVar3[3] = puVar3[4];
          puVar3 = puVar3 + 4;
          *puVar3 = uVar1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
    else if ((param_3 == 8) && (0 < iVar2)) {
      puVar3 = (unsigned char *)(param_2 + -4);
      do {
        uVar1 = puVar3[4];
        puVar3[4] = puVar3[0xb];
        puVar3[0xb] = uVar1;
        uVar1 = puVar3[5];
        puVar3[5] = puVar3[10];
        puVar3[10] = uVar1;
        uVar1 = puVar3[6];
        puVar3[6] = puVar3[9];
        puVar3[9] = uVar1;
        uVar1 = puVar3[7];
        puVar3[7] = puVar3[8];
        puVar3 = puVar3 + 8;
        *puVar3 = uVar1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

