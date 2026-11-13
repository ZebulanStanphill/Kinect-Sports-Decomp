typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_82528FA8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_8218E178;
extern unsigned int lbl_821956BC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82463CA8(int param_1)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 in_r7;
  int iVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char auVar8 [16];
  unsigned char in_vs38 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int in_register_00010430;
  unsigned int in_register_00010434;
  unsigned int in_register_00010438;
  unsigned int in_vr67;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  iVar6 = param_1 + 0x30;
  dVar7 = (double)lbl_821CA460;
  iVar3 = fn_82528FA8(dVar7,*(unsigned int *)(param_1 + 8),param_1 + 0x14,iVar6,
                            0xffffffff821ca1a0,in_r7,0);
  *(int *)(param_1 + 0x20) = iVar3;
  puVar1 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  iVar4 = fn_825279F8();
  if ((iVar4 == 0) || (iVar4 == 3)) {
    puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = uVar5;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs40,in_vs32); memcpy(auVar8, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar8); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs38,in_vs41,auVar8); memcpy(auVar8, &_vt2, 16); }
    vectorConditionalSelect(auVar8,in_vs45,in_vs44);
    puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010430;
    puVar1[1] = in_register_00010434;
    puVar1[2] = in_register_00010438;
    puVar1[3] = in_vr67;
  }
  puVar1 = (unsigned int *)(in_r0 + iVar3 + 0x70 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  *(unsigned int *)(iVar3 + 0x170) = 0;
  puVar1 = (unsigned int *)(iVar3 + 0x60U & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  fn_82528948(iVar3);
  *(unsigned int *)(iVar3 + 0x2b0) = lbl_82005748;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = fn_82528FA8(dVar7,*(unsigned int *)(param_1 + 8),param_1 + 0x10,iVar6,
                              0xffffffff821ca1a0);
    *(unsigned int *)(param_1 + 0x1c) = uVar5;
  }
  uStack_60 = ltcg_pool_0_0f;
  uStack_5c = lbl_821956BC;
  uStack_58 = ltcg_pool_0_0f;
  iVar3 = fn_82528FA8(dVar7,*(unsigned int *)(param_1 + 8),param_1 + 0x18,param_1 + 0x40,
                            &uStack_60);
  *(int *)(param_1 + 0x24) = iVar3;
  fVar2 = lbl_8218E178;
  if (((*(float *)(iVar3 + 0xa0) != lbl_8218E178) || (*(float *)(iVar3 + 0xa4) != lbl_8218E178)) ||
     (*(float *)(iVar3 + 0xa8) != lbl_8218E178)) {
    *(float *)(iVar3 + 0xa0) = lbl_8218E178;
    *(unsigned int *)(iVar3 + 0x170) = 0;
    *(float *)(iVar3 + 0xa4) = fVar2;
    *(float *)(iVar3 + 0xa8) = fVar2;
    fn_82528948();
  }
  return;
}

