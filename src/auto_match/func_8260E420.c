extern unsigned int *auStack_30;
extern unsigned int fStack_28;
extern int fn_82569980();
extern int fn_825B9718();


void fn_8260E420(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned char uVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_30 [8];
  float fStack_28;
  
  if (param_5 == 0) {
    uVar1 = *(unsigned char *)(param_3 + 0x10);
    puVar3 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    iVar6 = param_3;
    iVar5 = fn_82569980(param_1,uVar1);
    if (iVar5 == -1) {
      dVar7 = (double)fStack_28;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x68);
      iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + iVar5 * 0x30 + 0x10);
      puVar3 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      if (iVar6 == 0) {
        dVar7 = (double)*(float *)(iVar5 + 0xa8);
      }
      else {
        dVar7 = (double)(*(float *)(iVar5 + 0x8bc) * *(float *)(iVar5 + 0xa0));
      }
    }
    iVar6 = fn_825B9718((double)(float)((double)*(float *)(param_3 + 0x18) * dVar7),
                              (double)(*(float *)(param_3 + 8) - *(float *)(param_3 + 4)),
                              *(unsigned int *)(param_3 + 0x14));
    if (*(int *)(param_3 + 0x5c) != 0) {
      fVar2 = *(float *)(param_3 + 100);
      *(float *)(iVar6 + 8) = (float)((double)*(float *)(param_3 + 0x60) * dVar7);
      *(float *)(iVar6 + 0xc) = (float)((double)fVar2 * dVar7);
    }
  }
  return;
}

