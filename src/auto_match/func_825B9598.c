extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825B9678();
extern unsigned int ltcg_pool_0_0f;


int fn_825B9598(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if (((param_1 != (unsigned int *)0x0) &&
      (uVar4 = (unsigned __int64)*param_1, uVar4 != (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) &&
     (puVar2 = (unsigned int *)fn_8251F720(param_1,0), puVar2 != (unsigned int *)0x0)) {
    if ((param_2 == 0) || ((float)puVar2[4] <= ltcg_pool_0_0f)) {
      dVar6 = (double)(float)puVar2[2];
      dVar5 = (double)(float)puVar2[1];
      iVar3 = fn_825B9678(*puVar2);
      *(float *)(iVar3 + 0x34) = (float)dVar5;
      *(float *)(iVar3 + 0x28) = (float)dVar6;
    }
    else {
      dVar6 = (double)(float)puVar2[2];
      dVar5 = (double)(float)puVar2[1];
      iVar3 = fn_825B9678(*puVar2);
      *(float *)(iVar3 + 0x34) = (float)dVar5;
      *(float *)(iVar3 + 0x28) = (float)dVar6;
      puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      *(unsigned char *)(iVar3 + 0x86) = 1;
      puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      uVar7 = puVar2[4];
      *(unsigned int *)(iVar3 + 8) = puVar2[3];
      *(unsigned int *)(iVar3 + 0xc) = uVar7;
    }
    fn_8251FA58(puVar2);
    return iVar3;
  }
  return 0;
}

