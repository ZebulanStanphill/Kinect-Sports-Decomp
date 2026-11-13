extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82015D08;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8326183C;


void fn_82F4DC20(void)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar7 = lbl_8326183C;
  uVar4 = lbl_821AAD20;
  iVar5 = 1;
  puVar6 = (unsigned int *)(lbl_8326183C + 0x2cc0);
  lVar8 = 5;
  uVar1 = *(unsigned int *)(lbl_8326183C + 0x2d7c);
  *(unsigned int *)(lbl_8326183C + 0x2ca4) = 6;
  *(unsigned int *)(iVar7 + 0x2cb0) = uVar4;
  *(unsigned int *)(iVar7 + 0x2cc0) = 0x40000000;
  *(unsigned int *)(iVar7 + 0x2cb8) = uVar1;
  fVar3 = lbl_82015D08;
  uVar1 = lbl_820145BC;
  fVar2 = lbl_82002C5C;
  do {
    iVar7 = iVar5 + -1;
    puVar6[6] = uVar1;
    iVar5 = iVar5 + 1;
    puVar6[4] = (float)(__int64)iVar7 * fVar2 - fVar3;
    puVar6 = puVar6 + 8;
    *puVar6 = 0x80000000;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

