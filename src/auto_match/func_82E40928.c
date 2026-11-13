extern int fn_82E3BF28();
extern int fn_82E40080();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_8202E628;
extern unsigned int lbl_8214C020;
extern unsigned int lbl_8214C030;
extern unsigned int lbl_8214C040;
extern unsigned int uStack_48;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;


__int64 fn_82E40928(__int64 param_1,unsigned char *param_2,unsigned int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned __int64 *puVar7;
  __int64 lVar8;
  __int64 lVar9;
  int *apiStack_b0 [2];
  unsigned __int64 uStack_a8;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned short uStack_90;
  unsigned int uStack_48;
  
  if ((param_2 == (unsigned char *)0x0) || (param_3 < 0x5c)) {
    lVar8 = -0x7ff8ffa9;
  }
  else {
    pbVar6 = (unsigned char *)&lbl_8202E618;
    lVar8 = 0;
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar6;
      bVar2 = *pbVar5;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = pbVar5 + 1;
    } while (pbVar6 != &lbl_8202E628);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      apiStack_b0[0] = (int *)0x0;
      iVar4 = fn_82E3BF28(param_1 + 0x1ac,param_2,apiStack_b0,&uStack_a8);
      if (param_4 == iVar4) {
        if (param_4 != 0) {
          lVar8 = (**(int (***)())(*apiStack_b0[0] + 4))(apiStack_b0[0],*(unsigned int *)(param_2 + 0x58))
          ;
        }
      }
      else if (param_4 == 0) {
        lVar8 = -0x7fffbfff;
      }
      else {
        lVar8 = fn_82E40080(param_1,param_2,*(unsigned int *)(param_2 + 0x58));
        if (-1 < lVar8) {
          pbVar6 = &lbl_8214C020;
          pbVar5 = param_2;
          do {
            bVar1 = *pbVar6;
            bVar2 = *pbVar5;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar6 = pbVar6 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar6 != &lbl_8214C030);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
            pbVar6 = &lbl_8214C030;
            pbVar5 = param_2;
            do {
              bVar1 = *pbVar6;
              bVar2 = *pbVar5;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar6 = pbVar6 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar6 != &lbl_8214C040);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
              return lVar8;
            }
          }
          apiStack_b0[0] = (int *)0x0;
          lVar9 = 0xb;
          puVar3 = &uStack_a8;
          do {
            puVar7 = puVar3;
            puVar3 = puVar7 + 1;
            *puVar3 = 0;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          *(unsigned int *)(puVar7 + 2) = 0;
          uStack_90 = *(unsigned short *)(param_2 + 0x10);
          uStack_a0 = lbl_8202E618;
          uStack_9c = lbl_8202E61C;
          uStack_98 = lbl_8202E620;
          uStack_94 = lbl_8202E624;
          uStack_48 = 1000;
          iVar4 = fn_82E3BF28(param_1 + 0x1ac,&uStack_a0,apiStack_b0,&uStack_a8);
          if (iVar4 == 0) {
            lVar8 = fn_82E40080(param_1,&uStack_a0,uStack_48);
          }
        }
      }
    }
    else {
      lVar8 = -0x7fffbfff;
    }
  }
  return lVar8;
}

