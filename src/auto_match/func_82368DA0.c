#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82368DA0(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  if (param_2 != 0) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0x50U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  if (param_3 != 0) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0xe10) + 0xbc0U & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
  }
  if (param_4 == (float *)0x0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe10);
  fVar4 = *(float *)(iVar1 + 0xa8) * *(float *)(iVar1 + 0x8bc);
  fVar5 = *(float *)(iVar1 + 0xa0) * *(float *)(iVar1 + 0x8bc);
  fVar6 = fVar5 - fVar4;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar6 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar6) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar5 = fVar4;
  }
  *param_4 = fVar5 * *(float *)(iVar1 + 0x280);
  return;
}

