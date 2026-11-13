#define true 1
extern int fn_82C4E3B0();


__int64 fn_830D8C00(__int64 *param_1,unsigned __int64 param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  unsigned char *pbVar8;
  int iVar9;
  __int64 lVar10;
  
  iVar9 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar9 + -10;
  *param_1 = *param_1 << 10;
  if (iVar9 < 10) {
    do {
      pbVar8 = *(unsigned char **)((int)param_1 + 0xc);
      if (pbVar8 < (unsigned char *)(*(int *)(param_1 + 2) - 4U)) {
        bVar1 = *pbVar8;
        bVar2 = pbVar8[1];
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        bVar5 = pbVar8[4];
        bVar6 = pbVar8[5];
        iVar9 = *(int *)(param_1 + 1);
        *(unsigned char **)((int)param_1 + 0xc) = pbVar8 + 6;
        *(int *)(param_1 + 1) = iVar9 + 0x30;
        *param_1 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) *
                      0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                    (unsigned __int64)bVar6 << ((__int64)-iVar9 & 0x7fU)) + *param_1;
        break;
      }
      iVar9 = fn_82C4E3B0(param_1);
    } while (iVar9 == 1);
  }
  do {
    iVar9 = *(int *)(param_1 + 1);
    lVar10 = *param_1;
    *(int *)(param_1 + 1) = iVar9 + -1;
    *param_1 = lVar10 << 1;
    if (iVar9 < 1) {
      do {
        pbVar8 = *(unsigned char **)((int)param_1 + 0xc);
        if (pbVar8 < (unsigned char *)(*(int *)(param_1 + 2) - 4U)) {
          bVar1 = *pbVar8;
          bVar2 = pbVar8[1];
          bVar3 = pbVar8[2];
          bVar4 = pbVar8[3];
          bVar5 = pbVar8[4];
          bVar6 = pbVar8[5];
          iVar9 = *(int *)(param_1 + 1);
          *(unsigned char **)((int)param_1 + 0xc) = pbVar8 + 6;
          *(int *)(param_1 + 1) = iVar9 + 0x30;
          *param_1 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) *
                        0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                      (unsigned __int64)bVar6 << ((__int64)-iVar9 & 0x7fU)) + *param_1;
          break;
        }
        iVar9 = fn_82C4E3B0(param_1);
      } while (iVar9 == 1);
    }
    sVar7 = *(short *)((int)(((param_4 - (lVar10 >> 0x3f)) + 0x8000U & 0xffffffff) << 1) + param_3);
    param_4 = (__int64)sVar7;
    if (-1 < sVar7) {
      return param_4;
    }
  } while( true );
}

