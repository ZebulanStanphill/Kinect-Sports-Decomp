typedef unsigned char bool;
extern int fn_82E50F00();
extern int fn_82E51028();
extern int fn_82E52428();
extern int fn_82F64D08();


unsigned __int64 fn_82E52C30(__int64 param_1,unsigned __int64 param_2,short *param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  unsigned char *pbVar10;
  bool bVar11;
  
  fn_82E50F00(param_1 + 4,1);
  psVar4 = (short *)fn_82E52428(param_1,param_2);
  if ((psVar4 == (short *)0x0) || (sVar3 = *psVar4, *param_3 != sVar3)) {
LAB_82e52d8c:
    uVar9 = 0;
  }
  else {
    if (sVar3 == 5) {
      bVar11 = *(double *)(psVar4 + 4) == *(double *)(param_3 + 4);
joined_r0x82e52d0c:
      if (!bVar11) goto LAB_82e52d8c;
    }
    else if (sVar3 != 0xd) {
      if (sVar3 == 0x13) {
        bVar11 = *(int *)(psVar4 + 4) == *(int *)(param_3 + 4);
      }
      else if (sVar3 == 0x15) {
        bVar11 = *(__int64 *)(psVar4 + 4) == *(__int64 *)(param_3 + 4);
      }
      else if (sVar3 == 0x1f) {
        iVar5 = fn_82F64D08(*(unsigned int *)(psVar4 + 4),*(unsigned int *)(param_3 + 4));
        bVar11 = iVar5 == 0;
      }
      else if (sVar3 == 0x48) {
        pbVar7 = *(unsigned char **)(psVar4 + 4);
        pbVar10 = *(unsigned char **)(param_3 + 4);
        pbVar8 = pbVar7 + 0x10;
        do {
          bVar1 = *pbVar7;
          bVar2 = *pbVar10;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar7 = pbVar7 + 1;
          pbVar10 = pbVar10 + 1;
        } while (pbVar7 != pbVar8);
        bVar11 = (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
      }
      else {
        if (sVar3 != 0x1011) goto LAB_82e52cb8;
        iVar5 = *(int *)(psVar4 + 4);
        if (iVar5 != *(int *)(param_3 + 4)) goto LAB_82e52d8c;
        pbVar7 = *(unsigned char **)(param_3 + 6);
        lVar6 = 0;
        pbVar10 = *(unsigned char **)(psVar4 + 6);
        if (iVar5 != 0) {
          pbVar8 = pbVar10 + iVar5;
          do {
            lVar6 = (unsigned __int64)*pbVar10 - (unsigned __int64)*pbVar7;
            if (lVar6 != 0) break;
            pbVar10 = pbVar10 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar10 != pbVar8);
        }
        bVar11 = (int)lVar6 == 0;
      }
      goto joined_r0x82e52d0c;
    }
LAB_82e52cb8:
    uVar9 = 1;
  }
  *param_4 = uVar9;
  fn_82E51028(param_1 + 4,1);
  return 0;
}

