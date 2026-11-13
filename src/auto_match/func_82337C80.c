extern unsigned int *auStack_20;
extern unsigned int fStack_1c;
extern int fn_82435FA8();
extern int fn_8255A070();


double fn_82337C80(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  float *pfVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_20 [4];
  float fStack_1c;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0xc) + 0x174);
  if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) ||
     (iVar1 = *(int *)(iVar1 + 0x5c),
     *(int *)(*(int *)(iVar1 + 0x1d4) * 4 + *(int *)(iVar1 + 0x1c4)) == 0)) {
    puVar3 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    dVar5 = (double)fStack_1c;
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x1a0);
    if (*(int *)(*(int *)(*(int *)((int)pfVar2[3] + 0x174) + 0x5c) + 0x1d4) == -1) {
      uVar6 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)((int)pfVar2[3] + 0x174) + 0x5c);
      uVar6 = *(unsigned int *)(*(int *)(iVar1 + 0x1d4) * 4 + *(int *)(iVar1 + 0x1c4));
    }
    fn_82435FA8((double)*pfVar2,auStack_20,uVar6,param_3,*(unsigned char *)(pfVar2 + 0x11));
    dVar5 = (double)fn_8255A070();
  }
  return dVar5;
}

