#define true 1


void fn_823D7540(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  int (**param_5)())

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  
  uVar7 = param_2;
  while( true ) {
    uVar1 = (uVar7 + 1 & 0xffffffff) << 1;
    uVar10 = uVar1 & 0xfffffffe;
    iVar2 = (int)param_1;
    if ((int)param_3 <= (int)uVar10) break;
    lVar8 = (uVar1 & 0x1ffffffe) * 8 + param_1;
    cVar5 = (*param_5)(lVar8,lVar8 + -8);
    if (cVar5 != '\0') {
      uVar10 = uVar10 - 1;
    }
    iVar3 = (int)((uVar10 & 0x1fffffff) << 3);
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    *(unsigned int *)(iVar4 + iVar2) = *(unsigned int *)(iVar3 + iVar2);
    *(unsigned int *)(iVar4 + iVar2 + 4) = *(unsigned int *)(iVar3 + iVar2 + 4);
    uVar7 = uVar10;
  }
  if ((int)uVar10 == (int)param_3) {
    iVar3 = (int)((param_3 & 0xffffffff) << 3) + iVar2;
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    uVar7 = param_3 - 1;
    *(unsigned int *)(iVar4 + iVar2) = *(unsigned int *)(iVar3 + -8);
    *(unsigned int *)(iVar4 + iVar2 + 4) = *(unsigned int *)(iVar3 + -4);
  }
  iVar3 = (int)uVar7;
  uVar6 = iVar3 - 1;
  uVar1 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (uVar10 = uVar1, (int)param_2 < iVar3) {
    lVar8 = (uVar10 & 0x1fffffff) * 8 + param_1;
    cVar5 = (*param_5)(lVar8,param_4);
    if (cVar5 == '\0') break;
    puVar9 = (unsigned int *)lVar8;
    iVar3 = (int)uVar10;
    uVar6 = iVar3 - 1;
    iVar4 = (int)((uVar7 & 0x1fffffff) << 3);
    *(unsigned int *)(iVar4 + iVar2) = *puVar9;
    *(unsigned int *)(iVar4 + iVar2 + 4) = puVar9[1];
    uVar1 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    uVar7 = uVar10;
  }
  iVar3 = (int)((uVar7 & 0xffffffff) << 3);
  *(unsigned int *)(iVar3 + iVar2) = *param_4;
  *(unsigned int *)(iVar3 + iVar2 + 4) = param_4[1];
  return;
}

