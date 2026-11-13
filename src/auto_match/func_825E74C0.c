extern unsigned int *auStack_150;
extern unsigned int *auStack_180;
extern int fn_825207D0();
extern int fn_82543C70();
extern int fn_8256BD38();
extern int fn_826312F0();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_184;


void fn_825E74C0(int param_1,__int64 param_2,unsigned int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned char *puVar9;
  __int64 lVar10;
  unsigned int uStack00000024;
  int aiStack_190 [3];
  unsigned int uStack_184;
  unsigned char auStack_180 [48];
  unsigned char auStack_150 [44];
  float afStack_124 [73];
  
  uVar7 = 0;
  uStack00000024 = param_3;
  fn_8256BD38(aiStack_190,param_1,&stack0x00000024);
  if (aiStack_190[0] != *(int *)(param_1 + 4)) {
    if (*(int *)(aiStack_190[0] + 0x24) != 0) {
      puVar9 = auStack_150;
      puVar8 = (unsigned int *)(aiStack_190[0] + 8);
      do {
        if (3 < (uVar7 & 0xffffffff)) break;
        puVar8 = puVar8 + 1;
        fn_82F68CC0(puVar9,*puVar8,0x30);
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + 0x30;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(aiStack_190[0] + 0x24));
    }
    fn_82543C70(param_2,0x53,auStack_150,uVar7 * 3);
  }
  fVar2 = ltcg_pool_0_0f;
  puVar6 = &uStack_184;
  uVar5 = 0;
  pfVar4 = afStack_124;
  lVar10 = 6;
  do {
    fVar1 = *pfVar4;
    puVar6[1] = -(unsigned int)(uVar5 < uVar7) & 1;
    puVar6 = puVar6 + 2;
    *puVar6 = (unsigned int)(fVar2 <= fVar1);
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 0xc;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar10 = param_2 + 0xa22c;
  iVar3 = fn_825207D0(lVar10,auStack_180,0x30);
  if (iVar3 != 0) {
    fn_82A1DD38(lVar10,auStack_180);
    fn_826312F0(*(unsigned int *)param_2,0x73,auStack_180,0xc);
  }
  return;
}

