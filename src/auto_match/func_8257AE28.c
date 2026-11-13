extern int fn_82230300();
extern int fn_8257AC80();
extern int fn_8257B0A8();
extern int fn_82587028();
extern int fn_8260D428();
extern int fn_8265CA20();


int * fn_8257AE28(int *param_1,int param_2,unsigned int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned char uVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  
  iVar2 = fn_8257AC80(param_2,param_3);
  iVar2 = iVar2 * 8;
  puVar10 = *(unsigned int **)(param_2 + 4);
  piVar8 = (int *)(param_2 + 4);
  piVar6 = (int *)(iVar2 + *(int *)(param_2 + 0x10));
  puVar5 = (unsigned int *)*piVar6;
  if (puVar5 != puVar10) {
    puVar10 = *(unsigned int **)piVar6[1];
  }
  if (puVar10 != puVar5) {
    do {
      puVar10 = (unsigned int *)puVar10[1];
      puVar9 = puVar10 + 2;
      puVar5 = puVar9;
      if (0xf < (unsigned int)puVar10[7]) {
        puVar5 = (unsigned int *)*puVar9;
      }
      iVar3 = fn_8260D428(param_3,0,param_3[4],puVar5,puVar10[6]);
      if (-1 < iVar3) {
        puVar5 = param_3 + 4;
        if (0xf < (unsigned int)param_3[5]) {
          param_3 = (unsigned int *)*param_3;
        }
        iVar3 = fn_8260D428(puVar9,0,puVar10[6],param_3,*puVar5);
        if (-1 < iVar3) {
          if (param_4 != (int *)*piVar8) {
            *(int *)param_4[1] = *param_4;
            *(int *)(*param_4 + 4) = param_4[1];
            fn_82230300(param_4 + 9,1,0);
            fn_82230300(param_4 + 2,1,0);
            fn_8265CA20(param_4);
            *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
          }
          uVar7 = 0;
          *param_1 = (int)puVar10;
          goto LAB_8257b098;
        }
        puVar10 = (unsigned int *)*puVar10;
        break;
      }
    } while (puVar10 != *(unsigned int **)(iVar2 + *(int *)(param_2 + 0x10)));
  }
  puVar5 = (unsigned int *)*param_4;
  if (puVar10 != puVar5) {
    *(unsigned int **)param_4[1] = puVar5;
    *(unsigned int **)puVar5[1] = puVar10;
    *(int **)puVar10[1] = param_4;
    iVar3 = puVar10[1];
    puVar10[1] = puVar5[1];
    puVar5[1] = param_4[1];
    param_4[1] = iVar3;
  }
  piVar6 = (int *)(iVar2 + *(int *)(param_2 + 0x10));
  if ((unsigned int *)*piVar6 == (unsigned int *)*piVar8) {
    *piVar6 = (int)param_4;
    *(int **)(iVar2 + *(int *)(param_2 + 0x10) + 4) = param_4;
  }
  else if ((unsigned int *)*piVar6 == puVar10) {
    *piVar6 = (int)param_4;
  }
  else {
    piVar1 = *(int **)piVar6[1];
    piVar6[1] = (int)piVar1;
    if (piVar1 != param_4) {
      iVar2 = iVar2 + *(int *)(param_2 + 0x10);
      *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(*(int *)(iVar2 + 4) + 4);
    }
  }
  uVar4 = *(unsigned int *)(param_2 + 0x24);
  if (*(float *)(param_2 + 0x28) < (float)((double)*(unsigned int *)(param_2 + 8) / (double)uVar4)) {
    iVar2 = 0;
    do {
      if (0x1ffffffe < uVar4) break;
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 << 1;
    } while (iVar2 < 3);
    fn_82587028(param_2);
    fn_8257B0A8(param_2,*piVar8);
  }
  uVar7 = 1;
  *param_1 = (int)param_4;
LAB_8257b098:
  *(unsigned char *)(param_1 + 1) = uVar7;
  return param_1;
}

