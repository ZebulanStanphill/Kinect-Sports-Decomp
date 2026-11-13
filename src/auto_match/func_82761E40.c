extern int fn_827611B8();


unsigned __int64 fn_82761E40(int param_1,int *param_2)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  unsigned char *pbVar10;
  
  iVar3 = (**(int (***)())(*param_2 + 0x40))(param_2);
  if (iVar3 == 0) {
    pbVar9 = *(unsigned char **)(param_1 + 0x28);
    uVar4 = 0;
    iVar3 = 0;
    uVar8 = 0;
    for (lVar5 = ((unsigned __int64)(*pbVar9 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      uVar4 = (unsigned int)pbVar9[iVar1] << (uVar8 & 0x3f) | uVar4;
      uVar8 = uVar8 + 8;
    }
    pbVar10 = (unsigned char *)param_2[10];
    uVar8 = 0;
    iVar3 = 0;
    uVar6 = 0;
    for (lVar5 = ((unsigned __int64)(*pbVar10 >> 3) & 3) + 1; lVar5 != 0; lVar5 = lVar5 + -1) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      uVar8 = (unsigned int)pbVar10[iVar1] << (uVar6 & 0x3f) | uVar8;
      uVar6 = uVar6 + 8;
    }
    if (uVar4 == uVar8) {
      lVar5 = 0;
      if (uVar4 != 0) {
        pbVar7 = pbVar9 + uVar4;
        do {
          lVar5 = (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar10;
          if (lVar5 != 0) break;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar9 != pbVar7);
      }
      uVar2 = (unsigned __int64)((int)lVar5 == 0);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = fn_827611B8(param_1,param_2);
  }
  return uVar2;
}

