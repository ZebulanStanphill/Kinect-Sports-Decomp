extern unsigned int *auStack_80;
extern int fn_8268CC00();
extern int fn_8269A240();
extern int fn_8270D570();
extern int fn_8270D668();


void fn_82699058(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int *piVar6;
  char cVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned char auStack_80 [32];
  
  uVar9 = (unsigned __int64)(unsigned int)param_1[1];
  uVar12 = 0;
  uVar10 = 0;
  piVar1 = *(int **)(*param_2 + 0xc);
  if (uVar9 != 0) {
    iVar11 = 0;
    do {
      piVar6 = *(int **)(iVar11 + *param_1);
      if ((((-2 < piVar6[5]) && (cVar8 = (**(int (***)())(*piVar6 + 8))(piVar6), cVar8 != '\0')) &&
          (cVar8 = (**(int (***)())(*piVar6 + 0xa0))(piVar6), cVar8 == '\0')) &&
         ((*(unsigned char *)((int)piVar6 + 0x66) & 2) == 0)) {
        if (((uVar12 & 0xffffffff) != 0) && ((int)uVar10 < piVar6[5])) {
          uVar12 = uVar12 - 1;
          fn_8270D668(param_2);
        }
        if (((unsigned int)param_2[0x15] < (unsigned int)param_2[0x14]) && (param_2[0x13] == 0)) {
          iVar2 = param_2[0x10];
          iVar3 = param_2[0x11];
          param_2[0x13] = 1;
          do {
            if ((unsigned int)param_2[0x14] < 0x41) {
              uVar4 = *(unsigned int *)(param_2[param_2[0x14] + 0x15] + 0x20);
              fn_8268CC00(auStack_80);
              fn_8269A240(uVar4,auStack_80);
              param_2[0x10] = (int)auStack_80;
              (**(int (***)())(*piVar1 + 0x6c))(piVar1,2);
              (**(int (***)())(*(int *)param_2[param_2[0x14] + 0x15] + 0x60))
                        ((int *)param_2[param_2[0x14] + 0x15],param_2);
              (**(int (***)())(*piVar1 + 0x70))(piVar1);
              param_2[param_2[0x14] + 0x15] = 0;
            }
            iVar5 = param_2[0x14];
            param_2[0x14] = iVar5 - 1U;
          } while ((unsigned int)param_2[0x15] < iVar5 - 1U);
          param_2[0x10] = iVar2;
          param_2[0x11] = iVar3;
          param_2[0x13] = param_2[0x13] + -1;
        }
        if ((*(short *)(piVar6 + 0x19) == 0) || (param_2[0x13] != 0)) {
          iVar2 = *piVar1;
          uVar7 = (**(int (***)())(*piVar6 + 0xc))(piVar6);
          (**(int (***)())(iVar2 + 0x2c))(piVar1,uVar7);
          (**(int (***)())(*piVar6 + 0x60))(piVar6,param_2);
          (**(int (***)())(*piVar1 + 0x30))(piVar1);
        }
        else {
          fn_8270D570(param_2,piVar6);
          uVar12 = uVar12 + 1;
          uVar10 = (unsigned int)*(unsigned short *)(piVar6 + 0x19);
        }
      }
      uVar9 = uVar9 - 1;
      iVar11 = iVar11 + 4;
    } while (uVar9 != 0);
    uVar9 = uVar12 & 0xffffffff;
    while (uVar9 != 0) {
      fn_8270D668(param_2);
      uVar12 = uVar12 - 1;
      uVar9 = uVar12;
    }
  }
  return;
}

