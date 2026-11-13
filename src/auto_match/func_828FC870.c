extern unsigned int lbl_8202C578;
extern unsigned int lbl_8202C57A;
extern unsigned int lbl_8202C57C;
extern unsigned int lbl_8202C57E;
extern unsigned int lbl_8202C580;
extern unsigned int lbl_8202C582;


unsigned __int64 fn_828FC870(unsigned int *param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  
  pbVar6 = &lbl_8202C580;
  pbVar9 = *(unsigned char **)*param_1;
  pbVar5 = pbVar6;
  pbVar4 = pbVar9;
  do {
    bVar1 = *pbVar5;
    bVar2 = *pbVar4;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar5 != &lbl_8202C582);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    pbVar7 = &lbl_8202C57C;
    pbVar5 = pbVar7;
    pbVar4 = pbVar9;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != &lbl_8202C57E);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
      pbVar8 = &lbl_8202C578;
      pbVar5 = pbVar8;
      pbVar4 = pbVar9;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != &lbl_8202C57A);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        pbVar5 = *(unsigned char **)*param_2;
        pbVar4 = pbVar5;
        do {
          bVar1 = *pbVar6;
          bVar2 = *pbVar4;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar6 = pbVar6 + 1;
          pbVar4 = pbVar4 + 1;
        } while (pbVar6 != &lbl_8202C582);
        pbVar4 = pbVar5;
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar4;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar4 = pbVar4 + 1;
          } while (pbVar7 != &lbl_8202C57E);
          pbVar4 = pbVar5;
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
            do {
              bVar1 = *pbVar8;
              bVar2 = *pbVar4;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar8 = pbVar8 + 1;
              pbVar4 = pbVar4 + 1;
            } while (pbVar8 != &lbl_8202C57A);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
              pbVar4 = pbVar5 + 2;
              pbVar6 = pbVar9 + 2;
              do {
                uVar3 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar4;
                if (*pbVar6 == 0) break;
                pbVar6 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
              } while ((int)uVar3 == 0);
              if ((uVar3 & 0xffffffff) != 0) {
                return uVar3;
              }
              pbVar4 = pbVar9 + 2;
              do {
                if ((unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar5 != 0) {
                  return (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar5;
                }
                pbVar9 = pbVar9 + 1;
                pbVar5 = pbVar5 + 1;
              } while (pbVar9 != pbVar4);
              return 0;
            }
          }
        }
      }
    }
  }
  pbVar5 = *(unsigned char **)*param_2;
  do {
    uVar3 = (unsigned __int64)*pbVar9 - (unsigned __int64)*pbVar5;
    if (*pbVar9 == 0) {
      return uVar3;
    }
    pbVar9 = pbVar9 + 1;
    pbVar5 = pbVar5 + 1;
  } while ((int)uVar3 == 0);
  return uVar3;
}

