typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern int fn_822ABA88();
extern int fn_822B6A58();
extern int fn_82397D50();
extern int fn_82397ED8();
extern int fn_82399CB8();
extern int fn_824C8210();
extern int fn_824C97F0();
extern int fn_8255AEF0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8239A2D8(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  unsigned __int64 in_r0;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int *piVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar9 [16];
  unsigned char in_vr1 [16];
  unsigned char auVar10 [16];
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char auStack_50 [1];

  uVar5 = ZEXT48(&stack0x00000000);
  iVar7 = fn_8255AEF0((unsigned __int64)*(unsigned int *)(param_2 + 0x174) + 0x81c,param_2 + 0x868);
  if (iVar7 != 0) {
    piVar2 = (int *)(*(unsigned int **)(param_2 + 0xa8))[1];
    for (piVar8 = (int *)**(unsigned int **)(param_2 + 0xa8); piVar8 != piVar2; piVar8 = piVar8 + 2) {
      fn_824C97F0(*(unsigned int *)(*piVar8 + 0x28),0xffffffff821b4728);
    }
  }
  iVar7 = fn_82397ED8(param_2);
  if (iVar7 == 0) {
    if (*(int *)(param_2 + 0x178) == 2) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x870) - param_1);
      *(float *)(param_2 + 0x870) = fVar1;
      fVar4 = lbl_821CA460;
      fVar3 = lbl_8218E8FC;
      uVar6 = 0xffffffff821cc160;
      if (fVar1 <= ltcg_pool_0_0f) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fVar1 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
        *(unsigned int *)(param_2 + 0x874) = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x874)) >> 5;
        *(float *)(param_2 + 0x870) = fVar1 * fVar3 + fVar4;
      }
      piVar8 = *(int **)(*(int *)(param_2 + 0x874) * 4 + **(int **)(param_2 + 8));
      iVar7 = fn_822ABA88(*(unsigned int *)(piVar8[4] * 4 + *piVar8),0);
      memcpy((void *)(auVar9), (const void *)(iVar7 + 0x80U & 0xfffffff0), 16);
      memcpy((void *)((const void *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0)), auVar9, 16);
      loadVectorLeftIndexed128(in_r0,uVar5 - 0x50);
      loadVectorLeftIndexed128(in_r0,uVar5 - 0x48);
      loadVectorLeftIndexed128(in_r0,uVar6);
      loadVectorLeftIndexed128(in_r0,uVar5 - 0x60);
    }
    else {
      iVar7 = fn_82397D50(param_2);
      if ((iVar7 == 0) || (*(int *)(param_2 + 0x1f8) == 0)) {
        iVar7 = *(int *)(param_2 + 0x1e4);
        if (iVar7 == 0) {
          return;
        }
        if (*(int *)(iVar7 + 0x154) == 0) {
          return;
        }
        memcpy((void *)(auVar9), (const void *)(iVar7 + 0x10U & 0xfffffff0), 16);
        memcpy((void *)((const void *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0)), auVar9, 16);
        loadVectorLeftIndexed128(in_r0,uVar5 - 0x50);
        loadVectorLeftIndexed128(in_r0,uVar5 - 0x48);
      }
      else {
        memcpy((void *)(auVar9), (const void *)(*(int *)(param_2 + 0x1f8) + 0x80U & 0xfffffff0), 16);
        memcpy((void *)((const void *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0)), auVar9, 16);
        loadVectorLeftIndexed128(in_r0,uVar5 - 0x50);
        loadVectorLeftIndexed128(in_r0,uVar5 - 0x48);
      }
      loadVectorLeftIndexed128(in_r0,uVar5 - 0x60);
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    }{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr1,in_vr12,4,3); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(auVar9,in_vr13,4,3); memcpy(auVar9, &_vt1, 16); }
    vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2);
  }
  else {
    iVar7 = fn_82399CB8(param_2);
    piVar8 = *(int **)(**(int **)(param_2 + 8) + iVar7 * 4);
    uVar6 = fn_822ABA88(*(unsigned int *)(piVar8[4] * 4 + *piVar8),0);
    fn_822B6A58(uVar5 - 0x50,uVar6,3);
    if (1 < *(unsigned int *)(*(int *)(piVar8[4] * 4 + *piVar8) + 8)) {
      uVar6 = fn_822ABA88(*(unsigned int *)(piVar8[4] * 4 + *piVar8),1);
      fn_822B6A58(uVar5 - 0x40,uVar6,3);
      vectorAddFloatingPoint(in_vs45,in_vs32);
      loadVectorLeftIndexed128(in_r0,0xffffffff8218e8e8);
    }
  }
  fn_824C8210(*(unsigned int *)(param_2 + 0xa8));
  return;
}
