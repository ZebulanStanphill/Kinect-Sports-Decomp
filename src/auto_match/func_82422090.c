extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_822C18B8();
extern int fn_82417FC0();
extern int fn_8252D970();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82536590();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82422090(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  float fVar6;
  int in_r0;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int auStack_70;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned char auStack_50 [32];
  
  puVar1 = (unsigned int *)*param_1;
  if (*(int *)(*puVar1 + 0xc24) == 0) {
    param_1[3] = 1;
    param_1[6] = *(unsigned int *)(*puVar1 + 0x9a8);
    fVar6 = ltcg_pool_0_0f;
    param_1[2] = 2;
    param_1[7] = fVar6;
    fn_82536590((unsigned __int64)*puVar1 + 0x1490,0);
  }
  else {
    dVar7 = (double)ltcg_pool_0_0f;
    fn_8252D970(dVar7,param_1[1]);
    if (*(int *)(param_1[1] + 400) != 0) {
      *(unsigned int *)(**(int **)(*(int *)(param_1[1] + 400) + 400) + 0x118) = 0;
    }
    puVar4 = (unsigned int *)(param_1[1] + 0x50 & 0xfffffff0);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar8;
    puVar5[2] = uVar9;
    puVar5[3] = uVar10;
    if (param_2 != 0) {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      piVar2 = (int *)*param_1;
      iVar3 = *piVar2;
      fn_82417FC0(piVar2,&uStack_60);
      auStack_70 = *(unsigned int *)(iVar3 + 0x1480);
      auStack_70 =
           fn_825354B8(&auStack_70,auStack_50,0,**(unsigned int **)(*piVar2 + 0x2b58),
                             0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82536288(&auStack_70);
      fn_822C18B8(&uStack_60);
    }
    param_1[6] = (float)dVar7;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  param_1[5] = 1;
  return;
}

