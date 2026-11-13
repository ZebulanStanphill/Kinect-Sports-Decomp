typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_60;
extern int fn_82520158();
extern int fn_82560100();
extern unsigned int lbl_82192480;
extern unsigned int lbl_821C7F50;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825A2810(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_60 [96];
  
  if (*(int *)(param_2 + 0x93c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x304) == 0) {
    fn_82520158(0xffffffff821c7f60,param_1 + 0x304,0);
  }
  if (*(int *)(param_1 + 0x624) == 0) {
    iVar4 = 0;
  }
  else {
    if (*(float *)(param_1 + 0x62c) < lbl_82192480) {
      return;
    }
    uVar5 = *(unsigned int *)(param_1 + 0x308);
    if (3 < (int)uVar5) {
      return;
    }
    uVar6 = *(unsigned int *)(param_1 + 0x630);
    uVar1 = *(unsigned int *)(param_1 + 0x634);
    if (uVar6 < uVar1) {
      dVar7 = (double)ltcg_pool_0_0f;
      do {
        if ((uVar5 & 3) == 0) {
          puVar2 = (unsigned int *)((unsigned int)(&lbl_821C7F50 + (int)in_r0) & 0xfffffff0);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
          puVar3 = (unsigned int *)((unsigned int)(auStack_60 + (int)in_r0) & 0xfffffff0);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          fn_82560100(dVar7,param_2,param_1 + 0x304,auStack_60,auStack_60,0,0,0,0);
        }
        uVar6 = uVar6 + 0x20;
        uVar5 = uVar5 + 1;
      } while (uVar6 < uVar1);
    }
    iVar4 = *(int *)(param_1 + 0x308) + 1;
  }
  *(int *)(param_1 + 0x308) = iVar4;
  return;
}

