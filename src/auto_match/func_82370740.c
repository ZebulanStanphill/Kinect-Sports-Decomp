extern int fn_82250A18();
extern int fn_822A1460();
extern int fn_822AA770();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


unsigned int * fn_82370740(unsigned int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  iVar2 = *(int *)(param_2 + 0x204);
  uVar9 = 0;
  if (iVar2 == 1) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x260) + 0x1a0);
LAB_82370780:
    uVar9 = 1;
    if (fVar1 <= ltcg_pool_0_0f) {
      uVar9 = 0;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = *(float *)(*(int *)(param_2 + 0x260) + 0x240);
    goto LAB_82370780;
  }
  lVar4 = fn_8265C9E0(0x40);
  if (lVar4 == 0) {
    uVar6 = 0;
    goto LAB_8237083c;
  }
  if ((*(int *)(param_2 + 0xa0) == 0) || (uVar8 = 1, *(int *)(*(int *)(param_2 + 0xa0) + 0x40) != 1)
     ) {
    uVar8 = 0;
  }
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) == '\0') {
    puVar3 = (unsigned int *)**(int **)(param_2 + 8);
    iVar5 = fn_822AA770(*puVar3);
    if (iVar5 == 0) goto LAB_82370814;
    iVar5 = fn_822AA770(puVar3[1]);
    uVar7 = 1;
    if (iVar5 == 0) goto LAB_82370814;
  }
  else {
LAB_82370814:
    uVar7 = 0;
  }
  uVar6 = fn_822A1460(lVar4,param_2,param_2 + 0x338,iVar2,uVar7,uVar9,uVar8);
LAB_8237083c:
  *param_1 = uVar6;
  return param_1;
}

