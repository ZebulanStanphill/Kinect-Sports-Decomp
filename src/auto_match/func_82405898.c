extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int fStack_58;
extern int fn_8227DA30();
extern int fn_82405638();
extern int memcpy();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82405898(double param_1,int param_2)

{
  float *pfVar1;
  int in_r0;
  int *piVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [1];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  float fStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  fVar5 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
  *(float *)(param_2 + 0x34) = fVar5;
  if (fVar5 <= ltcg_pool_0_0f) {
    iVar3 = *(int *)(param_2 + 0x2c) + 1;
    *(int *)(param_2 + 0x2c) = iVar3;
    if (iVar3 == *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c) >> 3) {
      fn_82405638(param_2,3);
      return;
    }
    *(unsigned int *)(param_2 + 0x34) = *(unsigned int *)(param_2 + 0x54);
  }
  piVar2 = (int *)(**(int (***)())(**(int **)(param_2 + 0x10) + 8))();
  iVar3 = (**(int (***)())(*piVar2 + 8))();
  pfVar1 = (float *)(iVar3 + 0x80U & 0xfffffff0);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  iVar3 = (**(int (***)())(**(int **)(*(int *)(param_2 + 0x2c) * 8 + *(int *)(param_2 + 0x1c)) + 0x14))
                    (auStack_80);
  pfVar1 = (float *)(in_r0 + iVar3 & 0xfffffff0);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  dVar4 = (double)lbl_821CA460;
  fn_8227DA30((double)(float)(dVar4 - (double)(*(float *)(param_2 + 0x34) /
                                                    *(float *)(param_2 + 0x54))),param_2 + 0xc0);
  uStack_60 = *(unsigned int *)(param_2 + 0x58);
  pfVar1 = (float *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *pfVar1 = fVar9 + fVar5;
  pfVar1[1] = fVar10 + fVar6;
  pfVar1[2] = fVar11 + fVar7;
  pfVar1[3] = fVar12 + fVar8;
  uStack_54 = 0xffffffff;
  fStack_58 = (float)dVar4;
  uStack_50 = 0;
  uStack_4c = 4;
  uStack_5c = uStack_60;
  memcpy(param_2 + 0xc0,auStack_70,0x30);
  return;
}

