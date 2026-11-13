typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82441F88();
extern int fn_8252A1B0();
extern int fn_825327A8();
extern int fn_8255AE78();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329EA20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorConditionalSelect();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82442338(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned char param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  double dVar4;
  unsigned char auVar5 [16];
  unsigned char in_vs33 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vr0 [16];
  unsigned char auVar7 [16];
  unsigned char in_vr1 [16];
  unsigned char auVar8 [16];
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char in_vr77 [16];
  
  iVar1 = **(int **)(param_2 + 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1d0) == 1)) {
    *(unsigned int *)(iVar1 + 0x1d0) = 0;
  }
  *(unsigned int *)(*(int *)(param_2 + 4) + 0x2c) = 1;
  *(unsigned int *)(*(int *)(param_2 + 4) + 0x28) = 1;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8329EA20 + (int)in_r0) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  vectorConditionalSelect(in_vs33,in_vs45,in_vs44);
  puVar3 = (unsigned int *)(*(int *)(param_2 + 8) + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;{ V16 _vt0 = loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x60); memcpy(auVar5, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt1 = loadVectorLeftIndexed128((unsigned __int64)*(unsigned int *)(param_2 + 8),0x24); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(in_vr1,in_vr77,4,3); memcpy(auVar8, &_vt2, 16); }{ V16 _vt3 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr77,4,3); memcpy(auVar7, &_vt3, 16); }
  vectorRotateLeftImmediateMaskInsert128(auVar8,auVar7,3,2);
  fn_8255AE78(param_1);
  vectorAddFloatingPoint(auVar5,auVar6);
  fn_82441F88(param_2);
  dVar4 = (double)ltcg_pool_0_0f;
  if (**(int **)(param_2 + 4) != 0) {
    fn_8252A1B0(**(int **)(param_2 + 4),ZEXT48(&stack0x00000000) - 0x58,0);
  }
  *(unsigned char *)(*(int *)(param_2 + 8) + 0x28) = param_4;
  if (**(int **)(param_2 + 8) != 1) {
    fn_825327A8(**(unsigned int **)(param_2 + 4),0xffffffff821b998c);
    **(unsigned int **)(param_2 + 8) = 1;
    *(float *)(*(int *)(param_2 + 8) + 4) = (float)dVar4;
  }
  return;
}

