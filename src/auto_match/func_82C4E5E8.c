#define true 1
extern int fn_82C4E0F8();


void fn_82C4E5E8(__int64 *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  int iVar7;
  int iVar8;
  unsigned char *pbVar9;
  
  do {
    pbVar9 = *(unsigned char **)((int)param_1 + 0xc);
    if (pbVar9 < *(unsigned char **)(param_1 + 2) + -4) {
      bVar1 = *pbVar9;
      bVar2 = pbVar9[1];
      bVar3 = pbVar9[2];
      bVar4 = pbVar9[3];
      bVar5 = pbVar9[4];
      bVar6 = pbVar9[5];
      iVar7 = *(int *)(param_1 + 1);
      *(unsigned char **)((int)param_1 + 0xc) = pbVar9 + 6;
      *(int *)(param_1 + 1) = iVar7 + 0x30;
      *param_1 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) *
                    0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6
                 << ((__int64)-iVar7 & 0x7fU)) + *param_1;
      return;
    }
    if (pbVar9 <= *(unsigned char **)(param_1 + 2)) {
      do {
        iVar7 = *(int *)(param_1 + 1);
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        iVar8 = iVar7 + 8;
        *(int *)(param_1 + 1) = iVar8;
        *param_1 = ((unsigned __int64)bVar1 << ((__int64)(0x28 - iVar7) & 0x7fU)) + *param_1;
      } while (pbVar9 <= *(unsigned char **)(param_1 + 2));
      *(unsigned char **)((int)param_1 + 0xc) = pbVar9;
      if (-1 < iVar8) {
        return;
      }
    }
    if (*(int *)(param_1 + 3) != 1) {
      if (-0x11 < *(int *)(param_1 + 1)) {
        return;
      }
      if (*(int *)((int)param_1 + 0x14) == 0) {
        *(unsigned int *)((int)param_1 + 0x14) = 2;
      }
      *(unsigned int *)(param_1 + 1) = 0x7f;
      return;
    }
    fn_82C4E0F8(param_1);
  } while( true );
}

