extern unsigned int *auStack_180;
extern unsigned int *auStack_1d0;
extern int fn_824B4298();
extern int fn_82F4F140();
extern int fn_82F4F578();
extern int fn_82F4FBE8();
extern int fn_82F4FC68();
extern int fn_82F4FD20();
extern int fn_82F4FD98();
extern int fn_82F50258();
extern int fn_82F539A8();


void fn_82F50348(int param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  int iVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned char *puVar10;
  float *pfVar11;
  __int64 lVar12;
  float *pfVar13;
  __int64 lVar14;
  double dVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int auStack_1d0 [18];
  float afStack_188 [2];
  unsigned char auStack_180 [304];

  iVar6 = (int)param_3;
  if ((-1 < iVar6) && (iVar6 < 6)) {
    fn_824B4298(param_1 + 0x1e0,param_2,0xab0);
    *(int *)(param_1 + 0xc90) = iVar6;
    lVar14 = 0x14;
    lVar12 = 0;
    puVar10 = auStack_180;
    do {
      uVar7 = param_3 * 0x1c + 5 + lVar12;
      lVar12 = lVar12 + 1;
      iVar6 = (int)param_2;
      puVar4 = (unsigned int *)((int)((uVar7 & 0xffffffff) << 4) + iVar6 & 0xfffffff0);
      uVar16 = puVar4[1];
      uVar17 = puVar4[2];
      uVar18 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(puVar10 + in_r0) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar16;
      puVar5[2] = uVar17;
      puVar5[3] = uVar18;
      puVar10 = puVar10 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (param_5 != '\0') {
      fn_82F50258(param_1,auStack_180);
    }
    puVar4 = (unsigned int *)(iVar6 + 0x10U & 0xfffffff0);
    uVar16 = puVar4[1];
    uVar17 = puVar4[2];
    uVar18 = puVar4[3];
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0xcf0) + 0x50U & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar16;
    puVar5[2] = uVar17;
    puVar5[3] = uVar18;
    iVar9 = 0;
    lVar12 = param_3 * 0x1c0 + param_2 + 0x30;
    lVar14 = 0x14;
    *(unsigned int *)(*(int *)(param_1 + 0xcf0) + 0x1844) = (unsigned int)LZCOUNT(*(int *)lVar12 + -2) >> 5;
    iVar8 = *(int *)(param_1 + 0xcf0);
    do {
      *(unsigned int *)((int)auStack_1d0 + iVar9) = *(unsigned int *)(iVar9 + iVar8);
      iVar9 = iVar9 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fn_82F539A8(iVar8 + 0x850,iVar8 + 0x60);
    fn_82F4F140(*(int *)(param_1 + 0xcf0) + 0x60,auStack_180,auStack_1d0,param_4,
                      *(unsigned int *)(*(int *)(param_1 + 0xcf0) + 0x1844));
    fn_82F4FC68(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
    fn_82F4FBE8(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
    fn_824B4298(param_1 + 0x20,lVar12,0x1c0);
    lVar14 = 0x14;
    pfVar13 = afStack_188;
    lVar12 = 0;
    iVar8 = 0;
    pfVar11 = (float *)(param_1 + 0x38);
    do {
      uVar7 = param_3 * 0x70 + 100 + lVar12;
      fVar1 = pfVar13[2];
      lVar12 = lVar12 + 1;
      fVar2 = pfVar13[3];
      pfVar13 = pfVar13 + 4;
      fVar3 = *pfVar13;
      *(unsigned int *)(*(int *)(param_1 + 0xcf0) + iVar8) =
           *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + iVar6);
      pfVar11[2] = -fVar1;
      pfVar11[3] = fVar2;
      iVar8 = iVar8 + 4;
      pfVar11 = pfVar11 + 4;
      *pfVar11 = -fVar3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    fn_82F539A8((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040,
                      (unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x60);
    fn_82F4FD20(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040);
    dVar15 = (double)fn_82F4FD98(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040);
    *(float *)(param_1 + 0xc94) = (float)dVar15;
    fn_82F4F578((unsigned __int64)*(unsigned int *)(param_1 + 0xcf0) + 0x1040);
  }
  return;
}
