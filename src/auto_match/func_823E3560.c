extern unsigned int *auStack_40;
extern unsigned int fStack_30;
extern int fn_823E28B0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82560010();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_823E3560(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned short *puVar5;
  unsigned int *puVar6;
  double dVar7;
  unsigned int auStack_40 [2];
  unsigned int uStack_38;
  unsigned int uStack_34;
  float fStack_30;
  
  auStack_40[0] = param_2;
  iVar3 = fn_82560010(*(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 0x118) + 0x24),param_3)
  ;
  fStack_30 = ltcg_pool_0_0f;
  if (iVar3 != 0) {
    iVar4 = fn_8251F720(iVar3 + 0x40,0);
    dVar7 = (double)*(float *)(iVar4 + 0x1c);
    fn_8251FA58();
    fStack_30 = (float)((double)(lbl_821CA460 / *(float *)(iVar3 + 0x48)) * dVar7);
  }
  lVar2 = fn_82560010(*(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 0x118) + 0x24),param_3)
  ;
  puVar5 = (unsigned short *)fn_8251F720(lVar2 + 0x44,0);
  uVar1 = puVar5[6];
  while (uVar1 != 0) {
    if (uVar1 == 0x24) goto LAB_823e3620;
    puVar5 = (unsigned short *)((unsigned int)*puVar5 + (int)puVar5);
    uVar1 = puVar5[6];
  }
  puVar5 = (unsigned short *)0x0;
LAB_823e3620:
  uStack_38 = *(unsigned int *)(puVar5 + 2);
  uStack_34 = *(unsigned int *)(puVar5 + 4);
  fn_8251FA58();
  puVar6 = (unsigned int *)fn_823E28B0(*(unsigned int *)(param_1 + 8),auStack_40);
  *puVar6 = uStack_38;
  puVar6[1] = uStack_34;
  puVar6[2] = fStack_30;
  return;
}

