extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_822AA718();


/* WARNING: Removing unreachable block (ram,0x823d94c4) */
/* WARNING: Removing unreachable block (ram,0x823d94e8) */
/* WARNING: Removing unreachable block (ram,0x823d94f4) */
/* WARNING: Removing unreachable block (ram,0x823d9504) */

unsigned __int64 fn_823D9428(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float *pfVar6;
  unsigned int uVar7;
  int in_r0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  unsigned int uVar12;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [32];
  
  piVar3 = *(int **)(*(int *)(param_2 + 0x2c) * 4 + *(int *)(param_1 + 0x20));
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    uVar1 = *(unsigned int *)(param_2 + 0x1c);
    puVar4 = (unsigned int *)(param_2 + 0x80U & 0xfffffff0);
    fVar10 = (float)puVar4[1];
    fVar11 = (float)puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = fVar10;
    puVar5[2] = fVar11;
    puVar5[3] = uVar12;
    fn_822AA718(auStack_30,uVar1);
    fVar8 = *(float *)(((unsigned int)(auStack_30 + in_r0) & 0xfffffff0) + 4);
    fVar9 = *(float *)(((unsigned int)(auStack_30 + in_r0) & 0xfffffff0) + 8);
    fVar10 = fVar10 * fVar8 + 0.0 + fVar11 * fVar9;
    iVar2 = *(int *)(param_1 + 0x1c);
    pfVar6 = (float *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar10;
    pfVar6[1] = fVar10;
    pfVar6[2] = fVar10;
    pfVar6[3] = fVar10;
    uVar7 = in_r0 + *(int *)(iVar2 + 4) & 0xfffffff0;
    fVar10 = *(float *)(uVar7 + 4) * fVar8 + 0.0 + *(float *)(uVar7 + 8) * fVar9;
    pfVar6 = (float *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *pfVar6 = fVar10;
    pfVar6[1] = fVar10;
    pfVar6[2] = fVar10;
    pfVar6[3] = fVar10;
  }
  return 0;
}

