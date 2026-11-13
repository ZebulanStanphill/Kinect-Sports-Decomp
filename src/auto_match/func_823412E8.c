typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82338F48();
extern int fn_823414A0();
extern int fn_82F50D88();
extern float lbl_8218E8FC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823412E8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 in_r0;
  double dVar3;
  double dVar4;
  unsigned char in_vr0 [16];
  unsigned char in_vr1 [16];
  unsigned char in_vr11 [16];
  unsigned char auVar5 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x10) = 2;
  dVar4 = (double)ltcg_pool_0_0f;
  *(float *)(*(int *)(param_1 + 0xc) + 0x14) = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 4) = 1;
  dVar3 = (double)lbl_821CA460;
  iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar1 != 0) {
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(0xffffffff821ca45c,4);
    vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3); memcpy(auVar5, &_vt0, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar5,3,2);
    fn_82F50D88(dVar3,dVar3,dVar3,*(unsigned int *)(iVar1 + 0x20));
    fn_823414A0(param_1);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(unsigned int *)(iVar1 + 0x18) = 0;
  uVar2 = lbl_82193B00;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(iVar1 + 0x1c) =
       (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar3) * lbl_8218E8FC +
       lbl_821916FC;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0xc) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x24) = (float)dVar4;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x20) = (float)dVar4;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x2c) = 0;
  *(float *)(*(int *)(param_1 + 0xc) + 0x4c) = (float)dVar4;
  *(float *)(*(int *)(param_1 + 0xc) + 0x38) = (float)dVar4;
  iVar1 = *(int *)(param_1 + 0xc);
  *(float *)(iVar1 + 0x58) = (float)dVar4;
  *(float *)(iVar1 + 0x5c) = (float)dVar4;
  *(unsigned int *)(iVar1 + 0x54) = 1;
  *(float *)(iVar1 + 0x60) = (float)dVar4;
  *(unsigned int *)(iVar1 + 100) = uVar2;
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0x1c) = 0;
  fn_82338F48(**(unsigned int **)(param_1 + 0xc),1);
  return;
}

