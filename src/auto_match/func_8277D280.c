#define true 1


void fn_8277D280(int param_1,unsigned int param_2,int param_3,int (**param_4)())

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  
  do {
    uVar11 = param_2;
    param_2 = uVar11 + 1;
    if (param_3 <= (int)param_2) {
      return;
    }
    while( true ) {
      uVar4 = uVar11 >> 4 & 0xffffffc;
      uVar5 = uVar11 + 1 >> 4 & 0xffffffc;
      iVar9 = (uVar11 + 1 & 0x3f) * 0xc;
      iVar10 = (uVar11 & 0x3f) * 0xc;
      cVar6 = (*param_4)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar9,
                         *(int *)(*(int *)(param_1 + 0xc) + uVar4) + iVar10);
      if (cVar6 == '\0') break;
      puVar7 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + uVar4) + iVar10);
      puVar8 = (unsigned int *)(*(int *)(uVar5 + *(int *)(param_1 + 0xc)) + iVar9);
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      if ((int)uVar11 < 1) break;
      uVar11 = uVar11 - 1;
    }
  } while( true );
}

