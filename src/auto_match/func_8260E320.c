extern unsigned int *auStack_60;
extern unsigned int fStack_58;
extern int fn_82569980();
extern int fn_825B9678();


void fn_8260E320(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned char uVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_60 [8];
  float fStack_58;
  
  if (param_5 == 0) {
    uVar1 = *(unsigned char *)(param_3 + 0x10);
    puVar3 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
    uVar10 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar10;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
    iVar6 = param_3;
    iVar5 = fn_82569980(param_1,uVar1);
    if (iVar5 == -1) {
      dVar9 = (double)fStack_58;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + iVar5 * 0x30 + 0x10);
      puVar3 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
      in_register_000104d0 = *puVar3;
      in_register_000104d4 = puVar3[1];
      in_register_000104d8 = puVar3[2];
      in_vr77 = puVar3[3];
      if (*(int *)(iVar6 + 0x2c) == 0) {
        dVar9 = (double)*(float *)(iVar5 + 0xa8);
      }
      else {
        dVar9 = (double)(*(float *)(iVar5 + 0x8bc) * *(float *)(iVar5 + 0xa0));
      }
    }
    dVar8 = (double)*(float *)(param_3 + 0x1c);
    dVar7 = (double)(float)((double)*(float *)(param_3 + 0x18) * dVar9);
    iVar6 = fn_825B9678(*(unsigned int *)(param_3 + 0x14));
    *(float *)(iVar6 + 0x34) = (float)dVar7;
    *(float *)(iVar6 + 0x28) = (float)dVar8;
    if (*(int *)(param_3 + 0x20) != 0) {
      puVar3 = (unsigned int *)(iVar6 + 0x10U & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      *(unsigned char *)(iVar6 + 0x86) = 1;
      fVar2 = *(float *)(param_3 + 0x28);
      *(float *)(iVar6 + 8) = (float)((double)*(float *)(param_3 + 0x24) * dVar9);
      *(float *)(iVar6 + 0xc) = (float)((double)fVar2 * dVar9);
    }
  }
  return;
}

