extern int fn_82E50BE8();
extern int fn_82E75AC8();
extern int fn_82E75CF8();
extern int fn_82E76168();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821537A8;
extern unsigned int lbl_821537B8;
extern unsigned int lbl_821537C8;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


unsigned __int64 fn_82E41C58(int param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned __int64 uVar6;
  unsigned char *pbVar7;
  unsigned int uStack_60;
  int *apiStack_5c [3];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  if (param_3 == (int *)0x0) {
    return 0xffffffff80070057;
  }
  uStack_60 = 0;
  puVar4 = (unsigned int *)0x0;
  apiStack_5c[0] = (int *)0x0;
  uVar3 = (**(int (***)())(*param_3 + 0x88))(param_3);
  uVar6 = (unsigned __int64)uStack_60;
  if (-1 < (int)uStack_60) {
    uVar3 = uVar3 & 0xffff;
    if ((uVar3 == 0) || (0x7f < uVar3)) {
      uVar6 = 0xffffffffc00d36b3;
LAB_82e41eb0:
      uStack_60 = (unsigned int)uVar6;
    }
    else {
      uVar6 = (**(int (***)())(*param_3 + 0x90))(param_3,apiStack_5c);
      uStack_60 = (unsigned int)uVar6;
      if (-1 < (__int64)uVar6) {
        if (apiStack_5c[0] == (int *)0x0) {
          uVar6 = 0xffffffffc00d36bb;
          goto LAB_82e41f04;
        }
        uStack_50 = lbl_8202E618;
        uStack_4c = lbl_8202E61C;
        uStack_48 = lbl_8202E620;
        uStack_44 = lbl_8202E624;
        uVar6 = (**(int (***)())(*apiStack_5c[0] + 0x84))(apiStack_5c[0],&uStack_50);
        uStack_60 = (unsigned int)uVar6;
        if (-1 < (__int64)uVar6) {
          pbVar5 = (unsigned char *)&uStack_50;
          pbVar7 = &lbl_821537A8;
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar5;
            if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
            pbVar7 = pbVar7 + 1;
            pbVar5 = pbVar5 + 1;
          } while (pbVar7 != &lbl_821537B8);
          if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
            uVar6 = fn_82E50BE8(0x80,0,0,0,0);
            if ((uVar6 & 0xffffffff) == 0) goto LAB_82e41e74;
            puVar4 = (unsigned int *)
                     fn_82E75CF8(uVar6,param_3,param_4,*(unsigned __int64 *)(param_1 + 0x58),param_2
                                       ,param_1,&uStack_60);
          }
          else {
            pbVar5 = (unsigned char *)&uStack_50;
            pbVar7 = &lbl_821537B8;
            do {
              bVar1 = *pbVar7;
              bVar2 = *pbVar5;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar7 != &lbl_821537C8);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
              uVar6 = fn_82E50BE8(0x78,0,0,0,0);
              if ((uVar6 & 0xffffffff) == 0) {
LAB_82e41e74:
                puVar4 = (unsigned int *)0x0;
              }
              else {
                puVar4 = (unsigned int *)
                         fn_82E76168(uVar6,param_3,param_4,*(unsigned __int64 *)(param_1 + 0x58),
                                           param_2,param_1,&uStack_60);
              }
            }
            else {
              uVar6 = fn_82E50BE8(0x68,0,0,0,0);
              if ((uVar6 & 0xffffffff) == 0) goto LAB_82e41e74;
              puVar4 = (unsigned int *)
                       fn_82E75AC8(uVar6,param_3,param_4,*(unsigned __int64 *)(param_1 + 0x58),
                                         param_2,param_1,&uStack_60);
            }
          }
          if (puVar4 == (unsigned int *)0x0) {
            uVar6 = 0xffffffff8007000e;
            goto LAB_82e41eb0;
          }
          uVar6 = (unsigned __int64)uStack_60;
          if (-1 < (int)uStack_60) {
            *(unsigned int **)((uVar3 + 0x1b) * 4 + param_1) = puVar4;
          }
        }
      }
    }
  }
  if (apiStack_5c[0] != (int *)0x0) {
    (**(int (***)())(*apiStack_5c[0] + 8))();
    uVar6 = (unsigned __int64)uStack_60;
    apiStack_5c[0] = (int *)0x0;
  }
  if (((int)uVar6 < 0) && (puVar4 != (unsigned int *)0x0)) {
    (**(int (***)())*puVar4)(puVar4,1);
    uVar6 = (unsigned __int64)uStack_60;
  }
LAB_82e41f04:
  *(unsigned int *)(param_1 + 0x5a4) = 0;
  return uVar6;
}

