extern int fn_82F65FB0();
extern unsigned int lbl_82005708;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8215F990;


double fn_82ED4C80(double param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned char *param_4,unsigned int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  __int64 lVar9;
  int iVar10;
  double dVar11;
  
  iVar10 = 0;
  if (0 < (int)param_5) {
    lVar9 = (((unsigned __int64)param_5 - 1 & 0xffffffff) >> 2) + 1;
    iVar10 = 0;
    do {
      bVar1 = *param_4;
      bVar2 = *param_3;
      pbVar3 = param_3 + 1;
      pbVar4 = param_4 + 1;
      pbVar5 = param_3 + 2;
      pbVar6 = param_4 + 2;
      pbVar7 = param_3 + 3;
      pbVar8 = param_4 + 3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 4;
      iVar10 = ((unsigned int)*pbVar8 - (unsigned int)*pbVar7) * ((unsigned int)*pbVar8 - (unsigned int)*pbVar7) +
               ((unsigned int)*pbVar6 - (unsigned int)*pbVar5) * ((unsigned int)*pbVar6 - (unsigned int)*pbVar5) +
               ((unsigned int)*pbVar4 - (unsigned int)*pbVar3) * ((unsigned int)*pbVar4 - (unsigned int)*pbVar3) +
               ((unsigned int)bVar1 - (unsigned int)bVar2) * ((unsigned int)bVar1 - (unsigned int)bVar2) + iVar10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  dVar11 = lbl_82005708;
  if (lbl_8215F990 < (double)(__int64)iVar10 / (double)(__int64)(int)param_5) {
    dVar11 = (double)fn_82F65FB0((param_1 * param_1) /
                                       ((double)(__int64)iVar10 / (double)(__int64)(int)param_5));
    dVar11 = dVar11 * lbl_82015618;
  }
  return dVar11;
}

