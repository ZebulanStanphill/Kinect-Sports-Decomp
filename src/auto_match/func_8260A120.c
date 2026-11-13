extern int fn_8260A488();
extern int fn_8260A568();
extern int fn_8260A648();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82D93C00();
extern int fn_82D96728();
extern int fn_82D96B50();
extern int fn_82D972A0();
extern int fn_82D97CB8();
extern int fn_82D98230();
extern int fn_82D98360();


int fn_8260A120(unsigned __int64 param_1,int *param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  __int64 lVar8;
  int *piVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  uVar3 = (**(int (***)())(*param_2 + 0x20))(param_2);
  if (uVar3 == 0) {
    iVar4 = fn_82CE5410();
    iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x50);
    *(unsigned short *)(iVar4 + 4) = 0x50;
    iVar4 = fn_82D96728();
  }
  else {
    if (uVar3 == 1) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xb0);
      *(unsigned short *)(iVar4 + 4) = 0xb0;
      iVar4 = fn_82D96B50();
      *(unsigned short *)(iVar4 + 0x10) = *(unsigned short *)(param_2 + 4);
      puVar10 = (unsigned int *)((int)param_2 + in_r0 + 0x20 & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(in_r0 + iVar4 + 0x20 & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0x10) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x40U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0x14) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x50U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((int)param_2 + in_r0 + 0x60 & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(in_r0 + iVar4 + 0x60 & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0x1c) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x70U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0x20) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x80U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar10 = (unsigned int *)((unsigned int)(param_2 + 0x24) & 0xfffffff0);
      uVar6 = puVar10[1];
      uVar11 = puVar10[2];
      uVar12 = puVar10[3];
      puVar1 = (unsigned int *)(iVar4 + 0x90U & 0xfffffff0);
      *puVar1 = *puVar10;
      puVar1[1] = uVar6;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      *(unsigned short *)(iVar4 + 0xa0) = *(unsigned short *)(param_2 + 0x28);
      *(unsigned short *)(iVar4 + 0xa2) = *(unsigned short *)((int)param_2 + 0xa2);
      *(int *)(iVar4 + 0xa4) = param_2[0x29];
      *(int *)(iVar4 + 0xa8) = param_2[0x2a];
      goto LAB_8260a478;
    }
    if (uVar3 < 3) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xe0);
      *(unsigned short *)(iVar4 + 4) = 0xe0;
      iVar4 = fn_82D93C00();
      fn_8260A488(iVar4 + 0x10,param_2 + 4);
      puVar10 = (unsigned int *)(iVar4 + 0xb0);
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = *(int **)(iVar4 + 0xb0);
LAB_8260a33c:
      if (piVar9 == (int *)0x0) {
        return iVar4;
      }
      uVar6 = (**(int (***)())(*piVar9 + 0xc))();
      *puVar10 = uVar6;
      return iVar4;
    }
    if (uVar3 == 6) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xd0);
      *(unsigned short *)(iVar4 + 4) = 0xd0;
      iVar4 = fn_82D972A0();
      fn_8260A568(iVar4 + 0x10,param_2 + 4);
      puVar10 = (unsigned int *)(iVar4 + 0xac);
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = *(int **)(iVar4 + 0xac);
      goto LAB_8260a33c;
    }
    if (uVar3 == 7) {
      iVar4 = fn_82CE5410();
      iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x140);
      *(unsigned short *)(iVar4 + 4) = 0x140;
      iVar4 = fn_82D97CB8();
      fn_8260A648(iVar4 + 0x10,param_2 + 4);
      piVar7 = (int *)(iVar4 + 0xe0);
      lVar8 = 3;
      *(int *)(iVar4 + 8) = param_2[2];
      piVar9 = piVar7;
      do {
        if ((int *)*piVar9 != (int *)0x0) {
          iVar5 = (**(int (***)())(*(int *)*piVar9 + 0xc))();
          *piVar7 = iVar5;
        }
        lVar8 = lVar8 + -1;
        piVar9 = piVar9 + 1;
        piVar7 = piVar7 + 1;
      } while (lVar8 != 0);
      return iVar4;
    }
    if (uVar3 != 8) {
      if (uVar3 != 0xc) {
        return 0;
      }
      uVar2 = fn_8260A120(param_1,param_2[6]);
      iVar4 = fn_82CE5410();
      iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x28);
      *(unsigned short *)(iVar4 + 4) = 0x28;
      iVar4 = fn_82D98360(iVar4,uVar2);
      fn_82CE4118(uVar2);
      *(int *)(iVar4 + 0x20) = param_2[8];
      *(unsigned char *)(iVar4 + 0x24) = *(unsigned char *)(param_2 + 9);
      *(unsigned char *)(iVar4 + 0x25) = *(unsigned char *)((int)param_2 + 0x25);
      *(int *)(iVar4 + 8) = param_2[2];
      return iVar4;
    }
    iVar4 = fn_82CE5410();
    iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x50);
    *(unsigned short *)(iVar4 + 4) = 0x50;
    iVar4 = fn_82D98230();
  }
  *(unsigned short *)(iVar4 + 0x10) = *(unsigned short *)(param_2 + 4);
  puVar10 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  uVar6 = puVar10[1];
  uVar11 = puVar10[2];
  uVar12 = puVar10[3];
  puVar1 = (unsigned int *)(iVar4 + 0x20U & 0xfffffff0);
  *puVar1 = *puVar10;
  puVar1[1] = uVar6;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  puVar10 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  uVar6 = puVar10[1];
  uVar11 = puVar10[2];
  uVar12 = puVar10[3];
  puVar1 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
  *puVar1 = *puVar10;
  puVar1[1] = uVar6;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  *(int *)(iVar4 + 0x40) = param_2[0x10];
  *(int *)(iVar4 + 0x44) = param_2[0x11];
LAB_8260a478:
  *(int *)(iVar4 + 8) = param_2[2];
  return iVar4;
}

