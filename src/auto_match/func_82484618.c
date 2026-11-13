extern int fn_8251FBA8();


unsigned char * fn_82484618(int param_1)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char bVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  uVar2 = fn_8251FBA8(*(unsigned int *)(param_1 + 0x18dc));
  pbVar3 = *(unsigned char **)(param_1 + 0x18dc);
  uVar8 = 0;
  uVar2 = (uVar2 & 0xffffffff) / 100;
  if ((int)uVar2 != 0) {
    pbVar4 = pbVar3 + 0x30;
    do {
      bVar6 = *(unsigned char *)(param_1 + 0x34);
      bVar1 = *pbVar3;
      if (bVar6 == bVar1) {
        pbVar5 = (unsigned char *)(param_1 + 0x34);
        do {
          pbVar5 = pbVar5 + 1;
          if (bVar6 == 0) {
            iVar7 = 0;
            goto LAB_82484688;
          }
          bVar6 = *pbVar5;
          bVar1 = (pbVar4 + (-100 - param_1))[(int)pbVar5];
        } while (bVar6 == bVar1);
      }
      iVar7 = (unsigned int)bVar6 - (unsigned int)bVar1;
LAB_82484688:
      if (iVar7 == 0) {
        pbVar5 = (unsigned char *)(param_1 + 0x234);
        bVar1 = *pbVar4;
        bVar6 = *pbVar5;
        if (bVar6 == bVar1) {
          iVar7 = (int)pbVar4 - (int)pbVar5;
          do {
            pbVar5 = pbVar5 + 1;
            if (bVar6 == 0) {
              iVar7 = 0;
              goto LAB_824846cc;
            }
            bVar6 = *pbVar5;
            bVar1 = pbVar5[iVar7];
          } while (bVar6 == bVar1);
        }
        iVar7 = (unsigned int)bVar6 - (unsigned int)bVar1;
LAB_824846cc:
        if (iVar7 == 0) {
          pbVar5 = (unsigned char *)(param_1 + 0x334);
          bVar1 = pbVar4[0x18];
          bVar6 = *pbVar5;
          if (bVar6 == bVar1) {
            iVar7 = 0x18 - (int)pbVar5;
            do {
              pbVar5 = pbVar5 + 1;
              if (bVar6 == 0) {
                iVar7 = 0;
                goto LAB_82484718;
              }
              bVar6 = *pbVar5;
              bVar1 = pbVar5[(int)(pbVar4 + iVar7)];
            } while (bVar6 == bVar1);
          }
          iVar7 = (unsigned int)bVar6 - (unsigned int)bVar1;
LAB_82484718:
          if (iVar7 == 0) {
            return pbVar3 + 0x60;
          }
        }
      }
      uVar8 = uVar8 + 1;
      pbVar3 = pbVar3 + 100;
      pbVar4 = pbVar4 + 100;
    } while ((uVar8 & 0xffffffff) < uVar2);
  }
  return (unsigned char *)0x0;
}

