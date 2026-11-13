typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_40;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252AD10();
extern int fn_8252AEB8();
extern int fn_82535F50();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823209E8(int param_1)

{
  int iVar1;
  float *pfVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar5 [16];
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  unsigned char auStack_40 [64];
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 2) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      fn_8252AD10(*(unsigned int *)(param_1 + 0x20),*(unsigned int *)(param_1 + 0x30),iVar1);
    }
    else {
      fn_8252AEB8(*(unsigned int *)(param_1 + 0x20),iVar1,1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  pfVar2 = (float *)(param_1 + 0x10U & 0xfffffff0);
  fVar10 = in_register_00010010 + *pfVar2;
  fVar11 = in_register_00010014 + pfVar2[1];
  fVar12 = in_register_00010018 + pfVar2[2];
  fVar13 = in_vr1 + pfVar2[3];
  pfVar2 = (float *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *pfVar2 = fVar10;
  pfVar2[1] = fVar11;
  pfVar2[2] = fVar12;
  pfVar2[3] = fVar13;
  iVar4 = fn_825279F8(iVar1);
  if ((iVar4 == 0) || (iVar4 == 3)) {
    pfVar2 = (float *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *pfVar2 = fVar10;
    pfVar2[1] = fVar11;
    pfVar2[2] = fVar12;
    pfVar2[3] = fVar13;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar5, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar5); memcpy(auVar5, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar5); memcpy(auVar5, &_vt2, 16); }
    vectorConditionalSelect(auVar5,in_vs32,in_vs44);
    puVar3 = (unsigned int *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
    *puVar3 = in_register_00010430;
    puVar3[1] = in_register_00010434;
    puVar3[2] = in_register_00010438;
    puVar3[3] = in_vr67;
  }
  puVar3 = (unsigned int *)(in_r0 + iVar1 + 0x70 & 0xfffffff0);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  *(unsigned int *)(iVar1 + 0x170) = 0;
  puVar3 = (unsigned int *)(iVar1 + 0x60U & 0xfffffff0);
  *puVar3 = uVar6;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fn_82528948(iVar1);
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_82535F50(*(int *)(param_1 + 0x24),auStack_40);
  }
  return;
}

