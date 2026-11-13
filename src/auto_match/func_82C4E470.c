extern int fn_82C4E0F8();


void fn_82C4E470(__int64 *param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned char *pbVar10;
  
  pbVar10 = *(unsigned char **)((int)param_1 + 0xc);
  if (pbVar10 != (unsigned char *)0x0) {
    uVar7 = *(unsigned int *)(param_1 + 1);
    *param_1 = *param_1 << (param_2 & 0x7f);
    *(int *)(param_1 + 1) = (int)(uVar7 - param_2);
    if ((__int64)(uVar7 - param_2) < 0) {
      if ((unsigned char *)(*(int *)(param_1 + 2) + -4) <= pbVar10) {
        do {
          if (pbVar10 <= *(unsigned char **)(param_1 + 2)) {
            do {
              iVar8 = *(int *)(param_1 + 1);
              bVar1 = *pbVar10;
              pbVar10 = pbVar10 + 1;
              iVar9 = iVar8 + 8;
              *(int *)(param_1 + 1) = iVar9;
              *param_1 = ((unsigned __int64)bVar1 << ((__int64)(0x28 - iVar8) & 0x7fU)) + *param_1;
            } while (pbVar10 <= *(unsigned char **)(param_1 + 2));
            *(unsigned char **)((int)param_1 + 0xc) = pbVar10;
            if (-1 < iVar9) {
              return;
            }
          }
          if (*(int *)(param_1 + 3) != 1) {
            if (*(int *)(param_1 + 1) < -0x10) {
              if (*(int *)((int)param_1 + 0x14) == 0) {
                *(unsigned int *)((int)param_1 + 0x14) = 2;
              }
              *(unsigned int *)(param_1 + 1) = 0x7f;
            }
            goto LAB_82c4e5cc;
          }
          fn_82C4E0F8(param_1);
          pbVar10 = *(unsigned char **)((int)param_1 + 0xc);
        } while ((unsigned char *)(*(int *)(param_1 + 2) + -4) <= pbVar10);
      }
      bVar1 = *pbVar10;
      bVar2 = pbVar10[1];
      bVar3 = pbVar10[2];
      bVar4 = pbVar10[3];
      iVar8 = *(int *)(param_1 + 1);
      bVar5 = pbVar10[4];
      bVar6 = pbVar10[5];
      *(int *)(param_1 + 1) = iVar8 + 0x30;
      pbVar10 = pbVar10 + 6;
      *param_1 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) *
                    0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 + (unsigned __int64)bVar6
                 << ((__int64)-iVar8 & 0x7fU)) + *param_1;
LAB_82c4e5cc:
      *(unsigned char **)((int)param_1 + 0xc) = pbVar10;
    }
  }
  return;
}

