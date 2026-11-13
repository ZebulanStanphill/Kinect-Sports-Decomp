extern int fn_82A1BB18();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82EE8420();


void fn_82EE8F80(int param_1,int *param_2)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *apiStack_60 [4];
  
  apiStack_60[0] = (int *)0x0;
  if (param_2 != (int *)0x0) {
    lVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,apiStack_60);
    piVar1 = apiStack_60[0];
    if (-1 < lVar2) {
      if (apiStack_60[0] != (int *)0x0) {
        piVar6 = apiStack_60[0] + 0xe;
        if ((apiStack_60[0][0xe] != 0) || (*(int *)(param_1 + 0xb0) != 0)) {
          iVar5 = param_1 + 0x5c;
          fn_82E50CB8(iVar5);
          uVar3 = fn_82A1BB18();
          puVar7 = (unsigned int *)(param_1 + 0x54);
          puVar8 = (unsigned int *)(-(unsigned int)(puVar7 != *(unsigned int **)(param_1 + 0x54)) &
                           (unsigned int)*(unsigned int **)(param_1 + 0x54));
          if (puVar8 != (unsigned int *)0x0) {
            do {
              puVar9 = (unsigned int *)(-(unsigned int)(param_1 + 0x54U != *puVar8) & *puVar8);
              if ((puVar8 + -1 != (unsigned int *)0x0) && (puVar8[4] == uVar3)) {
                iVar4 = fn_82EE8420(puVar8 + -1,*piVar6,piVar1);
                if (iVar4 < 0) {
                  fn_82E50F10(iVar5);
                  goto LAB_82ee9100;
                }
              }
              puVar8 = puVar9;
            } while (puVar9 != (unsigned int *)0x0);
          }
          puVar8 = (unsigned int *)(-(unsigned int)(puVar7 != (unsigned int *)*puVar7) & *puVar7);
          if (puVar8 != (unsigned int *)0x0) {
LAB_82ee9090:
            puVar9 = (unsigned int *)(-(unsigned int)(param_1 + 0x54U != *puVar8) & *puVar8);
            if ((puVar8 + -1 == (unsigned int *)0x0) || (puVar8[4] == uVar3)) goto LAB_82ee90cc;
            iVar4 = fn_82EE8420(puVar8 + -1,*piVar6,piVar1);
            if (-1 < iVar4) goto LAB_82ee90cc;
            puVar8 = (unsigned int *)(-(unsigned int)(puVar7 != (unsigned int *)*puVar7) & *puVar7);
            while ((puVar8 != (unsigned int *)0x0 && (puVar8 != puVar9))) {
              uVar3 = *puVar8;
              fn_82EE8420(puVar8 + -1,0,0);
              puVar8 = (unsigned int *)(-(unsigned int)(param_1 + 0x54U != uVar3) & uVar3);
            }
            lVar2 = -0x3ff2c931;
            goto LAB_82ee90e0;
          }
LAB_82ee90d4:
          lVar2 = 0;
          *(int *)(param_1 + 0xb0) = *piVar6;
LAB_82ee90e0:
          fn_82E50F10(iVar5);
        }
        (**(int (***)())(*param_2 + 0x14))(param_2,lVar2);
LAB_82ee9100:
        (**(int (***)())(*piVar1 + 8))(piVar1);
      }
    }
  }
  return;
LAB_82ee90cc:
  puVar8 = puVar9;
  if (puVar9 == (unsigned int *)0x0) goto LAB_82ee90d4;
  goto LAB_82ee9090;
}

