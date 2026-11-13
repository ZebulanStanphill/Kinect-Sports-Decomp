extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82D1CE60();
extern unsigned int lbl_82002AE0;


double fn_82D2A740(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_40 [1];
  unsigned char auStack_30 [24];
  
  iVar1 = *(int *)(param_2 + 0x20);
  dVar4 = (double)fn_82D1CE60(param_1 + 0x10,(unsigned __int64)*(unsigned int *)(iVar1 + 8) + 0x10,
                                    (unsigned __int64)*(unsigned int *)(iVar1 + 0xc) + 0x10,
                                    (unsigned __int64)*(unsigned int *)(iVar1 + 0x10) + 0x10,auStack_40,auStack_30)
  ;
  if (dVar4 < (double)*(float *)(param_1 + 0x20)) {
    *(float *)(param_1 + 0x20) = (float)dVar4;
    *(int *)(param_1 + 0x50) = iVar1;
    puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    uVar8 = *puVar3;
    uVar9 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
    puVar3 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar2 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
  }
  return (double)lbl_82002AE0;
}

