extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8A8;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_8207A32C;
extern unsigned int lbl_820885A0;
extern unsigned int lbl_820885C4;
extern unsigned int lbl_821468EC;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82DFB7E8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  uVar7 = lbl_821AAD20;
  uVar6 = lbl_820885C4;
  uVar5 = lbl_820885A0;
  uVar4 = lbl_8207A32C;
  uVar3 = lbl_8200DFF4;
  uVar1 = lbl_82002AE0;
  *(unsigned short *)((int)param_1 + 6) = 1;
  uVar2 = lbl_8200D8A8;
  *param_1 = &lbl_821468EC;
  param_1[2] = uVar3;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar4;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar7;
  param_1[9] = uVar7;
  param_1[10] = uVar7;
  param_1[0xb] = uVar2;
  return;
}

