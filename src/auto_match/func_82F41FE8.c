void fn_82F41FE8(unsigned char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *puVar6;
  __int64 lVar7;
  unsigned char *pbVar8;
  __int64 lVar9;
  
  iVar2 = param_2 + 1 >> 1;
  lVar7 = (__int64)(param_6 >> 1);
  if (0 < lVar7) {
    do {
      if (0 < iVar2) {
        puVar6 = (unsigned char *)(param_4 + -1);
        lVar9 = (__int64)iVar2;
        pbVar8 = param_1;
        do {
          pbVar3 = pbVar8 + param_3;
          pbVar4 = pbVar8 + param_3 + 1;
          pbVar5 = pbVar8 + 1;
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 2;
          puVar6 = puVar6 + 1;
          *puVar6 = (char)((int)((unsigned int)*pbVar3 + (unsigned int)*pbVar4 + (unsigned int)*pbVar5 + (unsigned int)bVar1 + 2) >>
                          2);
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      lVar7 = lVar7 + -1;
      param_1 = param_1 + param_3 * 2;
      param_4 = param_4 + param_5;
    } while (lVar7 != 0);
  }
  return;
}

