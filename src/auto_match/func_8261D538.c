typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_78;
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82529D38();
extern int fn_8252A1B0();
extern int fn_8252AF80();
extern int fn_8252BAB8();
extern int fn_82A1DD38();
extern V16 vectorCompareEqualToFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8261D538(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned char in_cr6;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar8 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  int aiStack_80 [2];
  unsigned char auStack_78 [120];
  
  iVar2 = (int)param_2;
  puVar1 = (unsigned int *)(iVar2 + 0x50U & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  iVar4 = fn_825279F8();
  if ((iVar4 == 0) || (in_cr6 = (iVar4 < 3) << 3, iVar4 == 3)) {
    puVar1 = (unsigned int *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs39,in_vs45); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs42,auVar8); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar8); memcpy(in_vs45, &_vt2, 16); }{ V16 _vt3 = vectorConditionalSelect(in_vs45,in_vs32,in_vs44); memcpy(in_vs44, &_vt3, 16); }
    puVar1 = (unsigned int *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010430;
    puVar1[1] = in_register_00010434;
    puVar1[2] = in_register_00010438;
    puVar1[3] = in_vr67;
  }
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  *(unsigned int *)(param_1 + 0x170) = 0;
  puVar1 = (unsigned int *)(param_1 + 0x60U & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  fn_82528948(param_1);
  fn_82529D38(param_2,auStack_78);
  fn_8252A1B0(param_1,auStack_78,0);
  puVar1 = (unsigned int *)(iVar2 + 0xa0U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  vectorCompareEqualToFloatingPoint(in_vs45,in_vs44);
  if (!(bool)(in_cr6 >> 3 & 1)) {
    puVar3 = (unsigned int *)(in_r0 + param_1 + 0xa0 & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar5;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    *(unsigned int *)(param_1 + 0x170) = 0;
    fn_82528948(param_1);
  }
  if (*(float *)(param_1 + 0x8bc) != *(float *)(iVar2 + 0x8bc)) {
    *(float *)(param_1 + 0x8bc) = *(float *)(iVar2 + 0x8bc);
    *(unsigned int *)(param_1 + 0x170) = 0;
  }
  fn_8252BAB8(param_1,0xffffffff82196288,0,0);
  uVar5 = (**(int (***)())(**(int **)(iVar2 + 0x8c0) + 4))();
  *(unsigned int *)(param_1 + 0x8c0) = uVar5;
  lVar6 = 0;
  lVar7 = param_2 + 0x1ec;
  do {
    lVar7 = lVar7 + 0x10;
    fn_8252AF80((double)*(float *)lVar7,param_1);
    lVar6 = lVar6 + 1;
  } while ((int)lVar6 < 2);
  fn_82A1DD38(param_1 + 0x250,param_2 + 0x250,0x40);
  uVar5 = *(unsigned int *)(iVar2 + 0x2b0);
  *(unsigned int *)(param_1 + 0x294) = 0x30;
  *(unsigned int *)(param_1 + 0x290) = 1;
  *(unsigned int *)(param_1 + 0x298) = 1;
  iVar4 = (int)(param_2 + 0x250);
  puVar1 = (unsigned int *)(iVar4 + 0x50U & 0xfffffff0);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  *(unsigned int *)(param_1 + 0x2b0) = uVar5;
  puVar1 = (unsigned int *)(param_1 + 0x2a0U & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  *(unsigned int *)(param_1 + 0x2c0) = 2;
  *(unsigned int *)(param_1 + 0x2c4) = 0x30;
  *(unsigned int *)(param_1 + 0x2c8) = 1;
  puVar1 = (unsigned int *)(iVar4 + 0x80U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar3 = (unsigned int *)(param_1 + 0x2d0U & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar5;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar1 = (unsigned int *)(iVar4 + 0x90U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar3 = (unsigned int *)(param_1 + 0x2e0U & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar5;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  aiStack_80[0] = *(int *)(iVar2 + 0x1c0);
  if (aiStack_80[0] != 0) {
    if (*(int *)(param_1 + 0x1bc) != 0) {
      fn_8251FA58();
      *(unsigned int *)(param_1 + 0x1bc) = 0;
    }
    uVar5 = fn_8251F720(aiStack_80,0);
    *(unsigned int *)(param_1 + 0x1bc) = uVar5;
    *(int *)(param_1 + 0x1c0) = aiStack_80[0];
  }
  return;
}

