extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_82195508;
extern unsigned int lbl_8219550C;
extern unsigned int lbl_82195510;
extern unsigned int lbl_82195514;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825B1F70(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  
  uVar10 = lbl_821CA460;
  uVar6 = lbl_82195508;
  uVar1 = lbl_8218E8E8;
  if (param_1[0xf] != 0) {
    return;
  }
  *param_1 = 1;
  uVar11 = ltcg_pool_0_0f;
  param_1[0x17] = 0;
  uVar9 = lbl_82195514;
  uVar8 = lbl_82195510;
  uVar7 = lbl_8219550C;
  uVar5 = lbl_821954CC;
  uVar4 = lbl_82192F70;
  uVar3 = lbl_82191FCC;
  uVar2 = lbl_8218E8FC;
  param_1[3] = uVar10;
  param_1[4] = uVar6;
  param_1[1] = uVar1;
  param_1[2] = uVar7;
  param_1[5] = uVar3;
  param_1[0xc] = uVar11;
  param_1[0xd] = uVar11;
  param_1[0x18] = uVar8;
  param_1[0x19] = uVar9;
  param_1[0x1a] = uVar4;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar1;
  return;
}

