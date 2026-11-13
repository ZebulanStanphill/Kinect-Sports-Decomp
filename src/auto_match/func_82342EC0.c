extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82341008();
extern int fn_82347890();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191138;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821917CC;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192568;
extern unsigned int lbl_821B1980;
extern unsigned int lbl_821B1BD0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82342EC0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar10;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [56];
  
  iVar10 = fn_82365BD8(auStack_40,param_4);
  fn_82341008(param_1,param_2,param_3,8);
  *param_1 = &lbl_821B1BD0;
  lVar8 = fn_8265C9E0(0xe0);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    uVar9 = fn_82365BD8(auStack_38,iVar10);
    uVar11 = fn_82347890(lVar8,uVar9);
  }
  param_1[4] = uVar11;
  if (*(int *)(iVar10 + 4) != 0) {
    fn_822315A0();
  }
  *param_1 = &lbl_821B1980;
  puVar12 = (unsigned int *)fn_8265C9E0(0x5c);
  if (puVar12 == (unsigned int *)0x0) {
    puVar12 = (unsigned int *)0x0;
  }
  else {
    puVar12[1] = 0;
    puVar12[6] = 0;
    *(unsigned char *)(puVar12 + 7) = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[10] = 0;
    puVar12[0x12] = 0;
    uVar6 = lbl_821CA460;
    uVar1 = lbl_82191138;
    *puVar12 = 0xffffffff;
    uVar7 = ltcg_pool_0_0f;
    uVar5 = lbl_82192568;
    uVar4 = lbl_82192510;
    uVar3 = lbl_821917CC;
    uVar2 = lbl_821916FC;
    uVar11 = lbl_8218E8E8;
    puVar12[2] = ltcg_pool_0_0f;
    puVar12[3] = uVar6;
    puVar12[4] = uVar7;
    puVar12[5] = uVar6;
    puVar12[0xb] = uVar1;
    puVar12[0xc] = uVar5;
    puVar12[0xd] = uVar4;
    puVar12[0xe] = uVar2;
    puVar12[0xf] = uVar6;
    puVar12[0x10] = uVar11;
    puVar12[0x11] = uVar3;
    puVar12[0x13] = 0;
    puVar12[0x14] = 0;
    puVar12[0x15] = 0;
  }
  param_1[5] = puVar12;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

