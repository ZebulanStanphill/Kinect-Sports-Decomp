#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_28;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_823C2BC0();
extern int fn_8253A918();
extern int fn_8255C890();
extern unsigned int iStack_60;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_823C0C80(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_r0;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iStack_60;
  unsigned char auStack_50 [8];
  float fStack_48;
  unsigned char auStack_40 [8];
  float fStack_38;
  unsigned char auStack_30 [8];
  float fStack_28;
  
  uVar8 = *(unsigned int *)((param_2 + 0xa1) * 4 + param_1);
  puVar1 = (unsigned int *)(in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  fn_8255C890(uVar8,auStack_40,auStack_50);
  iVar7 = *(int *)(param_1 + 0xe10);
  fVar3 = *(float *)(iVar7 + 0xa8) * *(float *)(iVar7 + 0x8bc);
  fVar4 = *(float *)(iVar7 + 0xa0) * *(float *)(iVar7 + 0x8bc);
  fVar5 = fVar4 - fVar3;
  if (fStack_38 <= fStack_28) {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fStack_38 = fStack_48 - (fVar4 * *(float *)(iVar7 + 0x280) + lbl_82193AF0);
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar3;
    }
    fStack_48 = fVar4 * *(float *)(iVar7 + 0x280) + lbl_82193AF0 + fStack_38;
  }
  fVar3 = *(float *)(iVar7 + 0xa8) * *(float *)(iVar7 + 0x8bc);
  fVar4 = *(float *)(iVar7 + 0xa0) * *(float *)(iVar7 + 0x8bc);
  fVar5 = fVar4 - fVar3;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = fVar3;
  }
  iVar7 = fn_823C2BC0((double)(fVar4 * *(float *)(iVar7 + 0x280)),param_1);
  if (((iVar7 == 0) || (iStack_60 == 0)) ||
     (iVar7 = fn_8253A918(auStack_30,auStack_40,auStack_50), iVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    *(unsigned char *)(param_1 + 0xd51) = 0;
    uVar6 = 1;
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    *(unsigned char *)(param_1 + 0xd50) = 0;
    *(unsigned char *)(param_1 + 0xd52) = 1;
    puVar1 = (unsigned int *)(param_1 + 0xd70U & 0xfffffff0);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  }
  return uVar6;
}

