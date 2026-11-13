#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_82601590();
extern int fn_82602F00();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82603068(int param_1,float *param_2,int param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_40 [64];
  
  if (param_1 == 0) {
    puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    fVar3 = lbl_821CA460;
  }
  else {
    iVar6 = fn_82602F00(param_1,param_4,*param_5);
    if (iVar6 != 0) {
      *param_5 = iVar6;
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(unsigned int *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      dVar7 = (double)fn_82601590(iVar6,param_1 + 0xf0,uVar8,auStack_40);
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      *param_2 = (float)dVar7;
      return;
    }
    puVar1 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    fVar4 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x8bc);
    fVar3 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x8bc);
    fVar5 = fVar3 - fVar4;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 * *(float *)(param_1 + 0x280);
  }
  *param_2 = fVar3;
  return;
}

