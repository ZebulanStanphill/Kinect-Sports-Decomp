extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82DF2948();


int fn_82DF2CD8(int param_1,unsigned int *param_2,int param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int auStack_30;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    iVar4 = fn_82CE5410();
    iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x60);
    *(unsigned short *)(iVar4 + 4) = 0x60;
    iVar4 = fn_82DF2948(iVar4,*(unsigned int *)*param_2);
    puVar7 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    uVar11 = puVar7[3];
    puVar3 = (unsigned int *)(iVar4 + 0x20U & 0xfffffff0);
    *puVar3 = *puVar7;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    piVar8 = (int *)(iVar4 + 0x54);
    puVar7 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    uVar11 = puVar7[3];
    puVar3 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
    *puVar3 = *puVar7;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    *(unsigned int *)(iVar4 + 0x40) = *(unsigned int *)(param_1 + 0x40);
    *(unsigned int *)(iVar4 + 0x44) = *(unsigned int *)(param_1 + 0x44);
    *(unsigned int *)(iVar4 + 0x48) = *(unsigned int *)(param_1 + 0x48);
    *(unsigned int *)(iVar4 + 0x4c) = *(unsigned int *)(param_1 + 0x4c);
    *(unsigned int *)(iVar4 + 0x10) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(iVar4 + 0x50) = *(unsigned int *)(param_1 + 0x50);
    iVar5 = fn_82CE5410();
    uVar2 = *(unsigned int *)(iVar4 + 0x5c) & 0x3fffffff;
    piVar1 = *(int **)(iVar5 + 0x10);
    if ((int)uVar2 < *(int *)(param_1 + 0x58)) {
      if ((*(unsigned int *)(iVar4 + 0x5c) & 0x80000000) == 0) {
        (**(int (***)())(*piVar1 + 0x10))(piVar1,*piVar8,uVar2,4);
      }
      auStack_30 = *(unsigned int *)(param_1 + 0x58);
      iVar5 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_30,4);
      *piVar8 = iVar5;
      *(unsigned int *)(iVar4 + 0x5c) = auStack_30;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x58);
    uVar6 = (unsigned __int64)uVar2;
    puVar7 = (unsigned int *)*piVar8;
    *(unsigned int *)(iVar4 + 0x58) = uVar2;
    if (0 < (int)uVar2) {
      iVar5 = *(int *)(param_1 + 0x54) - (int)puVar7;
      do {
        *puVar7 = *(unsigned int *)(iVar5 + (int)puVar7);
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

