typedef unsigned char bool;


unsigned short * fn_82A26920(int param_1,int param_2,unsigned int *param_3,int param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int *piVar5;
  int iVar6;
  unsigned short uVar7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  unsigned short * apuStack_50;
  
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar5 = *(int **)(param_2 + 0x38);
    piVar10 = (int *)(param_2 + 0x38);
    piVar11 = (int *)0x0;
    do {
      piVar12 = piVar5;
      if ((*param_3 <= (unsigned int)piVar12[2]) && ((param_4 == 0 || (piVar12[1] == param_4)))) {
        apuStack_50 = (unsigned short *)piVar12[1];
        if (*(int (***)())(param_1 + 0x584) == (int (**)())0x0) {
          iVar6 = NtAllocateVirtualMemory
                            (&apuStack_50,param_3,0x60001000,4,*(unsigned int *)(param_1 + 0x590));
        }
        else {
          iVar6 = (**(int (***)())(param_1 + 0x584))(param_1,&apuStack_50,param_3);
        }
        if (iVar6 < 0) {
          return (unsigned short *)0x0;
        }
        *(unsigned int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) - (unsigned int)*(unsigned short *)param_3;
        if (*(int *)(param_2 + 0x1c) == piVar12[2]) {
          *(unsigned int *)(param_2 + 0x1c) = 0;
        }
        puVar9 = *(unsigned short **)(param_2 + 0x40);
        if (((*(unsigned char *)((int)puVar9 + 5) & 0x10) != 0) &&
           (puVar9 + (unsigned int)*puVar9 * 8 == (unsigned short *)piVar12[1])) goto LAB_82a26aa0;
        if (piVar11 == (int *)0x0) {
          puVar9 = *(unsigned short **)(param_2 + 0x28);
        }
        else {
          puVar9 = (unsigned short *)(piVar11[2] + piVar11[1]);
        }
        if ((*(unsigned char *)((int)puVar9 + 5) & 0x10) != 0) goto LAB_82a26aa0;
        puVar8 = puVar9;
        goto LAB_82a26a60;
      }
      piVar5 = (int *)*piVar12;
      piVar10 = piVar12;
      piVar11 = piVar12;
    } while ((int *)*piVar12 != (int *)0x0);
  }
  return (unsigned short *)0x0;
LAB_82a26a60:
  puVar9 = puVar8 + (unsigned int)*puVar8 * 8;
  if ((*(unsigned short **)(param_2 + 0x2c) <= puVar9) || (*puVar9 == 0)) {
    bVar1 = puVar9 != apuStack_50;
    puVar9 = puVar8;
    if (bVar1) {
      return (unsigned short *)0x0;
    }
    goto LAB_82a26aa0;
  }
  puVar8 = puVar9;
  if ((*(unsigned char *)((int)puVar9 + 5) & 0x10) != 0) {
LAB_82a26aa0:
    *(unsigned char *)((int)puVar9 + 5) = *(unsigned char *)((int)puVar9 + 5) & 0xef;
    uVar2 = piVar12[2];
    piVar12[1] = piVar12[1] + *param_3;
    uVar3 = *param_3;
    piVar12[2] = (int)((unsigned __int64)uVar2 - (unsigned __int64)uVar3);
    if ((unsigned __int64)uVar2 - (unsigned __int64)uVar3 == 0) {
      if (piVar12[1] == *(int *)(param_2 + 0x2c)) {
        *(unsigned char *)((int)apuStack_50 + 5) = 0x10;
        *(unsigned short **)(param_2 + 0x40) = apuStack_50;
      }
      else {
        *(unsigned char *)((int)apuStack_50 + 5) = 0;
        *(unsigned int *)(param_2 + 0x40) = *(unsigned int *)(param_2 + 0x28);
      }
      *piVar10 = *piVar12;
      *piVar12 = *(int *)(*(int *)(param_2 + 0x18) + 0x4c);
      *(int **)(*(int *)(param_2 + 0x18) + 0x4c) = piVar12;
      piVar12[1] = 0;
      piVar12[2] = 0;
      *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + -1;
    }
    else {
      *(unsigned char *)((int)apuStack_50 + 5) = 0x10;
      *(unsigned short **)(param_2 + 0x40) = apuStack_50;
    }
    *(unsigned char *)(apuStack_50 + 2) = *(unsigned char *)(puVar9 + 2);
    uVar2 = *param_3;
    uVar7 = (unsigned short)(uVar2 >> 4);
    *apuStack_50 = uVar7;
    apuStack_50[1] = *puVar9;
    if ((*(unsigned char *)((int)apuStack_50 + 5) & 0x10) == 0) {
      apuStack_50[(uVar2 >> 4 & 0xffff) * 8 + 1] = uVar7;
    }
    if (*(int *)(param_2 + 0x1c) == 0) {
      for (puVar4 = *(unsigned int **)(param_2 + 0x38); puVar4 != (unsigned int *)0x0;
          puVar4 = (unsigned int *)*puVar4) {
        if (*(unsigned int *)(param_2 + 0x1c) <= (unsigned int)puVar4[2]) {
          *(unsigned int *)(param_2 + 0x1c) = puVar4[2];
        }
      }
    }
    return apuStack_50;
  }
  goto LAB_82a26a60;
}

