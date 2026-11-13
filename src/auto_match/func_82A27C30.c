extern int fn_82A26628();
extern int fn_82A26800();
extern int fn_82A27010();
extern unsigned int uStack_80;


void fn_82A27C30(int param_1,unsigned short *param_2,int param_3)

{
  unsigned char uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int *piVar8;
  unsigned short *puVar9;
  unsigned short *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uStack_80;
  unsigned short *apuStack_7c [31];
  
  if (*(int *)(param_1 + 0x584) == 0) {
    apuStack_7c[0] = (unsigned short *)((int)param_2 + 0xffffU & 0xffff0000);
    puVar10 = (unsigned short *)0x0;
    uVar11 = (int)apuStack_7c[0] - (int)param_2 >> 4 & 0xffff;
    iVar2 = *(int *)((*(unsigned char *)(param_2 + 2) + 0x18) * 4 + param_1);
    if (uVar11 == 1) {
      apuStack_7c[0] = apuStack_7c[0] + 0x8000;
      uVar11 = 0x1001;
    }
    else if ((param_2[1] != 0) && (apuStack_7c[0] == param_2)) {
      puVar10 = param_2 + (unsigned int)param_2[1] * -8;
    }
    puVar9 = (unsigned short *)0x0;
    puVar6 = param_2 + param_3 * 8;
    puVar7 = (unsigned short *)((unsigned int)puVar6 & 0xffff0000);
    uVar3 = (int)puVar6 - (int)puVar7 >> 4;
    uVar12 = uVar3 & 0xffff;
    if (uVar12 == 1) {
      uVar12 = 0x1001;
      puVar7 = puVar7 + -0x8000;
    }
    else if (((uVar3 & 0xffff) == 0) && ((*(unsigned char *)((int)param_2 + 5) & 0x10) == 0)) {
      puVar9 = puVar6;
    }
    puVar6 = puVar6 + uVar12 * -8;
    uStack_80 = (int)puVar7 - (int)apuStack_7c[0];
    if (puVar7 <= apuStack_7c[0]) {
      uStack_80 = 0;
    }
    if ((uStack_80 != 0) &&
       (puVar4 = (unsigned int *)fn_82A26628(iVar2), puVar4 != (unsigned int *)0x0)) {
      iVar5 = NtFreeVirtualMemory(apuStack_7c,&uStack_80,0x4000,*(unsigned int *)(param_1 + 0x590));
      *puVar4 = *(unsigned int *)(*(int *)(iVar2 + 0x18) + 0x4c);
      *(unsigned int **)(*(int *)(iVar2 + 0x18) + 0x4c) = puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      if (-1 < iVar5) {
        fn_82A26800(iVar2,apuStack_7c[0],uStack_80);
        *(unsigned int *)(iVar2 + 0x30) = (uStack_80 >> 0x10) + *(int *)(iVar2 + 0x30);
        if (uVar11 == 0) {
          if (puVar10 == (unsigned short *)0x0) {
            if ((apuStack_7c[0] <= *(unsigned short **)(iVar2 + 0x40)) &&
               (*(unsigned short **)(iVar2 + 0x40) < (unsigned short *)(uStack_80 + (int)apuStack_7c[0]))) {
              *(unsigned int *)(iVar2 + 0x40) = *(unsigned int *)(iVar2 + 0x28);
            }
          }
          else {
            *(unsigned char *)((int)puVar10 + 5) = *(unsigned char *)((int)puVar10 + 5) | 0x10;
            *(unsigned short **)(iVar2 + 0x40) = puVar10;
          }
        }
        else {
          *param_2 = (unsigned short)uVar11;
          *(unsigned char *)((int)param_2 + 5) = 0x10;
          *(unsigned int *)(param_1 + 0x30) = uVar11 + *(int *)(param_1 + 0x30);
          *(unsigned short **)(iVar2 + 0x40) = param_2;
          *(unsigned char *)((int)param_2 + 5) = *(unsigned char *)((int)param_2 + 5) & 0xf8;
          if (uVar11 < 0x80) {
            piVar8 = (int *)((uVar11 + 0x30) * 8 + param_1);
            if ((int *)*piVar8 == piVar8) {
              iVar5 = ((*param_2 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar5 + param_1) = 1 << (*param_2 & 0x1f) | *(unsigned int *)(iVar5 + param_1);
            }
          }
          else {
            for (piVar8 = *(int **)(param_1 + 0x180);
                ((int *)(param_1 + 0x180) != piVar8 && (*(unsigned short *)(piVar8 + -2) < uVar11));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar4 = (unsigned int *)piVar8[1];
          *(int **)(param_2 + 4) = piVar8;
          *(unsigned int **)(param_2 + 6) = puVar4;
          *puVar4 = param_2 + 4;
          piVar8[1] = (int)(param_2 + 4);
        }
        if (uVar12 != 0) {
          puVar6[1] = 0;
          uVar1 = *(unsigned char *)(iVar2 + 4);
          *(unsigned char *)((int)puVar6 + 5) = 0;
          *(unsigned char *)(puVar6 + 2) = uVar1;
          *puVar6 = (unsigned short)uVar12;
          puVar6[uVar12 * 8 + 1] = (unsigned short)uVar12;
          *(unsigned char *)((int)puVar6 + 5) = *(unsigned char *)((int)puVar6 + 5) & 0xf8;
          if (uVar12 < 0x80) {
            piVar8 = (int *)((uVar12 + 0x30) * 8 + param_1);
            if ((int *)*piVar8 == piVar8) {
              iVar2 = ((*puVar6 >> 5) + 0x58) * 4;
              *(unsigned int *)(iVar2 + param_1) = 1 << (*puVar6 & 0x1f) | *(unsigned int *)(iVar2 + param_1);
            }
          }
          else {
            for (piVar8 = *(int **)(param_1 + 0x180);
                ((int *)(param_1 + 0x180) != piVar8 && (*(unsigned short *)(piVar8 + -2) < uVar12));
                piVar8 = (int *)*piVar8) {
            }
          }
          puVar4 = (unsigned int *)piVar8[1];
          *(int **)(puVar6 + 4) = piVar8;
          *(unsigned int **)(puVar6 + 6) = puVar4;
          *puVar4 = puVar6 + 4;
          piVar8[1] = (int)(puVar6 + 4);
          *(unsigned int *)(param_1 + 0x30) = uVar12 + *(int *)(param_1 + 0x30);
          return;
        }
        if (puVar9 == (unsigned short *)0x0) {
          return;
        }
        puVar9[1] = 0;
        return;
      }
    }
  }
  fn_82A27010(param_1,param_2,param_3);
  return;
}

